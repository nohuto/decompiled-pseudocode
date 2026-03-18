/*
 * XREFs of NtGdiGetEmbedFonts @ 0x1C02AD5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C02703D4 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 */

__int64 NtGdiGetEmbedFonts()
{
  unsigned int v0; // ecx
  struct PFT **v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  v2 = gpPFTPrivate;
  if ( gpPFTPrivate && *((_DWORD *)gpPFTPrivate + 7) )
    return (unsigned int)PUBLIC_PFTOBJ::GetEmbedFonts(&v2);
  return v0;
}
