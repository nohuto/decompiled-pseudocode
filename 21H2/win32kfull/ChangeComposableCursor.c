/*
 * XREFs of ChangeComposableCursor @ 0x1C01D42BC
 * Callers:
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxDwmStopRedirection @ 0x1C00E9970 (xxxDwmStopRedirection.c)
 *     MagContextThreadCallout @ 0x1C01CC7B0 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01CD254 (MagSetLensContextInformation.c)
 *     NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01F8790 (NtUserEnableSoftwareCursorForScreenCapture.c)
 *     ?EnableDwmSwCursorMoveSize@@YAXPEAH@Z @ 0x1C020ADE4 (-EnableDwmSwCursorMoveSize@@YAXPEAH@Z.c)
 *     xxxCancelTrackingForThread @ 0x1C02113F0 (xxxCancelTrackingForThread.c)
 *     xxxMoveSize @ 0x1C0212874 (xxxMoveSize.c)
 * Callees:
 *     SetPointer @ 0x1C002A4C0 (SetPointer.c)
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
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 0;
      goto LABEL_7;
    }
  }
  else if ( (_DWORD)a1 )
  {
    SetPointer(0LL);
    *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = 1;
LABEL_7:
    result = SetPointer(1LL);
  }
  gSoftwareCursorCount = v2;
  return result;
}
