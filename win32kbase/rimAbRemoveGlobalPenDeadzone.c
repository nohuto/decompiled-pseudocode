/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1C01A9100
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C00EF7FA (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C01A9D04 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void *__fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v11[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( !*(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 133);
  *(_DWORD *)(a1 + 492) = 0;
  *(_DWORD *)(a1 + 704) = 0;
  result = memset(v11, 0, sizeof(v11));
  v6 = v11[1];
  *(_OWORD *)(a1 + 608) = v11[0];
  v7 = v11[2];
  *(_OWORD *)(a1 + 624) = v6;
  v8 = v11[3];
  *(_OWORD *)(a1 + 640) = v7;
  v9 = v11[4];
  *(_OWORD *)(a1 + 656) = v8;
  v10 = v11[5];
  *(_OWORD *)(a1 + 672) = v9;
  *(_OWORD *)(a1 + 688) = v10;
  return result;
}
