/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14055510C
 * Callers:
 *     MiDeleteControlArea @ 0x140278164 (MiDeleteControlArea.c)
 *     MiDecrementSubsectionViewCount @ 0x1402957F0 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140296460 (MiIncrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x1402D9368 (MiConvertStaticSubsections.c)
 *     MiInsertUnusedSubsection @ 0x1402F5120 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402F97CC (MiAppendSubsectionChain.c)
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
