unsigned __int8 __fastcall FxInterrupt::_InterruptDisableThunk(FxInterrupt **SyncContext, _FX_DRIVER_GLOBALS *a2)
{
  *((_DWORD *)SyncContext + 2) = FxInterrupt::InterruptDisableInvokeCallback(*SyncContext, a2);
  return 1;
}
