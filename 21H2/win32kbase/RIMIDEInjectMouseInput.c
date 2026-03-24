/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C0169AA4
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C0169844 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMQueueMouseInput @ 0x1C016A53C (RIMQueueMouseInput.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi

  v1 = *(_QWORD *)(a1 + 424);
  v2 = a1 + 88;
  v3 = v1 + 104;
  RIMLockExclusive(v1 + 104);
  if ( *(_BYTE *)(v1 + 81) )
  {
    v6 = -1073741637;
  }
  else
  {
    if ( (*(_DWORD *)(v2 + 184) & 0x2000) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2042);
    RIMLockExclusive(v1 + 568);
    v4 = RIMQueueMouseInput((struct RawInputManagerObject *)v1, (struct RIMDEV *)v2);
    *(_QWORD *)(v1 + 576) = 0LL;
    v5 = v1 + 568;
    v6 = v4;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  *(_QWORD *)(v3 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
