/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x1C00021D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C00041EC (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0005638 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000C960 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C0015808 (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00550FC (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0059B9C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C005B5F0 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005B788 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0077EE8 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, FxObjectDebugLeakDetection *Tag, int Line, const char *File)
{
  unsigned __int8 m_Reserved; // bp
  unsigned __int8 m_IrpAllocation; // di
  unsigned __int8 m_CanComplete; // r15
  unsigned __int32 v8; // esi
  unsigned __int16 m_ObjectFlags; // cx
  _LIST_ENTRY *v11; // r8
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v13; // r12
  _QWORD *v14; // r13
  void (__fastcall *v15)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *); // rax
  void (__fastcall *v16)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *); // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // r12
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v24; // dl
  _LIST_ENTRY *v25; // [rsp+30h] [rbp-38h]
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_Reserved = this->m_Reserved;
  m_IrpAllocation = this->m_IrpAllocation;
  m_CanComplete = this->m_CanComplete;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v8 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v8 )
  {
    m_ObjectFlags = this->m_ObjectFlags;
    if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      if ( (m_ObjectFlags & 0x80u) != 0 )
        v11 = this[-1].m_OwnerListEntry2.Blink;
      else
        v11 = 0LL;
      v25 = v11;
      if ( v11 )
      {
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v11);
        m_ObjectFlags = this->m_ObjectFlags;
        v11 = v25;
      }
      m_ObjectSize = this->m_ObjectSize;
      if ( m_ObjectSize && (m_ObjectFlags & 8) != 0 )
      {
        v13 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        v14 = (FxRequest_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
        if ( v14 )
        {
          do
          {
            v15 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *))v14[2];
            if ( v15 )
            {
              v15(v13, Tag, v11, File);
              v14[2] = 0LL;
            }
            v16 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *))v14[3];
            if ( v16 )
            {
              v16(v13, Tag, v11, File);
              v14[3] = 0LL;
            }
            v14 = (_QWORD *)v14[1];
          }
          while ( v14 );
          m_ObjectSize = this->m_ObjectSize;
          v11 = v25;
        }
        LOBYTE(Tag) = 1;
        if ( m_ObjectSize )
        {
          v17 = (FxRequest_vtbl **)((char *)&this->__vftable + m_ObjectSize);
          if ( v17 )
          {
            do
            {
              v18 = (_QWORD *)v17[1];
              if ( !(_BYTE)Tag )
                FxPoolFree(v17);
              LOBYTE(Tag) = 0;
              v17 = v18;
            }
            while ( v18 );
            v11 = v25;
          }
        }
      }
      if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      {
        if ( BYTE4(this[-1].m_ForwardProgressQueue) )
        {
          _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
          if ( this->m_Type == 4098
            && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
          {
            Tag = this->m_Globals->FxVerifyLeakDetection;
            _InterlockedExchangeAdd(&Tag->LimitScaled, -Tag->Limit);
          }
        }
      }
      if ( v11 )
      {
        this[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v11, (unsigned int)Tag);
      }
      ((void (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, _LIST_ENTRY *, const char *))this->SelfDestruct)(
        this,
        Tag,
        v11,
        File);
    }
  }
  if ( m_Reserved && v8 == 1 && this->m_Completed )
  {
    FxIoQueue::ReturnReservedRequest(this->m_ForwardProgressQueue, this);
  }
  else if ( m_IrpAllocation )
  {
    if ( m_CanComplete )
    {
      if ( v8 == 1 )
      {
        if ( this->m_Completed )
        {
          m_CompletionState = this->m_CompletionState;
          m_IoQueue = this->m_IoQueue;
          m_Irp = this->m_Irp.m_Irp;
          m_PriorityBoost = this->m_PriorityBoost;
          this->m_CompletionState = 0;
          this->m_IoQueue = 0LL;
          this->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(m_Irp, m_PriorityBoost);
          if ( m_CompletionState == 1 )
          {
            PreviousIrql = 0;
            FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql);
            --m_IoQueue->m_TwoPhaseCompletions;
            v24 = PreviousIrql;
            --m_IoQueue->m_DriverIoCount;
            FxIoQueue::DispatchInternalEvents(m_IoQueue, v24);
          }
        }
      }
    }
  }
  return v8;
}
