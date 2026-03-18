/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14036EB98
 * Callers:
 *     KdInitSystem @ 0x140AB2040 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C69A28;
}
