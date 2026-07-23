/*
 * XREFs of WmipReferenceEntry @ 0x1406339F4
 * Callers:
 *     WmipSendEnableRequest @ 0x14061FF94 (WmipSendEnableRequest.c)
 *     WmipPrepareForWnodeAD @ 0x140632E80 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x140633FE0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140757AE0 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140758528 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14077E1C0 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x1407BEC64 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1407BECE8 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x1407C44E8 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407C47A0 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C54E0 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1407C7AD8 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1407C7B68 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x14093254C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409337A0 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
