/*
 * XREFs of KiGetThreadCpuSetMaskPointer @ 0x140237D24
 * Callers:
 *     KeQueryCpuSetsThread @ 0x140572C98 (KeQueryCpuSetsThread.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiGetThreadCpuSetMaskPointer(__int64 a1, _DWORD *a2)
{
  if ( (*(_DWORD *)(a1 + 1376) & 0x20000) != 0 )
  {
    if ( a2 )
      *a2 = (unsigned __int16)KiMaximumGroups;
    return *(_QWORD *)(a1 + 1616);
  }
  else
  {
    if ( a2 )
      *a2 = 1;
    return a1 + 1616;
  }
}
