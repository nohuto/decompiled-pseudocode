__int64 __fastcall MiGetUltraPage(__int64 a1, int a2)
{
  unsigned __int32 v2; // ebx
  __int64 v3; // rdx
  __int64 SlabPage; // r8
  _QWORD *v5; // rcx

  v2 = *(_DWORD *)(a1 + 12) | _InterlockedExchangeAdd(*(volatile signed __int32 **)a1, 1u) & *(_DWORD *)(a1 + 8);
  if ( a2 && (SlabPage = MiGetSlabPage((unsigned int)&MiSystemPartition, 6, v2, 24, 0LL, 0), SlabPage != -1)
    || (SlabPage = MiGetPage(&MiSystemPartition, v2, 778LL), SlabPage != -1) )
  {
    v5 = (_QWORD *)(48 * SlabPage - 0x21FFFFFFFFF0LL);
    *v5 = ZeroPte;
    MiSetOriginalPtePfnFromFreeList(v5, v3, SlabPage);
  }
  return SlabPage;
}
