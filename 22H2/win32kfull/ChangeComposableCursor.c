/*
 * XREFs of ChangeComposableCursor @ 0x1C01D3CFC
 * Callers:
 *     xxxFreeWindow @ 0x1C007A720 (xxxFreeWindow.c)
 *     xxxDwmStopRedirection @ 0x1C00E9620 (xxxDwmStopRedirection.c)
 *     MagContextThreadCallout @ 0x1C01CC1F0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CCC94 (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01F81D0 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020A824 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C0210E30 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C02122B4 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C002A420 (SetPointer.c)
 */

__int64 __fastcall ChangeComposableCursor(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = (unsigned int)gSoftwareCursorCount;
  v2 = gSoftwareCursorCount + ((_DWORD)a1 != 0 ? 1 : -1);
  if ( gSoftwareCursorCount )
  {
    if ( gSoftwareCursorCount == 1 && !(_DWORD)a1 )
    {
      SetPointer(a1);
      HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    HIDWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
