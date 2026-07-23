/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x1402AB2E0
 * Callers:
 *     RtlAreNamesEqual @ 0x140207E40 (RtlAreNamesEqual.c)
 *     RtlIsNameInExpression @ 0x1402F4040 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x1402F40C0 (RtlIsNameInUnUpcasedExpression.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID PoolWithTag; // rax
  unsigned int v6; // r10d
  unsigned int v7; // r11d
  __int16 v8; // ax
  __int64 v9; // r9
  int v10; // r10d

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x67727453u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  v6 = 0;
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = *a2 >> 1;
  while ( v6 < v7 )
  {
    v8 = NLS_UPCASE(*(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v6));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v9) = v8;
    v6 = v10 + 1;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
