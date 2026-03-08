/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x140668EB4
 * Callers:
 *     MiDeleteControlArea @ 0x140215028 (MiDeleteControlArea.c)
 *     MiAppendSubsectionChain @ 0x1402A5090 (MiAppendSubsectionChain.c)
 *     MiInsertUnusedSubsection @ 0x1402D4DE8 (MiInsertUnusedSubsection.c)
 *     MiIncrementSubsectionViewCount @ 0x140332840 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x140334C10 (MiDecrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x14034C9D8 (MiConvertStaticSubsections.c)
 *     MiExtendSection @ 0x140726AAC (MiExtendSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateSubsectionCrossPartitionRefs(_DWORD *a1, int a2)
{
  __int64 result; // rax

  result = a1[12] ^ (a1[12] ^ a2) & 0x3FFFFFFFu;
  a1[12] = result;
  if ( a2 == 0x3FFFFFFF )
  {
    result = *(_QWORD *)a1;
    *(_BYTE *)(*(_QWORD *)a1 + 62LL) |= 2u;
  }
  return result;
}
