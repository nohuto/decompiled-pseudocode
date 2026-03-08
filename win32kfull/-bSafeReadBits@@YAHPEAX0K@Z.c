/*
 * XREFs of ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02CA4E8
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1C02CBC30 (NtGdiEngCreatePalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C02CF1B0 (NtGdiHT_Get8BPPMaskPalette.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C02CFEE0 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     memmove @ 0x1C0130B80 (memmove.c)
 */

__int64 __fastcall bSafeReadBits(void *a1, char *a2, unsigned int a3)
{
  char *v4; // rcx

  if ( a1 && a2 )
  {
    v4 = &a2[a3];
    if ( v4 < a2 || (unsigned __int64)v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
