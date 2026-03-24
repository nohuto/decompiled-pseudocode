/*
 * XREFs of MiReserveLowPrioritySystemPtes @ 0x14052A844
 * Callers:
 *     MiCopyToUserVa @ 0x14028EBB8 (MiCopyToUserVa.c)
 *     MiZeroLargePage @ 0x14030E918 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x140357570 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiReserveLowPrioritySystemPtes(unsigned int a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return MiReservePtes((__int64)&qword_140C4EF40, a1, a3, a4);
}
