__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, int Index, _LIST_ENTRY *Object)
{
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v8; // esi
  void *v9; // rax
  FX_POOL_TRACKER *v10; // rdx
  unsigned __int8 v11; // r8
  FxCollectionInternal *v12; // rdi
  _LIST_ENTRY **p_Blink; // rax
  int v14; // ecx
  _LIST_ENTRY *p_m_ListHead; // r8
  _LIST_ENTRY *Blink; // rax
  const void *_a1; // rax
  __m128i v19; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v3 = (this->m_AccessFlags & 1) == 0;
  irql = 0;
  if ( v3 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225506LL;
  }
  else
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    m_Globals = this->m_Globals;
    v8 = 0;
    v19.m128i_i64[0] = 0LL;
    v19.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v9 = retaddr;
    else
      v9 = 0LL;
    v10 = (FX_POOL_TRACKER *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v19, 0x18uLL, m_Globals->Tag, v9);
    if ( v10 )
    {
      v12 = &this->FxCollectionInternal;
      if ( Index == -1 || Index == v12->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_16:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = (_LIST_ENTRY *)&v10->Link.Blink;
        v10->Link.Blink = p_m_ListHead;
        v10->Pool = (FX_POOL *)Blink;
        p_m_ListHead->Blink = (_LIST_ENTRY *)&v10->Link.Blink;
        v10->Link.Flink = Object;
        FxObject::AddRef(
          (FxObject *)Object,
          &this->FxCollectionInternal,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        ++v12->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        p_Blink = &this->m_ListHead.Flink[-1].Blink;
        v14 = 0;
        while ( p_Blink != (_LIST_ENTRY **)v12 )
        {
          p_m_ListHead = (_LIST_ENTRY *)(p_Blink + 1);
          if ( v14 == Index )
          {
            if ( p_Blink != (_LIST_ENTRY **)-8LL )
              goto LABEL_16;
            break;
          }
          p_Blink = &p_m_ListHead->Flink[-1].Blink;
          ++v14;
        }
        FxPoolFree(v10);
        v8 = -1073741684;
      }
    }
    else
    {
      v8 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, v11);
    if ( v8 < 0 )
    {
      FxObject::ClearEvtCallbacks((FxObject *)Object);
      ((void (__fastcall *)(_LIST_ENTRY *))Object->Flink[3].Flink)(Object);
    }
    return (unsigned int)v8;
  }
}
