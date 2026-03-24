/*
 * XREFs of EngFntCacheFault @ 0x1C0289200
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00A7800 (UmfdDispatchEscape.c)
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02DF9B8 (-FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z.c)
 * Callees:
 *     bSetFntCacheReg @ 0x1C00E5CE4 (bSetFntCacheReg.c)
 */

void __stdcall EngFntCacheFault(ULONG ulFastCheckSum, ULONG iFaultMode)
{
  int v2; // edx
  int v3; // edx

  if ( (dword_1C033ABE0 & 3) != 0 && qword_1C033ABE8 && iFaultMode - 1 <= 1 )
  {
    v2 = *(_DWORD *)(qword_1C033ABE8 + 16);
    if ( (v2 & 1) == 0 )
    {
      v3 = v2 | 1;
      *(_DWORD *)(qword_1C033ABE8 + 16) = v3;
      bSetFntCacheReg(1u, v3);
    }
  }
}
