/*
 * XREFs of ?DeleteEarlyDisposedObject@FxObject@@IEAAXXZ @ 0x1C0001304
 * Callers:
 *     ?PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z @ 0x1C0001238 (-PostProcessCompletion@FxRequest@@AEAAXW4FxRequestCompletionState@@PEAVFxIoQueue@@@Z.c)
 * Callees:
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0003350 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeleteEarlyDisposedObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // al
  FxObject *m_ParentObject; // rcx
  KIRQL v5; // si

  this->m_ObjectFlags |= 4u;
  if ( !this->m_ParentObject )
    goto LABEL_2;
  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ParentObject = this->m_ParentObject;
  v5 = v3;
  if ( !m_ParentObject )
  {
LABEL_7:
    KeReleaseSpinLock(p_m_Lock, v5);
LABEL_2:
    FxObject::DeletedAndDisposedWorkerLocked(this, 0, 0);
    return;
  }
  if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
  {
    this->m_ParentObject = 0LL;
    goto LABEL_7;
  }
  FxObject::SetObjectStateLocked(this, FxObjectStateWaitingForParentDeleteAndDisposed);
  KeReleaseSpinLock(p_m_Lock, v5);
}
