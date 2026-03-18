/*
 * XREFs of ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     SetPointer @ 0x1C00B2D10 (SetPointer.c)
 * Callees:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C00732EC (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0073810 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C007383C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0073900 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     PtiMouseFromQ @ 0x1C00ABFA8 (PtiMouseFromQ.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C00B2F40 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00B2F9C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

char __fastcall SetPointerInternal(CursorApiRouter *a1, unsigned int a2)
{
  struct tagCURSOR *CurrentCursorFrame; // rax
  unsigned int v4; // edi
  struct tagCURSOR *v5; // rbp
  struct tagCURSOR *v6; // rax
  struct tagCURSOR *v7; // r14
  CursorApiRouter *v8; // rcx
  unsigned int v9; // esi
  int DeferredRoutine; // r9d
  CCursorSizes *v11; // rcx
  int v12; // ebx
  unsigned int CurrentCursorSize; // eax
  unsigned int v14; // r8d
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rcx
  _BYTE v18[160]; // [rsp+30h] [rbp-C8h] BYREF

  if ( !(_BYTE)a1 )
  {
    v14 = 0;
    v4 = 1;
    if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) == 1 )
      v14 = 32;
    CursorApiRouter::SetPointerShape(a1, 0LL, v14, 0);
    memset(v18, 0, 0x98uLL);
    InputTraceLogging::Cursor::SetCursorImage(v18, 0LL, 0LL, a2, 0, 0);
    goto LABEL_16;
  }
  if ( !gpqForeground
    || (v15 = (struct tagTHREADINFO *)PtiMouseFromQ(gpqForeground), *(int *)(v16 + 384) >= 0)
    || (LOBYTE(CurrentCursorFrame) = TestRawInputModeCaptureMouse(v15), !(_BYTE)CurrentCursorFrame) )
  {
    CurrentCursorFrame = (struct tagCURSOR *)-gpqCursor;
    v4 = gpqCursor == 0LL ? 3 : 0;
    if ( gpqCursor )
    {
      if ( *(int *)(gpqCursor + 384LL) >= 0 )
      {
        v5 = *(struct tagCURSOR **)(gpqCursor + 376LL);
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
              if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) == 1 )
                v9 |= 0x20u;
              DeferredRoutine = (int)WPP_MAIN_CB.Dpc.DeferredRoutine;
              if ( gProtocolType )
                DeferredRoutine = 0;
              CursorApiRouter::SetPointerShape(v8, v8, v9, DeferredRoutine);
              v4 = 2;
              v12 = (int)WPP_MAIN_CB.Dpc.DeferredRoutine;
              if ( gProtocolType )
                v12 = 0;
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
