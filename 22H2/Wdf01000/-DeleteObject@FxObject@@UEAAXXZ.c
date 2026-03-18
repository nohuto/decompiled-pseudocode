/*
 * XREFs of ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00094F0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DeleteObject@FxDevice@@UEAAXXZ @ 0x1C0051CB0 (-DeleteObject@FxDevice@@UEAAXXZ.c)
 *     ?DeleteObject@FxDriver@@UEAAXXZ @ 0x1C0053C10 (-DeleteObject@FxDriver@@UEAAXXZ.c)
 *     ?DeleteObject@FxInterrupt@@UEAAXXZ @ 0x1C0089480 (-DeleteObject@FxInterrupt@@UEAAXXZ.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008DBB8 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 * Callees:
 *     ?PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z @ 0x1C0004174 (-PerformDisposingDisposeChildrenLocked@FxObject@@AEAAEEE@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?DestroyChildren@FxObject@@IEAAXXZ @ 0x1C00083F0 (-DestroyChildren@FxObject@@IEAAXXZ.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012660 (WPP_IFR_SF_qqLL.c)
 *     ?DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z @ 0x1C00155E4 (-DeletedAndDisposedWorkerLocked@FxObject@@AEAAXEE@Z.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C00189D8 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0059E94 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 *     ?RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z @ 0x1C005A288 (-RemoveChildObjectInternal@FxObject@@AEAAJPEAV1@@Z.c)
 *     ?TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z @ 0x1C005A340 (-TraceDroppedEvent@FxObject@@QEAAXW4FxObjectDroppedEvent@@@Z.c)
 *     ?QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C005B47C (-QueueDeferredDisposeLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 */

void __fastcall FxObject::DeleteObject(FxObject *this)
{
  KIRQL v2; // bp
  unsigned __int16 m_ObjectState; // ax
  unsigned __int16 m_ObjectFlags; // cx
  FxObject *v5; // rdi
  KIRQL v6; // r15
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_m_ChildEntry; // rax
  _LIST_ENTRY *Blink; // rdx
  FxObject *v10; // rcx
  _LIST_ENTRY *p_m_ChildListHead; // rdi
  _LIST_ENTRY *v12; // rsi
  unsigned __int16 v13; // ax
  KIRQL v14; // r13
  unsigned __int8 v15; // al
  FxObject *m_ParentObject; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *_a2; // rdx
  KIRQL v19; // dl
  KIRQL v20; // di
  _FX_DRIVER_GLOBALS *v21; // rcx
  const void *v22; // rdx

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
  m_ObjectState = this->m_ObjectState;
  m_ObjectFlags = this->m_ObjectFlags | 4;
  this->m_ObjectFlags = m_ObjectFlags;
  if ( m_ObjectState != 1 )
  {
    if ( m_ObjectState != 2 )
    {
      FxObject::TraceDroppedEvent(this, FxObjectDroppedEventDeleteObject);
LABEL_36:
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
      return;
    }
    m_ParentObject = this->m_ParentObject;
    if ( m_ParentObject )
    {
      if ( FxObject::RemoveChildObjectInternal(m_ParentObject, this) == -1073741738 )
      {
        FxObject::SetObjectStateLocked(this, 8u);
        goto LABEL_36;
      }
      this->m_ParentObject = 0LL;
    }
    FxObject::DeletedAndDisposedWorkerLocked(this, v2, 1u);
    return;
  }
  v5 = this->m_ParentObject;
  if ( v5 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&v5->m_SpinLock.m_Lock);
    if ( v5->m_ObjectState != 1 )
    {
      FxObject::TraceDroppedEvent(v5, FxObjectDroppedEventRemoveChildObjectInternal);
      KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v6);
      FxObject::SetObjectStateLocked(this, 7u);
      KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
      return;
    }
    Flink = this->m_ChildEntry.Flink;
    p_m_ChildEntry = &this->m_ChildEntry;
    if ( Flink->Blink != &this->m_ChildEntry || (Blink = this->m_ChildEntry.Blink, Blink->Flink != p_m_ChildEntry) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    this->m_ChildEntry.Blink = &this->m_ChildEntry;
    p_m_ChildEntry->Flink = p_m_ChildEntry;
    KeReleaseSpinLock(&v5->m_SpinLock.m_Lock, v6);
    m_ObjectFlags = this->m_ObjectFlags;
    this->m_ParentObject = 0LL;
  }
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && v2 )
    goto LABEL_48;
  if ( (m_ObjectFlags & 0x200) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 9u);
      m_ObjectFlags = this->m_ObjectFlags;
    }
    if ( (m_ObjectFlags & 0x80u) != 0 )
    {
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 9;
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  this->m_ObjectState = 9;
  if ( (m_ObjectFlags & 0x20) != 0 )
  {
    if ( v2 )
      goto LABEL_48;
  }
  v10 = (FxObject *)this->m_ChildListHead.Flink;
  p_m_ChildListHead = &this->m_ChildListHead;
  if ( v10 != (FxObject *)&this->m_ChildListHead )
  {
    while ( !v2 || (v10[-1].m_SpinLock.m_Lock & 0x10) == 0 )
    {
      v10 = (FxObject *)v10->__vftable;
      if ( v10 == (FxObject *)p_m_ChildListHead )
        goto LABEL_13;
    }
LABEL_48:
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    v19 = v2;
LABEL_49:
    KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v19);
    return;
  }
