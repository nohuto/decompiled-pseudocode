__int64 __fastcall FxRequest::Release(FxRequest *this, FxObjectDebugLeakDetection *Tag, __int64 Line, const char *File)
{
  unsigned __int8 m_IrpAllocation; // bp
  unsigned __int8 m_CanComplete; // r12
  unsigned __int8 m_Reserved; // r14
  unsigned __int32 v8; // ebx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v11; // ax
  _LIST_ENTRY *v12; // r13
  _QWORD *v13; // r15
  void (__fastcall *v14)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  void (__fastcall *v15)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *); // rax
  FX_POOL_TRACKER *v16; // rcx
  FX_POOL_TRACKER *v17; // r15
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // r8
  unsigned __int16 v26; // r9
  _LIST_ENTRY *v27; // [rsp+30h] [rbp-38h]
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_IrpAllocation = this->m_IrpAllocation;
  m_CanComplete = this->m_CanComplete;
  m_Reserved = this->m_Reserved;
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
      FxObject::SetObjectStateLocked(this, 0xBu);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
      goto LABEL_3;
    }
    v11 = this->m_ObjectFlags;
    if ( (v11 & 0x80u) != 0 )
    {
      v12 = this[-1].m_OwnerListEntry2.Blink;
      v27 = v12;
      if ( !v12 )
      {
LABEL_14:
        if ( this->m_ObjectSize && (v11 & 8) != 0 )
        {
          v13 = (FxRequest_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
          if ( v13 )
          {
            do
            {
              v14 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))v13[2];
              if ( v14 )
              {
                v14((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
                v13[2] = 0LL;
              }
              v15 = (void (__fastcall *)(unsigned __int64, FxObjectDebugLeakDetection *, __int64, const char *))v13[3];
              if ( v15 )
              {
                v15((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
                v13[3] = 0LL;
              }
              v13 = (_QWORD *)v13[1];
            }
            while ( v13 );
            v12 = v27;
          }
          LOBYTE(Tag) = 1;
          if ( this->m_ObjectSize )
          {
            v16 = (FX_POOL_TRACKER *)((char *)this + this->m_ObjectSize);
            if ( v16 )
            {
              do
              {
                v17 = (FX_POOL_TRACKER *)v16->Link.Blink;
                if ( !(_BYTE)Tag )
                  FxPoolFree(v16);
                LOBYTE(Tag) = 0;
                v16 = v17;
              }
              while ( v17 );
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
        if ( v12 )
        {
          this[-1].m_OwnerListEntry2.Blink = 0LL;
          FxTagTracker::`scalar deleting destructor'((FxTagTracker *)v12, (unsigned int)Tag);
        }
        ((void (__fastcall *)(FxRequest *, FxObjectDebugLeakDetection *, __int64, const char *))this->SelfDestruct)(
          this,
          Tag,
          Line,
          File);
        goto LABEL_3;
      }
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v12);
      v11 = this->m_ObjectFlags;
    }
    else
    {
      v12 = 0LL;
    }
    v27 = v12;
    goto LABEL_14;
  }
LABEL_3:
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
            FxNonPagedObject::Lock(m_IoQueue, &PreviousIrql, v23);
            --m_IoQueue->m_TwoPhaseCompletions;
            v24 = PreviousIrql;
            --m_IoQueue->m_DriverIoCount;
            FxIoQueue::DispatchInternalEvents(m_IoQueue, v24, v25, v26);
          }
        }
      }
    }
  }
  return v8;
}
