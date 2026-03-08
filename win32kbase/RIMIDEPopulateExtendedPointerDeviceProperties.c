/*
 * XREFs of RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C01C7410
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01C21B8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

void __fastcall RIMIDEPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2)
{
  __int128 v3; // xmm1
  int v4; // eax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  _OWORD v8[6]; // [rsp+20h] [rbp-68h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 307);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    memset(v8, 0, 0x5CuLL);
    v3 = v8[1];
    v4 = DWORD2(v8[5]);
    *(_OWORD *)(a2 + 268) = v8[0];
    v5 = v8[2];
    *(_OWORD *)(a2 + 284) = v3;
    v6 = v8[3];
    *(_OWORD *)(a2 + 300) = v5;
    v7 = v8[4];
    *(_OWORD *)(a2 + 316) = v6;
    *(_QWORD *)&v6 = *(_QWORD *)&v8[5];
    *(_OWORD *)(a2 + 332) = v7;
    *(_QWORD *)(a2 + 348) = v6;
    *(_DWORD *)(a2 + 356) = v4;
    *(_DWORD *)(a2 + 304) = 50;
    *(_DWORD *)(a2 + 308) = 25;
  }
}
