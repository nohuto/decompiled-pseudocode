/*
 * XREFs of PnprGetMillisecondCounter @ 0x140A99834
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x140560C30 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x140561300 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x140A9A284 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x140A9A884 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x140A9AF1C (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x140A9AF9C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140D18204 - dword_140D18200;
  dword_140D18200 = v3;
  result = v2;
  dword_140D18204 = v2;
  return result;
}
