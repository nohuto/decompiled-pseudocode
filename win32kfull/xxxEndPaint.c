/*
 * XREFs of xxxEndPaint @ 0x1C00FE504
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00FD2CC (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserBeginPaint @ 0x1C00FD350 (NtUserBeginPaint.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C021869C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C022D770 (xxxSBWndProc.c)
 * Callees:
 *     zzzInternalShowCaret @ 0x1C00061E4 (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0054B50 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

__int64 __fastcall xxxEndPaint(__int64 *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(a1[5] + 20) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, ghrgnUpdateSave, (unsigned int)gRdwFlags);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, a1, 0x402u, 1);
  }
  SetOrClrWF(0, a1, 0x401u, 1);
  SetOrClrWF(0, a1, 0x404u, 1);
  if ( a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 304LL) )
    zzzInternalShowCaret();
  return 1LL;
}
