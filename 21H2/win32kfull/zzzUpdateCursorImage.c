/*
 * XREFs of zzzUpdateCursorImage @ 0x1C00734A0
 * Callers:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023BF4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzCalcStartCursorHide @ 0x1C0073330 (zzzCalcStartCursorHide.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0074D40 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z @ 0x1C00A22A4 (-zzzFixupGlobalCursorWhenChanged@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C0118590 (-zzzShowCursor@@YAH_N@Z.c)
 *     HideAutorunCursor @ 0x1C01CFB60 (HideAutorunCursor.c)
 * Callees:
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1C0072F4C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z @ 0x1C00732EC (-FCursorShadowed@@YA_NPEAU_CURSINFO@@@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0073810 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C007383C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z @ 0x1C0073900 (-TestRawInputModeCaptureMouse@@YA_NPEAUtagTHREADINFO@@@Z.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     SetRITTimer @ 0x1C0078D60 (SetRITTimer.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C00B2F40 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00B2F9C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 */

struct tagCURSOR *zzzUpdateCursorImage()
{
  __int64 v0; // rdi
  unsigned int v1; // ebp
  int v2; // r12d
  __int64 v3; // rax
  struct tagTHREADINFO *v4; // rcx
  struct tagCURSOR *result; // rax
  struct tagCURSOR *v6; // rbx
  struct tagCURSOR *v7; // rax
  struct tagCURSOR *v8; // r15
  struct tagCURSOR *v9; // r14
  bool v10; // al
  CursorApiRouter *v11; // rcx
  unsigned int v12; // r9d
  unsigned int v13; // esi
  int DeferredRoutine; // r9d
  CCursorSizes *v15; // rcx
  bool v16; // bl
  unsigned int v17; // ecx
  int v18; // ebx
  unsigned int CurrentCursorSize; // eax
  _DWORD *v20; // rax

  v0 = 0LL;
  v1 = 0;
  v2 = 3;
  if ( !gpqForeground
    || ((v3 = *(_QWORD *)(gpqForeground + 104LL)) != 0
      ? (v4 = *(struct tagTHREADINFO **)(v3 + 16))
      : (v4 = *(struct tagTHREADINFO **)(gpqForeground + 88LL)),
        !TestRawInputModeCaptureMouse(v4) || *(int *)(gpqForeground + 384LL) >= 0) )
  {
    result = (struct tagCURSOR *)gpqCursor;
    if ( !gpqCursor )
      return result;
    v1 = 4;
    if ( *(int *)(gpqCursor + 384LL) >= 0 )
    {
      v1 = 3;
      v0 = *(_QWORD *)(gpqCursor + 376LL);
      if ( (HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory) || gtmridAutorunCursor)
        && (v0 == gasyscur[1] || v0 == *(_QWORD *)(gasyscur[0] + 8840LL) || v0 == *(_QWORD *)(gasyscur[0] + 6080LL)) )
      {
        if ( gtmridAutorunCursor )
        {
          v0 = *(_QWORD *)(gasyscur[0] + 8840LL);
          v1 = 1;
        }
        else if ( !(unsigned __int8)isChildPartition() )
        {
          v1 = 2;
          v0 = *(_QWORD *)(gasyscur[0] + 6080LL);
        }
      }
    }
  }
  v6 = gpcurLogCurrent;
  if ( (struct tagCURSOR *)v0 != gpcurLogCurrent )
  {
    if ( v0 && (*(_DWORD *)(v0 + 80) & 8) != 0 && *(_QWORD *)(v0 + 112) )
    {
      if ( !WPP_MAIN_CB.Dpc.DeferredContext )
      {
        *(_DWORD *)(v0 + 120) = 0;
        v20 = *(_DWORD **)(v0 + 112);
        gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        WPP_MAIN_CB.Dpc.DeferredContext = (PVOID)SetRITTimer(
                                                   WPP_MAIN_CB.Dpc.DeferredContext,
                                                   100 * *v20 / 6u,
                                                   zzzAnimateCursor,
                                                   1LL);
      }
    }
    else if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      FindTimer(0, WPP_MAIN_CB.Dpc.DeferredContext, 4, 1, 0LL);
      WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
    }
    EtwTraceWaitCursor(v0, gpcurLogCurrent);
    gpcurLogCurrent = (struct tagCURSOR *)v0;
  }
  v7 = FixupCursorForMonitor((struct tagCURSOR *)v0);
  result = GetCurrentCursorFrame(v7);
  v8 = gpcurPhysCurrent;
  v9 = result;
  if ( gpcurPhysCurrent != result )
  {
    gpcurPhysCurrent = result;
    if ( result )
    {
      v10 = FCursorShadowed((struct _CURSINFO *)(v0 + 80));
      v13 = v12 | 0x10;
      if ( !v10 )
        v13 = v12;
      if ( HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) == 1 )
        v13 |= 0x20u;
      DeferredRoutine = (int)WPP_MAIN_CB.Dpc.DeferredRoutine;
      if ( gProtocolType )
        DeferredRoutine = 0;
      CursorApiRouter::SetPointerShape(v11, (struct tagCURSOR *)((char *)v9 + 80), v13, DeferredRoutine);
      if ( v6 == (struct tagCURSOR *)v0 )
      {
        if ( *((_DWORD *)v9 + 19) == *((_DWORD *)v8 + 19) )
        {
LABEL_21:
          v16 = gpcurPhysCurrent != 0LL;
          if ( (gpcurPhysCurrent != 0LL) != (v8 != 0LL) )
          {
            LOBYTE(v15) = gpcurPhysCurrent != 0LL;
            SendVisibilityChanged(v15);
          }
          v17 = 32780;
          if ( v16 )
          {
            if ( !v8 )
              v17 = 32770;
          }
          else
          {
            v17 = 32771;
          }
          if ( !gdwDeferWinEvent )
            v2 = 1;
          return (struct tagCURSOR *)xxxWindowEvent(v17, v2);
        }
        v1 = 5;
      }
      v18 = (int)WPP_MAIN_CB.Dpc.DeferredRoutine;
      if ( gProtocolType )
        v18 = 0;
      CurrentCursorSize = CCursorSizes::GetCurrentCursorSize(v15);
      InputTraceLogging::Cursor::SetCursorImage(v9, v0, CurrentCursorSize, v1, v13, v18);
      goto LABEL_21;
    }
    SetPointerInternal(0LL, v1);
    goto LABEL_21;
  }
  return result;
}
