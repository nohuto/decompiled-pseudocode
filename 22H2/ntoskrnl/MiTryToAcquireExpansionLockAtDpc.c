/*
 * XREFs of MiTryToAcquireExpansionLockAtDpc @ 0x1402EC668
 * Callers:
 *     MiReferenceOwningSession @ 0x1402EC5CC (MiReferenceOwningSession.c)
 *     MiLockStealUserVm @ 0x140333FE4 (MiLockStealUserVm.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x1402EC8BC (KxTryToAcquireQueuedSpinLock.c)
 */

_BOOL8 __fastcall MiTryToAcquireExpansionLockAtDpc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  a1[1] = &SpinLock;
  *a1 = 0LL;
  return (unsigned int)KxTryToAcquireQueuedSpinLock(a1, &SpinLock, a3, a4) != 0;
}
