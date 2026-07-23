/*
 * XREFs of PpmResetPerfTimes @ 0x1403C2720
 * Callers:
 *     PpmCheckResetProcessors @ 0x1403C2494 (PpmCheckResetProcessors.c)
 *     PpmCheckReset @ 0x1403C2700 (PpmCheckReset.c)
 *     PpmCheckProcessorInit @ 0x1403CEE00 (PpmCheckProcessorInit.c)
 *     PpmResetPerfEngineForProcessorEx @ 0x1403F81B0 (PpmResetPerfEngineForProcessorEx.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x1402C5A90 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x1403C27E4 (PpmResetPerformanceAccumulation.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x14057C720 (PpmHvSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _OWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (_OWORD *)(v2 + 32);
    if ( *(_BYTE *)(a1 + 60) )
    {
      v4 = a1 - 33128;
      PpmResetPerformanceAccumulation(a1 - 33128);
      PpmSnapPerformanceAccumulation(v4, 1u, 0, 0, (unsigned __int64 *)(v2 + 32));
    }
    else
    {
      LOBYTE(a2) = 1;
      PpmHvSnapPerformanceAccumulation(a1, a2, 0LL, v2 + 32);
    }
    *(_OWORD *)(v2 + 224) = *v3;
    *(_OWORD *)(v2 + 240) = *(_OWORD *)(v2 + 48);
    *(_OWORD *)(v2 + 256) = *(_OWORD *)(v2 + 64);
    *(_OWORD *)(v2 + 272) = *(_OWORD *)(v2 + 80);
    *(_OWORD *)(v2 + 288) = *(_OWORD *)(v2 + 96);
    *(_OWORD *)(v2 + 304) = *(_OWORD *)(v2 + 112);
    *(_QWORD *)(v2 + 8) = *(_QWORD *)v3;
    *(_QWORD *)v2 = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(v2 + 48);
    result = *(unsigned int *)(v2 + 120);
    *(_DWORD *)(v2 + 24) = result;
  }
  return result;
}
