/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1402DE81C
 * Callers:
 *     MiReferenceOwningSession @ 0x1402DE780 (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 * Callees:
 *     KeTryToAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402DE844 (KeTryToAcquireInStackQueuedSpinLockAtDpcLevel.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(__int64 a1)
{
  return (unsigned int)KeTryToAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140C69440, a1) != 0;
}
