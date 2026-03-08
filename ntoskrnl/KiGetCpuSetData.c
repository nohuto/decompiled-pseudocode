/*
 * XREFs of KiGetCpuSetData @ 0x140302DD4
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14084EA1C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
