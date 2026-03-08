/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x1403031E8
 * Callers:
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C695A8;
}
