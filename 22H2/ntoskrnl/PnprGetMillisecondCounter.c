/*
 * XREFs of PnprGetMillisecondCounter @ 0x1409AD8DC
 * Callers:
 *     PnprMirrorPhysicalMemory @ 0x14050F500 (PnprMirrorPhysicalMemory.c)
 *     PnprSwapFinalize @ 0x14050FBD0 (PnprSwapFinalize.c)
 *     PnpReplacePartitionUnit @ 0x1408AC2C0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceDevices @ 0x1409AE350 (PnprQuiesceDevices.c)
 *     PnprQuiesceProcessors @ 0x1409AE8B4 (PnprQuiesceProcessors.c)
 *     PnprWakeDevices @ 0x1409AEEDC (PnprWakeDevices.c)
 *     PnprWakeProcessors @ 0x1409AEF5C (PnprWakeProcessors.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
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
    v2 = v3 + dword_140CF5724 - dword_140CF5720;
  dword_140CF5720 = v3;
  result = v2;
  dword_140CF5724 = v2;
  return result;
}
