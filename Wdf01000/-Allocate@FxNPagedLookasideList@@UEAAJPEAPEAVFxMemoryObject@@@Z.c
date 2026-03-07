__int64 __fastcall FxNPagedLookasideList::Allocate(FxNPagedLookasideList *this, FxMemoryObject **PPMemory)
{
  FxMemoryObject *v2; // rbx
  PSLIST_ENTRY v6; // rax
  _OWORD *inited; // rax
  unsigned __int64 m_BufferSize; // rdx
  FxMemoryBufferFromLookaside *v9; // rax
  FxMemoryObject *v10; // rax

  v2 = 0LL;
  if ( !PPMemory )
    return 3221225485LL;
  *PPMemory = 0LL;
  v6 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  if ( !v6 )
    return 3221225626LL;
  inited = FxLookasideList::InitObjectAlloc(this, v6);
  m_BufferSize = this->m_BufferSize;
  if ( m_BufferSize < 0x1000 )
  {
    v9 = (FxMemoryBufferFromLookaside *)FxObjectAndHandleHeaderInit(
                                          this->m_Globals,
                                          inited,
                                          ((m_BufferSize + 15) & 0xFFF0) + 128,
                                          &this->m_MemoryAttributes,
                                          FxObjectTypeExternal);
    if ( v9 )
    {
      FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(v9, this->m_Globals, this, this->m_BufferSize);
      v2 = v10;
    }
  }
  *PPMemory = v2;
  return 0LL;
}
