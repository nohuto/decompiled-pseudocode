/*
 * XREFs of rimAbRemoveGlobalPenDeadzone @ 0x1C01873D8
 * Callers:
 *     rimAbRemoveGlobalPenDeadzoneIfExpired @ 0x1C0187468 (rimAbRemoveGlobalPenDeadzoneIfExpired.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0187FE0 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 * Callees:
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall rimAbRemoveGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  void *result; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  _OWORD v10[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_DWORD *)(a1 + 516) = 0;
  *(_DWORD *)(a1 + 728) = 0;
  result = memset(v10, 0, sizeof(v10));
  v5 = v10[1];
  *(_OWORD *)(a1 + 632) = v10[0];
  v6 = v10[2];
  *(_OWORD *)(a1 + 648) = v5;
  v7 = v10[3];
  *(_OWORD *)(a1 + 664) = v6;
  v8 = v10[4];
  *(_OWORD *)(a1 + 680) = v7;
  v9 = v10[5];
  *(_OWORD *)(a1 + 696) = v8;
  *(_OWORD *)(a1 + 712) = v9;
  return result;
}
