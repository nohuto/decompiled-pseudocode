/*
 * XREFs of ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00C86C0
 * Callers:
 *     FinishStockFontInit @ 0x1C00C81E0 (FinishStockFontInit.c)
 *     FinishStockFontReinit @ 0x1C00C8A00 (FinishStockFontReinit.c)
 *     bInitStockFontsInternal @ 0x1C0390308 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03906EC (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C039242C (bInitSystemFont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockFont(void *a1, int a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r11
  void **v5; // rdx

  v3 = 0;
  if ( a1 )
  {
    v4 = a2;
    if ( a3 )
      v5 = gahStockObjects96;
    else
      v5 = gahStockObjects;
    v5[v4] = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
