void __fastcall ADAPTER_DISPLAY::AcquireOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3999LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_OpmI2CMutex.IsOwner()", 3999LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 46));
}
