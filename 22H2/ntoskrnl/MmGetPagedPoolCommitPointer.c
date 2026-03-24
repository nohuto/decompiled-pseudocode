/*
 * XREFs of MmGetPagedPoolCommitPointer @ 0x14032D328
 * Callers:
 *     KdInitSystem @ 0x1409B5160 (KdInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 *MmGetPagedPoolCommitPointer()
{
  return &qword_140C4EF28;
}
