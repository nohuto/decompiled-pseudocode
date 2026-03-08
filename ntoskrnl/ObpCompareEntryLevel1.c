/*
 * XREFs of ObpCompareEntryLevel1 @ 0x140743A90
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnumerateBoundaryDescriptorEntries @ 0x140743B80 (RtlEnumerateBoundaryDescriptorEntries.c)
 */

__int64 __fastcall ObpCompareEntryLevel1(__int64 a1, __int64 a2)
{
  int v3; // eax

  ++*(_DWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = a1;
  v3 = RtlEnumerateBoundaryDescriptorEntries(*(_QWORD *)(a2 + 8) + 48LL, ObpCompareEntryLevel2, a2);
  if ( v3 < 0 )
  {
    *(_DWORD *)(a2 + 32) = v3;
  }
  else
  {
    if ( *(_DWORD *)(a2 + 24) == *(_DWORD *)(a2 + 28) )
      return 1LL;
    *(_DWORD *)(a2 + 32) = -1073741445;
  }
  return 0LL;
}
