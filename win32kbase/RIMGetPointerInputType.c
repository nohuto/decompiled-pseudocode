/*
 * XREFs of RIMGetPointerInputType @ 0x1C00EFC04
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01A8B98 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C01A91C8 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C01BA144 (RIMUpdatePrimaryDevice.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1C01CDFBC (rimDoUpdateInputGlobalsWorkItem.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01D99D4 (rimProcessPointerDeviceButtonContact.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C02120C0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v1 - 1) <= 3 )
    return 2LL;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 3LL;
  if ( v1 == 7 )
    return 5LL;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      3,
      1,
      10,
      (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
      a1);
  return 1LL;
}
