void AddThreadWakeEventDispatcherToIOCP()
{
  IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
    *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
    ghMITEvent,
    lambda_0f9e2a8fc479216b45af02f10e3c5bbd_::_lambda_invoker_cdecl_,
    0LL);
}
