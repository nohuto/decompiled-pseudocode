/*
 * XREFs of MiReturnMdlExcess @ 0x1406212E8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402B3B18 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiInitializeMdlBatchPages @ 0x1402B4150 (MiInitializeMdlBatchPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     MiReturnMdlCharges @ 0x140621210 (MiReturnMdlCharges.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall MiReturnMdlExcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  int v7; // eax
  _WORD *Pool; // rax
  _WORD *v9; // rsi

  v3 = *(unsigned int **)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 48) * ((unsigned __int64)v3[10] >> 12);
  v6 = *(_QWORD *)(a1 + 32) - v5;
  if ( (*(_DWORD *)(a1 + 56) & 0x400) == 0 )
    MiReturnMdlCharges(*(_QWORD *)a1, v6, a3);
  if ( !v5 )
    goto LABEL_4;
  v7 = *(_DWORD *)(a1 + 56);
  if ( (v7 & 4) != 0 )
  {
    if ( (v7 & 0x40) == 0 )
      MiInitializeMdlBatchPages(a1);
    MiFreePagesFromMdl((ULONG_PTR)v3, 0);
LABEL_4:
    if ( (*(_DWORD *)(a1 + 84) & 1) == 0 )
      ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
    return;
  }
  if ( (*(_DWORD *)(a1 + 84) & 1) == 0 && *(_QWORD *)(a1 + 48) == 1LL && v6 > 0x800 )
  {
    Pool = MiAllocatePool(64, 8 * v5 + 48, 0x69646D4Du);
    v9 = Pool;
    if ( Pool )
    {
      *(_QWORD *)Pool = 0LL;
      Pool[5] = 0;
      *((_DWORD *)Pool + 10) = (_DWORD)v5 << 12;
      *((_QWORD *)Pool + 4) = 0LL;
      Pool[4] = 8 * (v5 + 6);
      *((_DWORD *)Pool + 11) = 0;
      memmove(Pool + 24, (const void *)(*(_QWORD *)(a1 + 64) + 48LL), 8 * v5);
      v9[5] = *(_WORD *)(*(_QWORD *)(a1 + 64) + 10LL);
      ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
      *(_QWORD *)(a1 + 64) = v9;
    }
  }
}
