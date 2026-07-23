/*
 * XREFs of RtlpDetermineHotPatchExtent @ 0x14091B47C
 * Callers:
 *     RtlDetermineHotPatchExtent @ 0x14091AF4C (RtlDetermineHotPatchExtent.c)
 *     RtlApplyHotPatch @ 0x1409B3674 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpDetermineHotPatchExtent(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ecx

  v3 = a1 & 0xFC000;
  if ( v3 == 114688 )
  {
    *a2 = -6;
    goto LABEL_10;
  }
  if ( v3 == 180224 )
  {
LABEL_8:
    *a2 = 0;
LABEL_10:
    *a3 = 8;
    return 1;
  }
  if ( v3 != 245760 )
  {
    if ( v3 != 376832 && v3 != 491520 )
      return 0;
    goto LABEL_8;
  }
  *a2 = 0;
  *a3 = 4;
  return 1;
}
