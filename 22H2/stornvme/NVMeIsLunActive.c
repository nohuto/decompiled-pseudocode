/*
 * XREFs of NVMeIsLunActive @ 0x1C0015204
 * Callers:
 *     NVMeReenumerateNameSpaceCompare @ 0x1C0006AFC (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C0007138 (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0007388 (NVMeReenumerateNameSpaceRescan.c)
 *     ScsiReportLunsCommand @ 0x1C0016D78 (ScsiReportLunsCommand.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeIsLunActive(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 && *(_QWORD *)(a1 + 56) && *(_DWORD *)(a1 + 52) )
    return (*(_DWORD *)(a1 + 20) & 4) == 0;
  return v1;
}
