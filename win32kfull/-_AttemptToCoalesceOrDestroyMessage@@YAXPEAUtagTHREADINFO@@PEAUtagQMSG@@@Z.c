/*
 * XREFs of ?_AttemptToCoalesceOrDestroyMessage@@YAXPEAUtagTHREADINFO@@PEAUtagQMSG@@@Z @ 0x1C01B722C
 * Callers:
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B7500 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0038580 (IsPointerInputMessage.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     DelegateReleasePointerMessage @ 0x1C01464D8 (DelegateReleasePointerMessage.c)
 */

void __fastcall _AttemptToCoalesceOrDestroyMessage(struct tagTHREADINFO *a1, struct tagQMSG *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // di
  __int64 v8; // r8
  char v9; // dl

  v7 = 1;
  if ( !IsPointerInputMessage(*((_DWORD *)a2 + 6)) || !(unsigned int)DelegateReleasePointerMessage((__int64)a1, v4) )
  {
    CleanEventMessage((void **)a2, v4, v5, v6);
    DelQEntry(*((_QWORD *)a1 + 54) + 24LL, (__int64)a2, 1);
  }
  v8 = *((_QWORD *)a1 + 54);
  if ( *(struct tagQMSG **)(v8 + 88) == a2 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      v9 = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v7 = 0;
    if ( v9 || v7 )
      WPP_RECORDER_AND_TRACE_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v7,
        (__int64)gFullLog,
        5u,
        0x12u,
        0xFu,
        (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
        v8,
        *(_QWORD *)(v8 + 88));
    *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
  }
}
