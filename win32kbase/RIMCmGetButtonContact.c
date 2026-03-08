/*
 * XREFs of RIMCmGetButtonContact @ 0x1C00F1A60
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F065E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01CF2D0 (rimStorePointersInHoldingFrame.c)
 *     rimFinalizePointerFlags @ 0x1C01D8470 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01D99D4 (rimProcessPointerDeviceButtonContact.c)
 *     RIMCmActivateButtonContact @ 0x1C01DDD6C (RIMCmActivateButtonContact.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCmGetButtonContact(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 24) == 7 )
    return *(_QWORD *)(a1 + 968);
  else
    return 0LL;
}
