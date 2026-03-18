/*
 * XREFs of NVMeIsLunActive @ 0x1C000655C
 * Callers:
 *     ScsiReportLunsCommand @ 0x1C0006474 (ScsiReportLunsCommand.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C000EABC (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C000F05C (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C000F320 (NVMeReenumerateNameSpaceRescan.c)
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
