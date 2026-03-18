/*
 * XREFs of WmipReferenceEntry @ 0x1406C693C
 * Callers:
 *     WmipFindGEByGuid @ 0x1406C64B4 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1406C6594 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x1406C7F60 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x1407D640C (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407D6510 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x140800178 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1408003BC (WmipFindISInDSByGuid.c)
 *     WmipFindMRByNames @ 0x1408113AC (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x140811474 (WmipInsertMofResource.c)
 *     WmipLegacyEtwWorker @ 0x140850D90 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x140853B8C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140853C20 (WmipQueueLegacyEtwWork.c)
 *     WmipGenerateRegistrationNotification @ 0x14086AF18 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x14086B530 (WmipFindISinGEbyName.c)
 *     WmipDereferenceEvent @ 0x1409E0630 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409E0A34 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409E1970 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
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
