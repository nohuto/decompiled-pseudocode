void __fastcall FxIoQueue::_DeferredDispatchThreadThunk(FxIoQueue *Parameter, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_Globals = Parameter->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xDu, 0x68u, WPP_FxIoQueue_cpp_Traceguids);
  FxIoQueue::DeferredDispatchRequestsFromWorkerThread(Parameter, a2, a3);
}
