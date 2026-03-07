int __fastcall FxNPagedLookasideListFromPool::Initialize(
        FxNPagedLookasideListFromPool *this,
        unsigned __int64 BufferSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  int result; // eax
  int v6; // ebx
  ULONG v7; // r9d
  unsigned int Tag; // [rsp+28h] [rbp-20h]

  result = FxLookasideList::InitializeLookaside(this, 0, 0x88u, MemoryAttributes);
  v6 = result;
  if ( result >= 0 )
  {
    ExInitializeNPagedLookasideList(
      &this->m_ObjectLookaside,
      0LL,
      0LL,
      ExDefaultNonPagedPoolType | 0x200,
      this->m_MemoryObjectSize,
      this->m_PoolTag,
      0);
    v7 = ExDefaultNonPagedPoolType | 0x200;
    Tag = this->m_PoolTag;
    this->m_BufferSize = BufferSize;
    ExInitializeNPagedLookasideList(&this->m_PoolLookaside, 0LL, 0LL, v7, BufferSize, Tag, 0);
    return v6;
  }
  return result;
}
