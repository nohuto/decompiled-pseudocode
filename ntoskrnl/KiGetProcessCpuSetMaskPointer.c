/*
 * XREFs of KiGetProcessCpuSetMaskPointer @ 0x140399108
 * Callers:
 *     KeSetCpuSetsProcess @ 0x140398C34 (KeSetCpuSetsProcess.c)
 *     KeQueryCpuSetsProcess @ 0x140572B54 (KeQueryCpuSetsProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetProcessCpuSetMaskPointer(__int64 a1, int a2, _DWORD *a3)
{
  if ( (*(_DWORD *)(a1 + 2172) & 0x80u) != 0 )
  {
    *a3 = (unsigned __int16)KiMaximumGroups;
    if ( a2 )
      return *(_QWORD *)(a1 + 2376);
    else
      return *(_QWORD *)(a1 + 2384);
  }
  else
  {
    *a3 = 1;
    return a1 + (-(__int64)(a2 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 2384;
  }
}
