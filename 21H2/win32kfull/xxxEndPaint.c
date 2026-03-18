/*
 * XREFs of xxxEndPaint @ 0x1C00C4E2C
 * Callers:
 *     NtUserBeginPaint @ 0x1C005E0C0 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C4C84 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C00C4D00 (NtUserEndPaint.c)
 *     xxxTooltipWndProc @ 0x1C010CED0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C022F3B0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C02420E0 (xxxSBWndProc.c)
 * Callees:
 *     InternalInvalidate3 @ 0x1C004C894 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     zzzInternalShowCaret @ 0x1C00C2D88 (zzzInternalShowCaret.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, ghrgnUpdateSave, gRdwFlags);
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
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzInternalShowCaret();
  return 1LL;
}
