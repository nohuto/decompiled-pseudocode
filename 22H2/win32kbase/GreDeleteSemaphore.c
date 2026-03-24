/*
 * XREFs of GreDeleteSemaphore @ 0x1C005C290
 * Callers:
 *     EngDeleteSemaphore @ 0x1C005BFF0 (EngDeleteSemaphore.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C007E0FC (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9C00 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_45072801a0d31dffc7965423336b068f_::operator() @ 0x1C00C8860 (_lambda_45072801a0d31dffc7965423336b068f_--operator().c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013D500 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C014495C (-DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z.c)
 *     EngDeleteSafeSemaphore @ 0x1C014B1B0 (EngDeleteSafeSemaphore.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     MultiUserGreTrackRemoveEngResource @ 0x1C005C2E0 (MultiUserGreTrackRemoveEngResource.c)
 */

void __fastcall GreDeleteSemaphore(PERESOURCE Resource)
{
  if ( Resource )
  {
    MultiUserGreTrackRemoveEngResource(&Resource[-1].NumberOfSharedWaiters);
    ExDeleteResourceLite(Resource);
    Win32FreePool((__int64)&Resource[-1].NumberOfSharedWaiters);
  }
}
