/*
 * XREFs of xxxEndPaint @ 0x1C0046240
 * Callers:
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C004608C (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C0046110 (NtUserEndPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C004639C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00DB220 (xxxTooltipWndProc.c)
 *     NtUserBeginPaint @ 0x1C0100BB0 (NtUserBeginPaint.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0235BCC (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSBWndProc @ 0x1C0246160 (xxxSBWndProc.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     zzzInternalShowCaret @ 0x1C006A12C (zzzInternalShowCaret.c)
 *     InternalInvalidate3 @ 0x1C0074764 (InternalInvalidate3.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 20LL) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0LL, a1, 1026LL, 1LL);
  }
  SetOrClrWF(0LL, a1, 1025LL, 1LL);
  SetOrClrWF(0LL, a1, 1028LL, 1LL);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzInternalShowCaret();
  return 1LL;
}
