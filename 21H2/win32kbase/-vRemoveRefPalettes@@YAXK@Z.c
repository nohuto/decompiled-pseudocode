/*
 * XREFs of ?vRemoveRefPalettes@@YAXK@Z @ 0x1C00181D4
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextOwned @ 0x1C001B0D0 (HmgNextOwned.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C001E6BC (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002E800 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?apalResetColorTable@XEPALOBJ@@QEAAXXZ @ 0x1C0078FC8 (-apalResetColorTable@XEPALOBJ@@QEAAXXZ.c)
 */

void __fastcall vRemoveRefPalettes(unsigned int a1)
{
  unsigned int v2; // edi
  HPALETTE v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF
  HSEMAPHORE v5; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v2 = 0;
  while ( 1 )
  {
    v2 = HmgNextOwned(v2, a1, &v3);
    if ( !v2 )
      break;
    if ( (BYTE2(v3) & 0x1F) == 8 )
    {
      v5 = ghsemPalette;
      EngAcquireSemaphore(ghsemPalette);
      EPALOBJ::EPALOBJ((EPALOBJ *)&v4, v3);
      if ( v4 )
      {
        XEPALOBJ::apalResetColorTable((XEPALOBJ *)&v4);
        HmgDecrementShareReferenceCountEx(v4, 0LL);
      }
      SEMOBJ::vUnlock((SEMOBJ *)&v5);
    }
  }
}
