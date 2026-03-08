/*
 * XREFs of ?RemoveSemiMaximizedState@@YAXPEAUtagWND@@@Z @ 0x1C00E6C30
 * Callers:
 *     xxxAddFullScreen @ 0x1C00E6AF8 (xxxAddFullScreen.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?HasMaximizedState@@YA_NPEBUtagWND@@@Z @ 0x1C00E6C80 (-HasMaximizedState@@YA_NPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RemoveSemiMaximizedState(struct tagWND *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 && !HasMaximizedState(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 540LL);
  *((_DWORD *)a1 + 80) &= 0xF3FFFFFF;
  SetOrClrWF(0, (__int64 *)a1, 0xD910u, 1);
}
