/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C01CD2D0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01A93A0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C01B9F94 (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C01BC12C (rimEndAllActiveContactsWorker.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01D6A24 (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01D724C (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimFindHoldingFrame @ 0x1C00F07AA (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01CF270 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( (_BYTE)a2 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      50,
      (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
  result = (__int64)rimFindHoldingFrame(a1, v2);
  if ( result && *(_DWORD *)(result + 16) )
  {
    rimReclaimHoldingFrame(v7, v6, result);
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0LL, 1LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) == 0)
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)v6 || v8 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v6,
             v8,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             1,
             51,
             (__int64)&WPP_9395a828eeb43e0402bb2d1378077ce1_Traceguids);
  return result;
}
