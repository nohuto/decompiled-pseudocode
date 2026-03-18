/*
 * XREFs of ?RestoreSemimaximizedState@@YAXPEAUtagWND@@PEBUtagCHECKPOINT@@@Z @ 0x1C01EA664
 * Callers:
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 * Callees:
 *     ?IsSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00D0C08 (-IsSemiMaximized@@YA_NPEBUtagWND@@@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z @ 0x1C01EB094 (-UpdateDwmSnapArrangedInitiated@@YAXPEAUtagWND@@@Z.c)
 */

void __fastcall RestoreSemimaximizedState(struct tagWND *a1, const struct tagCHECKPOINT *a2, __int64 a3, __int64 a4)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 556);
  if ( a2 != (const struct tagCHECKPOINT *)GetProp(
                                             (__int64)a1,
                                             *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1),
                                             1LL,
                                             a4) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 557);
  if ( (*((_DWORD *)a2 + 12) & 8) != 0 )
    *((_DWORD *)a1 + 80) |= 0x4000000u;
  if ( (*((_DWORD *)a2 + 12) & 0x10) != 0 )
    *((_DWORD *)a1 + 80) |= 0x8000000u;
  if ( !IsSemiMaximized(a1) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 569);
  UpdateDwmSnapArrangedInitiated(a1);
}
