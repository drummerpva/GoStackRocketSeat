import { persistStore } from 'redux-persist';
import createSagaMiddleware from 'redux-saga';
import createStore from './createStore';
import persistReducers from './modules/persistReducers';

import rootReducer from './modules/rootReducer';
import rootSaga from './modules/rootSaga';

const sagaMonitor = __DEV__ ? console.tron.createSagaMonitor() : null;

const sagaMiddleware = createSagaMiddleware({ sagaMonitor });

const middleWares = [sagaMiddleware];

const store = createStore(persistReducers(rootReducer), middleWares);
const persistor = persistStore(store);

sagaMiddleware.run(rootSaga);

export { store, persistor };
