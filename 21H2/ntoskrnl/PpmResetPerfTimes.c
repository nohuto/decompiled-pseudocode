/*
 * XREFs of PpmResetPerfTimes @ 0x1403B4C90
 * Callers:
 *     PpmCheckResetProcessors @ 0x1403B3F5C (PpmCheckResetProcessors.c)
 *     PpmCheckReset @ 0x1403B4C70 (PpmCheckReset.c)
 *     PpmCheckProcessorInit @ 0x1403C1E30 (PpmCheckProcessorInit.c)
 *     PpmResetPerfEngineForProcessorEx @ 0x140419B58 (PpmResetPerfEngineForProcessorEx.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     PpmSnapPerformanceAccumulation @ 0x1403051E0 (PpmSnapPerformanceAccumulation.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x1405DC4F8 (PpmHvSnapPerformanceAccumulation.c)
 */

void __fastcall PpmResetPerfTimes(__int64 a1)
{
  __int64 v1; // rbx
  _OWORD *v2; // rsi
  _DWORD *v3; // rbp
  LARGE_INTEGER *v4; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    v2 = (_OWORD *)(v1 + 32);
    v3 = *(_DWORD **)(v1 + 88);
    if ( *(_BYTE *)(a1 + 64) )
    {
      v4 = (LARGE_INTEGER *)(a1 - 33968);
      if ( _bittest64((const signed __int64 *)(a1 - 33968 + 35232), 0x27u) )
        v4[4225].QuadPart = __readmsr(0xDB2u);
      v4[4211].QuadPart = __rdtsc();
      v4[4215] = KeQueryPerformanceCounter(0LL);
      PpmSnapPerformanceAccumulation((__int64)v4, 1u, 0, 0, v1 + 32, v3);
    }
    else
    {
      PpmHvSnapPerformanceAccumulation(a1, 1, 0, v1 + 32, *(_QWORD *)(v1 + 88));
    }
    *(_OWORD *)(v1 + 160) = *v2;
    *(_OWORD *)(v1 + 176) = *(_OWORD *)(v1 + 48);
    *(_OWORD *)(v1 + 192) = *(_OWORD *)(v1 + 64);
    *(_QWORD *)(v1 + 208) = *(_QWORD *)(v1 + 80);
    memmove(*(void **)(v1 + 216), v3, 96 * v3[12] + 56);
    *(_QWORD *)(v1 + 8) = *(_QWORD *)v2;
    *(_QWORD *)v1 = *(_QWORD *)(v1 + 40);
    *(_QWORD *)(v1 + 16) = *(_QWORD *)(v1 + 48);
    *(_DWORD *)(v1 + 24) = *(_DWORD *)(v1 + 80);
  }
}
