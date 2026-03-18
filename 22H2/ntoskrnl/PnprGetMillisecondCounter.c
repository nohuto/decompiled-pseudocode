/*
 * XREFs of PnprGetMillisecondCounter @ 0x140A9C974
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x1405630D0 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x1405637A0 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140A9D3C4 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140A9D9C4 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140A9E05C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140A9E0DC (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall PnprGetMillisecondCounter(char a1)
{
  unsigned int v2; // edi
  LONGLONG v3; // rax
  __int128 v4; // rtt
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v4 = 1000LL * *(_QWORD *)&KeQueryPerformanceCounter(&PerformanceFrequency);
  v3 = v4 / PerformanceFrequency.QuadPart;
  if ( !a1 )
    v2 = v3 + dword_140D1852C - dword_140D18528;
  dword_140D18528 = v3;
  result = v2;
  dword_140D1852C = v2;
  return result;
}
