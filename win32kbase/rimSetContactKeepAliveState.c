/*
 * XREFs of rimSetContactKeepAliveState @ 0x1C01DA45C
 * Callers:
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01D8954 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimSetContactKeepAliveState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v9; // ecx
  __int64 result; // rax

  v4 = a2 + 2368;
  if ( !*(_QWORD *)(a1 + 784) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1802);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1803);
  if ( (*(_DWORD *)(a2 + 32) & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1804);
  *(_OWORD *)v4 = *(_OWORD *)(a2 + 2608);
  *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 2624);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 2640);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 2656);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 2672);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 2688);
  *(_OWORD *)(v4 + 96) = *(_OWORD *)(a2 + 2704);
  *(_OWORD *)(v4 + 112) = *(_OWORD *)(a2 + 2720);
  *(_OWORD *)(v4 + 128) = *(_OWORD *)(a2 + 2736);
  *(_OWORD *)(v4 + 144) = *(_OWORD *)(a2 + 2752);
  *(_OWORD *)(v4 + 160) = *(_OWORD *)(a2 + 2768);
  *(_OWORD *)(v4 + 176) = *(_OWORD *)(a2 + 2784);
  *(_OWORD *)(v4 + 192) = *(_OWORD *)(a2 + 2800);
  *(_OWORD *)(v4 + 208) = *(_OWORD *)(a2 + 2816);
  *(_OWORD *)(v4 + 224) = *(_OWORD *)(a2 + 2832);
  *(_DWORD *)(v4 + 48) = 0;
  *(_WORD *)(v4 + 58) = 0;
  *(_DWORD *)(v4 + 128) = a4;
  *(_QWORD *)(v4 + 144) = a3;
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(a2 + 2352);
  v9 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v9 - 5) > 1 )
  {
    result = (unsigned int)(v9 - 1);
    if ( (unsigned int)result > 3 )
      return result;
    result = *(unsigned int *)(a2 + 2356);
  }
  else
  {
    result = *(unsigned int *)(a2 + 2360);
  }
  *(_DWORD *)(v4 + 164) = 0;
  *(_DWORD *)(v4 + 160) = result;
  return result;
}
