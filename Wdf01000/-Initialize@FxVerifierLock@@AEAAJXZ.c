/*
 * XREFs of ?Initialize@FxVerifierLock@@AEAAJXZ @ 0x1C001B740
 * Callers:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C001B150 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0039214 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxVerifierLock::Initialize(FxVerifierLock *this)
{
  if ( this->m_UseMutex )
  {
    this->m_Mutex.m_Lock.Count = 1;
    this->m_Mutex.m_Lock.Owner = 0LL;
    this->m_Mutex.m_Lock.Contention = 0;
    KeInitializeEvent(&this->m_Mutex.m_Lock.Event, SynchronizationEvent, 0);
    this->m_Mutex.m_DbgFlagIsInitialized = 1;
  }
  return 0LL;
}
