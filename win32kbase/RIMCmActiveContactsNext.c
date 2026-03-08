/*
 * XREFs of RIMCmActiveContactsNext @ 0x1C01DE0AC
 * Callers:
 *     rimCountContactsToDeliverWithFrame @ 0x1C00F065E (rimCountContactsToDeliverWithFrame.c)
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 *     rimIsWakeablePointerFrame @ 0x1C01CF08C (rimIsWakeablePointerFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01CF2D0 (rimStorePointersInHoldingFrame.c)
 *     RIMInsertSimulatedKeepAliveStateForActiveContacts @ 0x1C01D5098 (RIMInsertSimulatedKeepAliveStateForActiveContacts.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01D9470 (rimProcessMissingPointerDeviceContacts.c)
 *     RIMCmActiveContactsBeginNoButton @ 0x1C01DE028 (RIMCmActiveContactsBeginNoButton.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ListTableEnd @ 0x1C00F1C32 (ListTableEnd.c)
 *     ListTableIteratorNext @ 0x1C00F1CCE (ListTableIteratorNext.c)
 */

__int64 *__fastcall RIMCmActiveContactsNext(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 *result; // rax
  __int64 v6; // xmm0_8
  __int64 v7[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( !*(_DWORD *)(a1 + 1000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 479);
  if ( *(_QWORD *)a2 != a1 + 992 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 480);
  v4 = (_QWORD *)ListTableEnd((__int64)v7, *(_QWORD *)a2);
  if ( *(_QWORD *)a2 == *v4 && *(_DWORD *)(a2 + 8) == (unsigned int)v4[1] && *(_QWORD *)(a2 + 16) == v4[2] )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 481);
  result = ListTableIteratorNext(v7, a2);
  v6 = result[2];
  *(_OWORD *)a2 = *(_OWORD *)result;
  *(_QWORD *)(a2 + 16) = v6;
  return result;
}
