/*
 * XREFs of RIMSetContactEndState @ 0x1C01ADE8C
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0187C10 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall RIMSetContactEndState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rbx
  int result; // eax

  v5 = a2 + 2344;
  if ( !*(_QWORD *)(a1 + 784) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_OWORD *)v5 = *(_OWORD *)(a2 + 2584);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 2600);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 2616);
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(a2 + 2632);
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(a2 + 2648);
  *(_OWORD *)(v5 + 80) = *(_OWORD *)(a2 + 2664);
  *(_OWORD *)(v5 + 96) = *(_OWORD *)(a2 + 2680);
  *(_OWORD *)(v5 + 112) = *(_OWORD *)(a2 + 2696);
  *(_OWORD *)(v5 + 128) = *(_OWORD *)(a2 + 2712);
  *(_OWORD *)(v5 + 144) = *(_OWORD *)(a2 + 2728);
  *(_OWORD *)(v5 + 160) = *(_OWORD *)(a2 + 2744);
  *(_OWORD *)(v5 + 176) = *(_OWORD *)(a2 + 2760);
  *(_OWORD *)(v5 + 192) = *(_OWORD *)(a2 + 2776);
  *(_OWORD *)(v5 + 208) = *(_OWORD *)(a2 + 2792);
  *(_OWORD *)(v5 + 224) = *(_OWORD *)(a2 + 2808);
  *(_DWORD *)(v5 + 48) = 0;
  *(_WORD *)(v5 + 58) = 0;
  result = *(_DWORD *)(v5 + 76) & 0x2000000;
  *(_DWORD *)(v5 + 128) = a4;
  *(_QWORD *)(v5 + 144) = a3;
  *(_DWORD *)(v5 + 76) = result;
  if ( a5 )
  {
    result |= 0x8000u;
    *(_DWORD *)(v5 + 76) = result;
  }
  *(_DWORD *)(v5 + 164) = 0;
  return result;
}
