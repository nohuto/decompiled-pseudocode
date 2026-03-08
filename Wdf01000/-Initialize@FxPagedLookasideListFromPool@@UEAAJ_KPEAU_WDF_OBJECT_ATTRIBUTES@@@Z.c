/*
 * XREFs of ?Initialize@FxPagedLookasideListFromPool@@UEAAJ_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0041AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z @ 0x1C003E0C8 (-FxPoolAddHeaderSize@@YAJPEAU_FX_DRIVER_GLOBALS@@_KPEA_K@Z.c)
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0042F1C (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 */

int __fastcall FxPagedLookasideListFromPool::Initialize(
        FxPagedLookasideListFromPool *this,
        unsigned __int64 BufferSize,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes)
{
  unsigned __int64 v6; // rbp
  int result; // eax
  int v8; // esi
  ULONG Tag; // eax
  _POOL_TYPE v10; // r9d
  unsigned __int64 Size; // [rsp+20h] [rbp-38h]
  unsigned __int64 rawBufferSize; // [rsp+68h] [rbp+10h] BYREF

  rawBufferSize = 0LL;
  if ( BufferSize < 0x1000 )
  {
    result = FxPoolAddHeaderSize(this->m_Globals, BufferSize, &rawBufferSize);
    if ( result < 0 )
      return result;
    v6 = rawBufferSize;
  }
  else
  {
    v6 = BufferSize;
  }
  result = FxLookasideList::InitializeLookaside(this, 0, 0x88u, MemoryAttributes);
  v8 = result;
  if ( result >= 0 )
  {
    Tag = this->m_PoolTag;
    v10 = ExDefaultNonPagedPoolType;
    this->m_BufferSize = BufferSize;
    Size = this->m_MemoryObjectSize;
    this->m_RawBufferSize = v6;
    ExInitializeNPagedLookasideList(&this->m_ObjectLookaside, 0LL, 0LL, v10 | 0x200, Size, Tag, 0);
    ExInitializePagedLookasideList(&this->m_PoolLookaside, 0LL, 0LL, 0x200u, this->m_RawBufferSize, this->m_PoolTag, 0);
    return v8;
  }
  return result;
}
