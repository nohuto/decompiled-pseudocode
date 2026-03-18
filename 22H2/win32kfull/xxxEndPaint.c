/*
 * XREFs of xxxEndPaint @ 0x1C00CEAA0
 * Callers:
 *     xxxTooltipWndProc @ 0x1C001FBD0 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00CD814 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x1C00CD890 (NtUserBeginPaint.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0215ADC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C022AA50 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00062D4 (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0034D50 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

__int64 __fastcall xxxEndPaint(_QWORD *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(a1[5] + 20LL) & 2) != 0 )
  {
    if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink )
    {
      InternalInvalidate3(a1, (__int64)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink, (unsigned int)gRdwFlags);
      if ( !--LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
      {
        GreDeleteObject(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink);
        WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0LL, a1, 1026LL, 1LL);
  }
  SetOrClrWF(0LL, a1, 1025LL, 1LL);
  SetOrClrWF(0LL, a1, 1028LL, 1LL);
  if ( a1 == *(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalShowCaret();
  return 1LL;
}
