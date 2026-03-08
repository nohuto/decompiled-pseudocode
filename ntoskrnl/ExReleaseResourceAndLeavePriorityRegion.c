/*
 * XREFs of ExReleaseResourceAndLeavePriorityRegion @ 0x140608630
 * Callers:
 *     DifExReleaseResourceAndLeavePriorityRegionWrapper @ 0x1405D76C0 (DifExReleaseResourceAndLeavePriorityRegionWrapper.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

char __fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
