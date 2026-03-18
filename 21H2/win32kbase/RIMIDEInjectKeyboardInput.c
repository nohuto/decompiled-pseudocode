/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C00039D0
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C00037A4 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RIMQueueKeyboardInput @ 0x1C0003AA8 (RIMQueueKeyboardInput.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // esi

  v1 = *(_QWORD *)(a1 + 424);
  v2 = a1 + 88;
  v3 = v1 + 104;
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v9 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    RIMLockExclusive(v1 + 792);
    v7 = RIMQueueKeyboardInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    *(_QWORD *)(v1 + 800) = 0LL;
    v8 = v1 + 792;
    v9 = v7;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v9;
}
