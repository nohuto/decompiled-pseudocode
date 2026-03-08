/*
 * XREFs of EtwpBuffersFlushRequired @ 0x1402052DC
 * Callers:
 *     EtwpSwitchBuffer @ 0x140205FF4 (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x14080AAA4 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140206540 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[53] || (int)(a1[58] - EtwpQueryUsedProcessorCount() - a1[57]) >= a1[53];
}
