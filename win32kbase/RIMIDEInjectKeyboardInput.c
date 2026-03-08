/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C0003934
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0003708 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMQueueKeyboardInput @ 0x1C0003A10 (RIMQueueKeyboardInput.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned int v3; // eax
  unsigned int v4; // esi

  v1 = *(_QWORD *)(a1 + 408);
  v2 = (a1 + 72) & -(__int64)(a1 != 0);
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v4 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1970LL);
    RIMLockExclusive(v1 + 760);
    v3 = RIMQueueKeyboardInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    *(_QWORD *)(v1 + 768) = 0LL;
    v4 = v3;
    ExReleasePushLockExclusiveEx(v1 + 760, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v1 + 112) = 0LL;
  ExReleasePushLockExclusiveEx(v1 + 104, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
