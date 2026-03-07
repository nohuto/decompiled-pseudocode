__int64 __fastcall ExpFreeHeapSpecialPool(__int64 a1, unsigned __int64 a2)
{
  int v4; // eax
  __int16 v5; // di
  _WORD *v6; // rsi
  ULONG_PTR v7; // rbp
  unsigned __int8 CurrentIrql; // cl
  ULONG_PTR v9; // rdx
  unsigned __int64 v10; // r14
  _BYTE *i; // r8
  unsigned __int64 v12; // rax
  _BYTE *v13; // r8
  __int64 v14; // rbp
  __int64 v15; // rax
  int v16; // r10d
  char v17; // di
  __int64 v18; // rbx
  unsigned int v19; // edx
  unsigned int v20; // r11d
  __int64 v21; // r8
  int v22; // r9d
  __int64 v23; // r9

  v4 = MiDeterminePoolType(a2);
  v5 = 0;
  if ( v4 != 32 )
    v5 = v4;
  v6 = (_WORD *)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v7 = 4096 - (unsigned int)(a2 & 0xFFF);
  ExpFreePoolChecks(a2, *(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 4), v7, 0, a2);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - ((v5 & 1) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v9 = *v6 & 0x1FFF;
  v10 = (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v10 != v7 )
    KeBugCheckEx(0xC1u, a2, *v6 & 0x1FFF, v7, 0x21uLL);
  for ( i = (char *)v6 + ((*(_DWORD *)v6 & 0x4000) != 0 ? 8 : 0) + 16; (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *(_BYTE *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, *(unsigned int *)v6, 0x23uLL);
  }
  v12 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v13 = (_BYTE *)(v9 + a2);
  if ( v9 + a2 < v12 )
  {
    do
    {
      if ( *v13 != *(_BYTE *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 2) )
        KeBugCheckEx(0xC1u, a2, (ULONG_PTR)v13, *(unsigned int *)v6, 0x24uLL);
      ++v13;
    }
    while ( (unsigned __int64)v13 < v12 );
  }
  if ( (*(_DWORD *)v6 & 0x4000) != 0 )
    VerifierFreeTrackedPool(a2, v9);
  v14 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 4);
  if ( (_DWORD)v14 == PoolHitTag )
    __debugbreak();
  v15 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v5, v14, a2, v10);
  LODWORD(v15) = KeGetPcr()->Prcb.Number;
  v16 = PoolTrackTableMask;
  v17 = v5 & 0xDF;
  v18 = (__int64)*(&ExPoolTagTables + v15);
  v19 = PoolTrackTableMask & ((40543 * v14) ^ ((unsigned __int64)(40543 * v14) >> 32));
  v20 = v19;
  while ( 1 )
  {
    v21 = v18 + 80LL * v19;
    if ( *(_DWORD *)v21 == (_DWORD)v14 )
      break;
    if ( *(_DWORD *)v21 || (v22 = *(_DWORD *)(PoolTrackTable + 80LL * v19)) == 0 )
    {
      v19 = v16 & (v19 + 1);
      if ( v19 == v20 )
      {
        ExpRemovePoolTrackerExpansion(v14, v10, v17);
        return RtlpHpFreeHeap(a1, (unsigned __int64)v6, 0, 0LL, 0LL);
      }
    }
    else
    {
      *(_DWORD *)v21 = v22;
      v23 = *(_QWORD *)(PoolTrackTable + 80LL * v19 + 72);
      if ( v23 )
        *(_QWORD *)(v21 + 72) = v23;
    }
  }
  ExpPoolTrackerReturnLimit((v17 & 1) == 0, v10, v21);
  return RtlpHpFreeHeap(a1, (unsigned __int64)v6, 0, 0LL, 0LL);
}
