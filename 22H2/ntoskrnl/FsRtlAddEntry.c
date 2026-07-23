/*
 * XREFs of FsRtlAddEntry @ 0x1402F5E64
 * Callers:
 *     FsRtlRemoveBaseMcbEntry @ 0x1402F5540 (FsRtlRemoveBaseMcbEntry.c)
 *     FsRtlAddBaseMcbEntryEx @ 0x1402F5910 (FsRtlAddBaseMcbEntryEx.c)
 *     FsRtlSplitBaseMcb @ 0x1404EF340 (FsRtlSplitBaseMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

char __fastcall FsRtlAddEntry(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // r14
  unsigned int v5; // ecx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  unsigned __int64 v9; // rax
  unsigned int v10; // ebp
  PVOID PoolWithTag; // rax
  PVOID v12; // rdi
  void *v13; // rdx
  char result; // al

  v4 = a2;
  v5 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)a1;
  if ( v5 + a3 <= *(_DWORD *)a1 )
  {
LABEL_12:
    if ( (unsigned int)v4 < v5 )
    {
      memmove(
        (void *)(*(_QWORD *)(a1 + 16) + 8LL * (unsigned int)(v4 + a3)),
        (const void *)(*(_QWORD *)(a1 + 16) + 8 * v4),
        8LL * (v5 - (unsigned int)v4));
      v5 = *(_DWORD *)(a1 + 4);
    }
    result = 1;
    *(_DWORD *)(a1 + 4) = a3 + v5;
    return result;
  }
  v8 = 2 * v7;
  if ( v7 >= 0x800 )
    v8 = v7 + 2048;
  v9 = 8LL * v8;
  v10 = v8;
  if ( v9 <= 0xFFFFFFFF )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)*(unsigned __int16 *)(a1 + 8), (unsigned int)v9, 0x6D695346u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, *(const void **)(a1 + 16), 8LL * *(unsigned int *)(a1 + 4));
      if ( *(_DWORD *)a1 == 15 )
      {
        v13 = *(void **)(a1 + 16);
        if ( *(_WORD *)(a1 + 8) == 1 )
          ExFreeToNPagedLookasideList(&FsRtlFirstPagedMappingLookasideList, v13);
        else
          ExFreeToNPagedLookasideList(&FsRtlFirstNonPagedMappingLookasideList, v13);
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
      }
      v5 = *(_DWORD *)(a1 + 4);
      *(_QWORD *)(a1 + 16) = v12;
      *(_DWORD *)a1 = v10;
      goto LABEL_12;
    }
  }
  if ( (*(_BYTE *)(a1 + 10) & 1) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0;
}
