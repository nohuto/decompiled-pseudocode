/*
 * XREFs of WmipReferenceEntry @ 0x140784160
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x1406D2BE8 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1406D88A4 (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1406D8994 (WmipSendEnableDisableRequest.c)
 *     WmipGenerateRegistrationNotification @ 0x14075D8DC (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x14075F09C (WmipFindISinGEbyName.c)
 *     WmipFindGEByGuid @ 0x140783CD8 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140783DB8 (WmipPrepareWnodeSI.c)
 *     WmipInsertMofResource @ 0x14084E1F4 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x14084E278 (WmipFindMRByNames.c)
 *     WmipLegacyEtwWorker @ 0x140855120 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1408577B0 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140857840 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1409DCFD4 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409DD3C4 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409DE220 (WmipLegacyEtwCallback.c)
 *     WmipFindISInDSByGuid @ 0x1409DE468 (WmipFindISInDSByGuid.c)
 *     WmipUpdateDataSource @ 0x1409DE80C (WmipUpdateDataSource.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall WmipReferenceEntry(ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(BugCheckParameter2 + 24));
  if ( result <= 1 )
  {
    if ( result == 1 )
      KeBugCheckEx(0x14Au, 0LL, BugCheckParameter2, 0LL, 0LL);
    KeBugCheckEx(0x14Au, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  return result;
}
