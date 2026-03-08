/*
 * XREFs of IopAllocateBootResources @ 0x140804670
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140B359CC (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x140B35AB0 (IopReportBootResources.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IopAllocateBootResourcesInternal @ 0x1408046F8 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
  return BootResourcesInternal;
}
