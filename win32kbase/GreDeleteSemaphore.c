/*
 * XREFs of GreDeleteSemaphore @ 0x1C002AF30
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C002AD20 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     EngDeleteSemaphore @ 0x1C002AEF0 (EngDeleteSemaphore.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C018EA88 (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C0196C70 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     MultiUserGreTrackRemoveEngResource @ 0x1C002AF90 (MultiUserGreTrackRemoveEngResource.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
