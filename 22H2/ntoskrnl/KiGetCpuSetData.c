/*
 * XREFs of KiGetCpuSetData @ 0x14036E774
 * Callers:
 *     KeQueryCpuSetInformation @ 0x140851E5C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetCpuSetData(int a1, int a2)
{
  return KiCpuSetData + 16LL * (unsigned int)(a2 + (a1 << 6));
}
