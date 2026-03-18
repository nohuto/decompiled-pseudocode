/*
 * XREFs of GreDeleteSemaphore @ 0x1C0077EE0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C0077CD4 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteSemaphore @ 0x1C0077EA0 (EngDeleteSemaphore.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00D182C (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01545DC (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C0161D00 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0169EE0 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0077F40 (MultiUserGreTrackRemoveEngResource.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  ULONG *p_NumberOfSharedWaiters; // rdi

  if ( Resource )
  {
    p_NumberOfSharedWaiters = &Resource[-1].NumberOfSharedWaiters;
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    if ( p_NumberOfSharedWaiters )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, p_NumberOfSharedWaiters);
  }
}
