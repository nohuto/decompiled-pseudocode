/*
 * XREFs of ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x1C0046380
 * Callers:
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C00465C0 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxObject::IsPassiveCallbacks(FxObject *this, unsigned __int8 AcquireLock)
{
  unsigned __int64 *p_m_Lock; // rdi
  FxObject *v3; // rbx
  KIRQL v4; // al

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = this;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  LOBYTE(v3) = v3->m_ObjectFlags & 1;
  KeReleaseSpinLock(p_m_Lock, v4);
  return (unsigned __int8)v3;
}
