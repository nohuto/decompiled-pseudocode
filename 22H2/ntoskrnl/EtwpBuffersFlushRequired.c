/*
 * XREFs of EtwpBuffersFlushRequired @ 0x140321044
 * Callers:
 *     EtwpSwitchBuffer @ 0x14032EE9C (EtwpSwitchBuffer.c)
 *     EtwInitialize @ 0x140793C24 (EtwInitialize.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14032EE60 (EtwpQueryUsedProcessorCount.c)
 */

bool __fastcall EtwpBuffersFlushRequired(_DWORD *a1)
{
  return !a1[57] || (int)(a1[62] - EtwpQueryUsedProcessorCount() - a1[61]) >= a1[57];
}
