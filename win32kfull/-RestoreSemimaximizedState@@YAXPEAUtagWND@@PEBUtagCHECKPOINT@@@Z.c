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
