/*
 * XREFs of WmipReferenceEntry @ 0x14063EBE4
 * Callers:
 *     WmipPrepareForWnodeAD @ 0x14063E070 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x14063F1D0 (WmipFindGEByGuid.c)
 *     WmipSendEnableRequest @ 0x1406C1214 (WmipSendEnableRequest.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140757920 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140758368 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14077E000 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x1407BE4D4 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1407BE558 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x1407C3FC8 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407C4280 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C4FC0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1407C77B8 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1407C7848 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x1409323EC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409327DC (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409335D0 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
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
