/*
 * XREFs of FsRtlAddEntry @ 0x1402D0C14
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x1402D0270 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1402D06D0 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x14053A920 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ecx
  unsigned int v7; // ecx
  unsigned int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // r14d
  PVOID PoolWithTag; // rax
  PVOID v13; // rbp
  void *v14; // rdx

  v4 = a2;
  v5 = *(_DWORD *)a1;
  if ( a3 + *(_DWORD *)(a1 + 4) <= v5 )
  {
LABEL_2:
    v7 = *(_DWORD *)(a1 + 4);
    if ( (unsigned int)v4 < v7 )
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v7 - (unsigned int)v4));
    *(_DWORD *)(a1 + 4) += a3;
    return 1;
  }
  v9 = 2 * v5;
  if ( v5 >= 0x800 )
    v9 = v5 + 2048;
  v10 = 8LL * v9;
  v11 = v9;
  if ( v10 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v10, 0x6D695346u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_DWORD *)a1 == 15 )
      {
        v14 = *(void **)(a1 + 16);
        if ( *(_WORD *)(a1 + 8) == 1 )
          ExFreeToNPagedLookasideList(&FsRtlFirstPagedMappingLookasideList, v14);
        else
          ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v14);
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
      }
      *(_QWORD *)(a1 + 16) = v13;
      *(_DWORD *)a1 = v11;
      goto LABEL_2;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0;
}
