/*
 * XREFs of ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C0038C50
 * Callers:
 *     ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0038D80 (--_GFxCallbackMutexLock@@UEAAPEAXI@Z.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C003FE58 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C006344C (--1FxIoQueue@@UEAA@XZ.c)
 * Callees:
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C001ACB0 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 */

void __fastcall FxCallbackMutexLock::~FxCallbackMutexLock(FxCallbackMutexLock *this)
{
  FxVerifierLock *m_Verifier; // rcx

  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackMutexLock::`vftable';
  m_Verifier = this->m_Verifier;
  if ( m_Verifier )
    FxVerifierLock::`scalar deleting destructor'(m_Verifier);
  this->m_Lock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxCallbackMutexLock_vtbl *)FxCallbackLock::`vftable';
}
