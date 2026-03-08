/*
 * XREFs of ChangeComposableCursor @ 0x1C01AA1C4
 * Callers:
 *     MagpDestroyLensContext @ 0x1C00337D8 (MagpDestroyLensContext.c)
 *     xxxDwmStopRedirection @ 0x1C007B850 (xxxDwmStopRedirection.c)
 *     MagContextThreadCallout @ 0x1C01A4070 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01A4A80 (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01D0580 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C01EA5F0 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C01F3CF0 (xxxCancelTrackingForThread.c)
 * Callees:
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
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
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
