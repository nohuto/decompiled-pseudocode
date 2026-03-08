/*
 * XREFs of WmipReferenceEntry @ 0x14069C27C
 * Callers:
 *     WmipFindGEByGuid @ 0x14069BDF4 (WmipFindGEByGuid.c)
 *     WmipPrepareWnodeSI @ 0x14069BED4 (WmipPrepareWnodeSI.c)
 *     WmipPrepareForWnodeAD @ 0x14069E360 (WmipPrepareForWnodeAD.c)
 *     WmipSendEnableRequest @ 0x140786FAC (WmipSendEnableRequest.c)
 *     WmipSendEnableDisableRequest @ 0x1407870B0 (WmipSendEnableDisableRequest.c)
 *     WmipUpdateDataSource @ 0x1407FB4E8 (WmipUpdateDataSource.c)
 *     WmipFindISInDSByGuid @ 0x1407FB72C (WmipFindISInDSByGuid.c)
 *     WmipFindMRByNames @ 0x140819B9C (WmipFindMRByNames.c)
 *     WmipInsertMofResource @ 0x140819C64 (WmipInsertMofResource.c)
 *     WmipLegacyEtwWorker @ 0x14084D950 (WmipLegacyEtwWorker.c)
 *     WmipRegisterEtwProvider @ 0x14085074C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x1408507E0 (WmipQueueLegacyEtwWork.c)
 *     WmipGenerateRegistrationNotification @ 0x1408682E0 (WmipGenerateRegistrationNotification.c)
 *     WmipFindISinGEbyName @ 0x1408688F8 (WmipFindISinGEbyName.c)
 *     WmipDereferenceEvent @ 0x1409DD790 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1409DDB94 (WmipIncludeStaticNames.c)
 *     WmipLegacyEtwCallback @ 0x1409DEAD0 (WmipLegacyEtwCallback.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
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
