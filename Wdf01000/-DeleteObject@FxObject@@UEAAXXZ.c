/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C00032C0
 * Callers:
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C003DDA0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0040020 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C007ECA0 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008543C (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C0003350 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C0003460 (-DeleteWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00034D0 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C000536C (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C0046564 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  unsigned __int64 *p_m_Lock; // rsi
  KIRQL v3; // al
  int m_ObjectState; // r8d
  unsigned __int8 v5; // di
  int v6; // r8d
  FxObject *m_ParentObject; // rcx
  FxObject *v9; // rcx
  FxObjectState v10; // edx

  p_m_Lock = &this->m_SpinLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  this->m_ObjectFlags |= 4u;
  v5 = v3;
  if ( !m_ObjectState )
    goto LABEL_8;
  v6 = m_ObjectState - 1;
  if ( !v6 )
  {
    m_ParentObject = this->m_ParentObject;
    if ( !m_ParentObject )
    {
LABEL_6:
      FxObject::DeleteWorkerAndUnlock(this, v5, v6);
      return;
    }
    if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) != -1073741738 )
    {
      this->m_ParentObject = 0LL;
      goto LABEL_6;
    }
    v10 = FxObjectStateWaitingForEarlyDispose;
    goto LABEL_14;
  }
  if ( v6 - 1 )
  {
LABEL_8:
    FxObject::TraceDroppedEvent(this, FxObjectDroppedEventDeleteObject);
LABEL_9:
    KeReleaseSpinLock(p_m_Lock, v5);
    return;
  }
  v9 = this->m_ParentObject;
  if ( v9 )
  {
    if ( FxObject::RemoveChildObjectInternal(v9, this) == -1073741738 )
    {
      v10 = FxObjectStateWaitingForParentDeleteAndDisposed;
LABEL_14:
      FxObject::SetObjectStateLocked(this, v10);
      goto LABEL_9;
    }
    this->m_ParentObject = 0LL;
  }
  FxObject::DeletedAndDisposedWorkerLocked(this, v5, 1u);
}
