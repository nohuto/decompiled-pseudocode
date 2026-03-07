__int64 __fastcall FxPagedLookasideListFromPool::Allocate(
        FxPagedLookasideListFromPool *this,
        FxMemoryBufferFromLookaside **PPMemory)
{
  FX_POOL_TRACKER *v4; // rax
  __int64 result; // rax
  FX_POOL **inited; // rsi
  PSLIST_ENTRY v7; // rbp
  _WDF_OBJECT_ATTRIBUTES *p_m_MemoryAttributes; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxMemoryBufferFromLookaside *v10; // rax
  FxMemoryBufferFromLookaside *v11; // rsi
  FxDeviceBase *m_MemoryDeviceBase; // rbx
  FxMemoryBufferFromPoolLookaside *v13; // rax
  FxMemoryBufferFromLookaside *v14; // rax

  v4 = (FX_POOL_TRACKER *)FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v4 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v4);
  ++this->m_PoolLookaside.L.TotalAllocates;
  v7 = ExpInterlockedPopEntrySList(&this->m_PoolLookaside.L.ListHead);
  if ( !v7 )
  {
    ++this->m_PoolLookaside.L.AllocateMisses;
    v7 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_PoolLookaside.L.AllocateEx)(
                         (unsigned int)this->m_PoolLookaside.L.Type,
                         this->m_PoolLookaside.L.Size,
                         this->m_PoolLookaside.L.Tag);
  }
  if ( !v7 )
  {
    this->Reclaim(this, (FxMemoryBufferFromLookaside *)inited);
    return 3221225626LL;
  }
  if ( this->m_BufferSize < 0x1000 )
    v7 = (PSLIST_ENTRY)FxPagedLookasideListFromPool::InitPagedAlloc(this, v7);
  p_m_MemoryAttributes = &this->m_MemoryAttributes;
  m_Globals = this->m_Globals;
  if ( !this->m_MemoryDeviceBase )
  {
    v13 = (FxMemoryBufferFromPoolLookaside *)FxObjectAndHandleHeaderInit(
                                               m_Globals,
                                               inited,
                                               0x90u,
                                               p_m_MemoryAttributes,
                                               FxObjectTypeExternal);
    if ( v13 )
    {
      FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
        v13,
        this->m_Globals,
        this,
        this->m_BufferSize,
        v7);
      v11 = v14;
      goto LABEL_15;
    }
LABEL_14:
    v11 = 0LL;
    goto LABEL_15;
  }
  v10 = (FxMemoryBufferFromLookaside *)FxObjectAndHandleHeaderInit(
                                         m_Globals,
                                         inited,
                                         0x90u,
                                         p_m_MemoryAttributes,
                                         FxObjectTypeExternal);
  v11 = v10;
  if ( !v10 )
    goto LABEL_14;
  m_MemoryDeviceBase = this->m_MemoryDeviceBase;
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v10, this->m_Globals, this, this->m_BufferSize);
  v11[1].FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)v7;
  v11->FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
  v11->FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  v11->m_DeviceBase = m_MemoryDeviceBase;
LABEL_15:
  v11->m_ObjectFlags |= 0x11u;
  result = 0LL;
  *PPMemory = v11;
  return result;
}
