SIZE_T __stdcall ExQueryPoolBlockSize(PVOID PoolBlock, PBOOLEAN QuotaCharged)
{
  int v2; // ebx
  ULONG_PTR HeapFromVA; // rax
  _DWORD *v6; // rcx
  int v8; // eax
  unsigned __int64 v9; // rdx
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // [rsp+40h] [rbp-18h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v2 = 0;
  v13 = 0LL;
  v12 = 0LL;
  LODWORD(v14) = 0;
  v15 = 0;
  HeapFromVA = ExGetHeapFromVA((ULONG_PTR)PoolBlock);
  if ( (unsigned int)ExpHpIsSpecialPoolHeap(HeapFromVA) )
  {
    *QuotaCharged = 0;
    v6 = (_DWORD *)((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL);
    if ( ((unsigned __int16)PoolBlock & 0xFFF) == 0 )
      v6 = (_DWORD *)(((unsigned __int64)PoolBlock & 0xFFFFFFFFFFFFF000uLL) + 4080);
    return *v6 & 0xFFFLL;
  }
  else if ( ((unsigned __int16)PoolBlock & 0xFFF) != 0 )
  {
    v9 = (unsigned __int64)PoolBlock - 16;
    v10 = *((char *)PoolBlock - 13);
    v11 = 16LL * (unsigned __int8)*((_WORD *)PoolBlock - 7);
    if ( (v10 & 8) != 0 )
    {
      if ( (v10 & 4) != 0 )
        v9 -= 16LL * (unsigned __int8)*(_WORD *)v9;
      if ( v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8)
        && (v9 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v9 + 8)) != 0xFFFFFFFFFFFFFFFFuLL )
      {
        LOBYTE(v2) = 1;
      }
    }
    *QuotaCharged = v2;
    return v11 - 16;
  }
  else
  {
    v8 = MiDeterminePoolType((unsigned __int64)PoolBlock);
    if ( v8 != 32 )
      v2 = v8;
    ExpRemoveTagForBigPages((ULONG_PTR)PoolBlock, v2, 0, &v15, (int *)&v14, &v13, (ULONG_PTR *)&v12);
    *QuotaCharged = (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL;
    return 4096LL;
  }
}
