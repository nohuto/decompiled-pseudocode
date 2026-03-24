/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x140206970
 * Callers:
 *     RtlIsNameInExpression @ 0x14024F160 (RtlIsNameInExpression.c)
 *     RtlIsNameInUnUpcasedExpression @ 0x14024F1E0 (RtlIsNameInUnUpcasedExpression.c)
 *     RtlAreNamesEqual @ 0x1402E0BE0 (RtlAreNamesEqual.c)
 * Callees:
 *     NLS_UPCASE @ 0x140206AB0 (NLS_UPCASE.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
