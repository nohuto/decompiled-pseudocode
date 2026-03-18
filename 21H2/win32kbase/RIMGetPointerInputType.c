/*
 * XREFs of RIMGetPointerInputType @ 0x1C019369C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C0187010 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C0187540 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0187718 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C0195A10 (RIMUpdatePrimaryDevice.c)
 *     RIMCompletePointerDeviceFrame @ 0x1C01A62A0 (RIMCompletePointerDeviceFrame.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01AE2AC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01B1EB4 (rimProcessPointerDeviceButtonContact.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
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
      (__int64)&WPP_f09de9e540bb38e019706b431a7ac68e_Traceguids,
      a1);
  return 1LL;
}
