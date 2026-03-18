/*
 * XREFs of MiUpdateSubsectionCrossPartitionRefs @ 0x14066B504
 * Callers:
 *     MiDeleteControlArea @ 0x1402199F0 (MiDeleteControlArea.c)
 *     MiIncrementSubsectionViewCount @ 0x1402890D0 (MiIncrementSubsectionViewCount.c)
 *     MiInsertUnusedSubsection @ 0x14028BBE0 (MiInsertUnusedSubsection.c)
 *     MiAppendSubsectionChain @ 0x1402931B8 (MiAppendSubsectionChain.c)
 *     MiDecrementSubsectionViewCount @ 0x14029F9B0 (MiDecrementSubsectionViewCount.c)
 *     MiConvertStaticSubsections @ 0x1402A0DF8 (MiConvertStaticSubsections.c)
 *     MiExtendSection @ 0x140706884 (MiExtendSection.c)
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
