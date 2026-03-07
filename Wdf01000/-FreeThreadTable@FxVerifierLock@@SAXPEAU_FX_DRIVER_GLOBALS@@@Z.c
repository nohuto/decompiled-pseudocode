void __fastcall FxVerifierLock::FreeThreadTable(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned __int64 *p_m_Lock; // rbx
  KIRQL v3; // al
  FX_POOL_TRACKER *ThreadTable; // rcx
  KIRQL v5; // di

  p_m_Lock = &FxDriverGlobals->ThreadTableLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&FxDriverGlobals->ThreadTableLock.m_Lock);
  ThreadTable = (FX_POOL_TRACKER *)FxDriverGlobals->ThreadTable;
  v5 = v3;
  if ( ThreadTable )
  {
    FxPoolFree(ThreadTable);
    FxDriverGlobals->ThreadTable = 0LL;
  }
  KeReleaseSpinLock(p_m_Lock, v5);
}
