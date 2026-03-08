/*
 * XREFs of ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01EB814
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00FFAF8 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C0031BD4 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EC244 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall RestoreSemimaximizedState(struct tagWND *a1, const struct tagCHECKPOINT *a2)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 557);
  if ( a2 != (const struct tagCHECKPOINT *)GetProp(
                                             (__int64)a1,
                                             *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1),
                                             1u) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 558);
  if ( (*((_DWORD *)a2 + 12) & 8) != 0 )
    *((_DWORD *)a1 + 80) |= 0x4000000u;
  if ( (*((_DWORD *)a2 + 12) & 0x10) != 0 )
    *((_DWORD *)a1 + 80) |= 0x8000000u;
  if ( !IsSemiMaximized(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 570);
  UpdateDwmSnapArrangedInitiated(a1);
}
