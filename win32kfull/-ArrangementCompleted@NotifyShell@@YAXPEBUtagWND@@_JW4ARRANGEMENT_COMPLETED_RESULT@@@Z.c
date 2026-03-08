/*
 * XREFs of ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1C021F9F0
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0011794 (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     ?xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z @ 0x1C0014F28 (-xxxMinimizeWindowViaMinMax@@YAXPEAUtagWND@@UShowCommandAndSource@@W4MinMaxOptions@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x1C00FBCB8 (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x1C01EB67C (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z @ 0x1C01ECD18 (-xxxArrangeWindow@@YAXPEAUtagWND@@W4_WINDOW_ARRANGEMENT_COMMAND@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x1C023FD9C (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qs @ 0x1C009EB2C (WPP_RECORDER_AND_TRACE_SF_qs.c)
 *     ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1C021FDB0 (-GetWindowTrackState@ShellWindowManagement@@YA-AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0220058 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall NotifyShell::ArrangementCompleted(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebp
  PDEVICE_OBJECT v6; // rcx
  char v7; // dl
  const char *v8; // rax
  unsigned __int16 WindowTrackState; // si
  int v10; // ebx
  __int64 v11; // rcx

  v3 = a3;
  v4 = a2;
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v7 = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v3 == 1 )
    {
      v8 = "ACR_ARRANGED";
    }
    else
    {
      v8 = "ACR_DISARRANGED";
      if ( v3 != 2 )
        v8 = "ACR_NONE";
    }
    WPP_RECORDER_AND_TRACE_SF_qs(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      a3,
      (__int64)gFullLog,
      4u,
      1u,
      0x13u,
      (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids,
      *a1,
      v8);
  }
  WindowTrackState = 0;
  if ( (_WORD)v3 == 2 )
  {
    LOBYTE(a2) = 1;
    WindowTrackState = ShellWindowManagement::GetWindowTrackState(a1, a2, a3);
  }
  v10 = 0;
  if ( *((_QWORD *)PtiCurrentShared((__int64)v6) + 84) )
    v10 = *((_DWORD *)PtiCurrentShared(v11) + 322) & 0x1F;
  return anonymous_namespace_::NotifyShellSimplePayload(
           *a1,
           2,
           (unsigned __int16)v3 | ((WindowTrackState | (unsigned int)(16 * v10)) << 16),
           v4,
           0);
}
