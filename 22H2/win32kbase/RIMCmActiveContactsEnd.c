/*
 * XREFs of RIMCmActiveContactsEnd @ 0x1C00E3530
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00E1A7E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C017BC38 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C440 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C017C960 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C017CDA4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C2BC (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E494 (rimEndAllActiveContactsWorker.c)
 *     rimIsWakeablePointerFrame @ 0x1C01A0FB8 (rimIsWakeablePointerFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11E0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01A6F9C (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A75A0 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A792C (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A894C (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01AB398 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01AFE08 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableEnd @ 0x1C00E375E (ListTableEnd.c)
 */

__int64 __fastcall RIMCmActiveContactsEnd(__int64 a1, __int64 a2)
{
  if ( !*(_DWORD *)(a2 + 1000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 465);
  ListTableEnd(a1, a2 + 992);
  return a1;
}