LABEL_13:
  KeReleaseSpinLock(&this->m_SpinLock.m_Lock, v2);
  v12 = p_m_ChildListHead->Flink;
  if ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    while ( 1 )
    {
      v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v12[-1]);
      if ( WORD1(v12[-3].Flink) != 1 )
      {
        switch ( WORD1(v12[-3].Flink) )
        {
          case 5:
            goto LABEL_27;
          case 7:
            v15 = FxObject::PerformEarlyDisposeWorkerAndUnlock((FxObject *)&v12[-5].Blink, v14, 0);
            goto LABEL_28;
          default:
            FxObject::TraceDroppedEvent((FxObject *)&v12[-5].Blink, FxObjectDroppedEventPerformEarlyDispose);
            KeReleaseSpinLock((PKSPIN_LOCK)&v12[-1], v14);
            goto LABEL_29;
        }
      }
      FxObject::SetObjectStateLocked((FxObject *)&v12[-5].Blink, 3u);
LABEL_27:
      v15 = FxObject::PerformDisposingDisposeChildrenLocked((FxObject *)&v12[-5].Blink, v14, 0);
LABEL_28:
      if ( !v15 )
        break;
LABEL_29:
      v12 = v12->Flink;
      if ( v12 == p_m_ChildListHead )
        goto LABEL_14;
    }
    v20 = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
    FxObject::QueueDeferredDisposeLocked(this, FxObjectStateDeferedDeleting);
    v19 = v20;
    goto LABEL_49;
  }
LABEL_14:
  if ( ((this->m_ObjectFlags & 0x800) == 0 || this->Dispose(this)) && (this->m_ObjectFlags & 0x400) != 0 )
    FxObject::CallCleanupCallbacks(this);
  v13 = this->m_ObjectFlags;
  if ( (v13 & 0x200) != 0 )
  {
    v21 = this->m_Globals;
    if ( v21->FxVerboseOn )
    {
      v22 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v22 = 0LL;
      WPP_IFR_SF_qqLL(v21, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, v22, this->m_ObjectState, 0xAu);
      v13 = this->m_ObjectFlags;
    }
    if ( (v13 & 0x80u) != 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 10;
  }
  this->m_ObjectState = 10;
  FxObject::DestroyChildren(this);
  this->Release(this, 0LL, 1246, "minkernel\\wdf\\framework\\shared\\object\\fxobjectstatemachine.cpp");
}
