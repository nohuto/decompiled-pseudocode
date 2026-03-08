/*
 * XREFs of ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02CA494
 * Callers:
 *     NtGdiCLIPOBJ_bEnum @ 0x1C02CAA30 (NtGdiCLIPOBJ_bEnum.c)
 *     NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02CE6C0 (NtGdiFONTOBJ_cGetAllGlyphHandles.c)
 *     NtGdiFONTOBJ_vGetInfo @ 0x1C02CEFA0 (NtGdiFONTOBJ_vGetInfo.c)
 *     NtGdiHT_Get8BPPFormatPalette @ 0x1C02CF0F0 (NtGdiHT_Get8BPPFormatPalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C02CF1B0 (NtGdiHT_Get8BPPMaskPalette.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02CFEE0 (NtGdiXFORMOBJ_bApplyXform.c)
 *     NtGdiXLATEOBJ_cGetPalette @ 0x1C02D01A0 (NtGdiXLATEOBJ_cGetPalette.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall bSafeCopyBits(char *a1, void *a2, unsigned int a3)
{
  char *v3; // rax

  if ( a1 && a2 )
  {
    v3 = &a1[a3];
    if ( (unsigned __int64)v3 > MmUserProbeAddress || v3 <= a1 )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
