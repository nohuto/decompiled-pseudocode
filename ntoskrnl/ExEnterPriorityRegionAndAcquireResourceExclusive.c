/*
 * XREFs of ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1406085D0
 * Callers:
 *     DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper @ 0x1405D6580 (DifExEnterPriorityRegionAndAcquireResourceExclusiveWrapper.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1402634D0 (PsBoostThreadIoEx.c)
 */

PVOID __fastcall ExEnterPriorityRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rdi

  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 0, 0, 0LL);
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return CurrentThread->WaitBlock[2].SparePtr;
}
