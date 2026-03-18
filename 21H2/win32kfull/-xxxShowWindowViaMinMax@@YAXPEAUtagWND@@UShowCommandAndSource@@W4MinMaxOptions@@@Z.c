/*
 * XREFs of ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C00CA638
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C006F980 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00B0AE8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C015C47C (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1C0236640 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C0236E78 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 */

char __fastcall xxxShowWindowViaMinMax(const struct tagWND *a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned __int8 v5; // di
  struct tagWND *v6; // rdx
  char result; // al
  __int64 v8; // rcx
  char v9; // dl
  bool v10; // r8
  __int128 v12; // [rsp+58h] [rbp-50h] BYREF
  __int64 v13; // [rsp+68h] [rbp-40h]
  unsigned int v14; // [rsp+70h] [rbp-38h]
  char v15; // [rsp+74h] [rbp-34h]
  __int128 v16; // [rsp+78h] [rbp-30h] BYREF

  v3 = a3;
  v5 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && IsSemiMaximized(a1);
  v13 = 0LL;
  v14 = -1;
  v12 = 0LL;
  v15 = 0;
  v16 = 0LL;
  xxxMinMaximizeEx(a1, BYTE4(a2), a3, &v12);
  if ( (v3 & 0x20) != 0 )
  {
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_qd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
        4u,
        0x16u,
        0xFu,
        (__int64)&WPP_219c76519e97359f6ee21a3b6c4ed231_Traceguids,
        a1,
        BYTE4(a2),
        a2);
    LOBYTE(v6) = 1;
    NotifyShell::TrackedWindowPosChanged(a1, v6, v10);
  }
  if ( v15 )
    ShellWindowPos::NotifyPosAndStateApplied(a1, 2LL, &v16, v14);
  result = IsSemiMaximized(a1);
  if ( v5 != result )
    return NotifyShell::ArrangementCompleted(v8, v14, (unsigned int)v5 + 1);
  return result;
}
