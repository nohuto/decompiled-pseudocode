/*
 * XREFs of CiThreadRemoveFromTree @ 0x1C0002140
 * Callers:
 *     CiThreadCleanup @ 0x1C000A4B0 (CiThreadCleanup.c)
 * Callees:
 *     <none>
 */

void __fastcall CiThreadRemoveFromTree(__int64 a1)
{
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = KeGetCurrentThread();
  RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue, a1 + 40);
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc, 0);
}
