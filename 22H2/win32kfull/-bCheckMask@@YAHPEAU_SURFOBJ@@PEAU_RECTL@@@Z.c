/*
 * XREFs of ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02C78F0
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02C8940 (NtGdiEngBitBlt.c)
 *     NtGdiEngPlgBlt @ 0x1C02CA710 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CAB20 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CB070 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02C7A74 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall bCheckMask(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 )
  {
    if ( a1->iBitmapFormat == 1 )
      return bCheckSurfaceRect(a1, a2, 0LL);
    else
      return 0LL;
  }
  return result;
}
