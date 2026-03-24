/*
 * XREFs of WmipReferenceEntry @ 0x1406B79C4
 * Callers:
 *     WmipSendEnableRequest @ 0x1406A3C24 (WmipSendEnableRequest.c)
 *     WmipPrepareForWnodeAD @ 0x1406B6E50 (WmipPrepareForWnodeAD.c)
 *     WmipFindGEByGuid @ 0x1406B7FB0 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x140756DF4 (WmipPrepareWnodeSI.c)
 *     WmipGenerateRegistrationNotification @ 0x140757110 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x140757B58 (WmipFindISinGEbyName.c)
 *     WmipSendEnableDisableRequest @ 0x14077DF00 (WmipSendEnableDisableRequest.c)
 *     WmipInsertMofResource @ 0x1407BEC94 (WmipInsertMofResource.c)
 *     WmipFindMRByNames @ 0x1407BED18 (WmipFindMRByNames.c)
 *     WmipUpdateDataSource @ 0x1407C4788 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407C4A40 (WmipFindISInDSByGuid.c)
 *     WmipLegacyEtwWorker @ 0x1407C5780 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x1407C76D8 (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1407C7768 (WmipQueueLegacyEtwWork.c)
 *     WmipDereferenceEvent @ 0x14093243C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14093282C (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x140933620 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
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
