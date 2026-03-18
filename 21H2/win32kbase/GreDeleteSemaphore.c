/*
 * XREFs of GreDeleteSemaphore @ 0x1C0044F30
 * Callers:
 *     EngDeleteSemaphore @ 0x1C0044ED0 (EngDeleteSemaphore.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C00485E0 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_27fa0b678d056c4f62e221b84b7517f7_::operator() @ 0x1C00D97C0 (_lambda_27fa0b678d056c4f62e221b84b7517f7_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C016A304 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C01716DC (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C01772B0 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     MultiUserGreTrackRemoveEngResource @ 0x1C0044F90 (MultiUserGreTrackRemoveEngResource.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
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
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        p_NumberOfSharedWaiters);
  }
}
