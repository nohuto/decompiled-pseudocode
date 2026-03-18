/*
 * XREFs of ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA700
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z @ 0x1C00CA760 (-xxxMinMaximize@@YAXPEAUtagWND@@IW4MinMaxOptions@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C015C47C (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

void __fastcall xxxMinimizeWindowViaMinMax(const struct tagWND *a1, __int64 a2, char a3)
{
  __int64 v5; // rbp
  bool v6; // si
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagWND *v9; // rdx
  char v10; // dl
  bool v11; // r8

  v5 = BYTE4(a2);
  v6 = IsSemiMaximized(a1);
  xxxMinMaximize(v7, v5, v8);
  if ( (a3 & 0x20) != 0 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x16u,
        0xEu,
        (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
        a1,
        v5);
    LOBYTE(v9) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v9, v11);
  }
  if ( v6 )
    NotifyShell::ArrangementCompleted(a1, -1LL, 2LL);
}
