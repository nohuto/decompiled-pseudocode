/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0
 * Callers:
 *     SetPointer @ 0x1C00219A0 (SetPointer.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     xxxSystemParametersInfoWorker @ 0x1C01032D0 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C00204B4 (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00204F0 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002052C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00205A8 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0021BEC (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0021C48 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     PtiMouseFromQ @ 0x1C0037050 (PtiMouseFromQ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C01A9B80 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 */

char __fastcall SetPointerInternal(CursorApiRouter *a1, unsigned int a2)
{
  struct tagCURSOR *CurrentCursorFrame; // rax
  unsigned int v4; // ebx
  struct tagCURSOR *v5; // rsi
  struct tagCURSOR *v6; // rax
  struct tagCURSOR *v7; // r14
  CursorApiRouter *v8; // rcx
  unsigned int v9; // edi
  unsigned int v10; // r9d
  CCursorSizes *v11; // rcx
  int v12; // ebp
  unsigned int CurrentCursorSize; // eax
  unsigned int v14; // r8d
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  _BYTE v18[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( !(_BYTE)a1 )
  {
    v14 = 0;
    v4 = 1;
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) == 1 )
      v14 = 32;
    CursorApiRouter::SetPointerShape(a1, 0LL, v14, 0, 0);
    memset_0(v18, 0, 0x98uLL);
    InputTraceLogging::Cursor::SetCursorImage(v18, 0LL, 0LL, a2, 0, 0);
    goto LABEL_16;
  }
  if ( !gpqForeground
    || (v15 = (struct tagTHREADINFO *)PtiMouseFromQ(), *(int *)(v16 + 392) >= 0)
    || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v15), !(_BYTE)CurrentCursorFrame) )
  {
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v4 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 392LL) >= 0 )
      {
        v5 = *(struct tagCURSOR **)(gpqCursor + 384LL);
        if ( v5 )
        {
          LOBYTE(CurrentCursorFrame) = gpsi;
          if ( *(_DWORD *)(gpsi + 1972LL) )
          {
            v6 = FixupCursorForMonitor(v5);
            CurrentCursorFrame = GetCurrentCursorFrame(v6);
            v7 = CurrentCursorFrame;
            if ( CurrentCursorFrame )
            {
              v9 = 16 * FCursorShadowed((struct tagCURSOR *)((char *)CurrentCursorFrame + 80));
              if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) == 1 )
                v9 |= 0x20u;
              if ( gProtocolType )
                v10 = 0;
              else
                v10 = *(_DWORD *)(SGDGetUserSessionState(v8) + 15936);
              CursorApiRouter::SetPointerShape(v8, (struct tagCURSOR *)((char *)v7 + 80), v9, v10, 0x32u);
              v4 = 2;
              if ( gProtocolType )
                v12 = 0;
              else
                v12 = *(_DWORD *)(SGDGetUserSessionState(v11) + 15936);
              CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v11);
              LOBYTE(CurrentCursorFrame) = InputTraceLogging::Cursor::SetCursorImage(
                                             v7,
                                             v5,
                                             CurrentCursorSize,
                                             a2,
                                             v9,
                                             v12);
            }
          }
        }
      }
    }
    if ( v4 )
LABEL_16:
      LOBYTE(CurrentCursorFrame) = NotifySetPointerGraphicDevice(v4);
  }
  return (char)CurrentCursorFrame;
}
