/*
 * XREFs of ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C003E6F8
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x1C003D530 (--1FxDevice@@UEAA@XZ.c)
 *     ??1FxDriver@@UEAA@XZ @ 0x1C003FE58 (--1FxDriver@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::IsDisposed(FxObject *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v4; // al
  bool v5; // bl

  m_Globals = this->m_Globals;
  if ( !m_Globals->FxVerifierOn || !m_Globals->FxVerifierHandle )
    return 1;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  v5 = this->m_ObjectState != 1;
  KeReleaseSpinLock(p_m_Lock, v4);
  return v5;
}
