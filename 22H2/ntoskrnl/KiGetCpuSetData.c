/*
 * XREFs of KiGetCpuSetData @ 0x14032D0A4
 * Callers:
 *     KeQueryCpuSetInformation @ 0x1407C6FA8 (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
