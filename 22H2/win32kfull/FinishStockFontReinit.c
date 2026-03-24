/*
 * XREFs of FinishStockFontReinit @ 0x1C00E4E10
 * Callers:
 *     <none>
 * Callees:
 *     GreSetLFONTOwner @ 0x1C00E28F0 (GreSetLFONTOwner.c)
 *     FinishStockFontInit @ 0x1C00E44C0 (FinishStockFontInit.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00E49A0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1C03929F0 (hfontInitDefaultGuiFont.c)
 */

void __fastcall FinishStockFontReinit(unsigned int c, __int64 a2, __int64 a3)
{
  void *inited; // rax

  GreSetLFONTOwner((__int64)gahStockObjects[17], 0x80000002, a3);
  GreDeleteObject(gahStockObjects[17]);
  gahStockObjects[17] = 0LL;
  GreSetLFONTOwner((__int64)gahStockObjects96[17], 0x80000002, (__int64)gahStockObjects);
  GreDeleteObject(gahStockObjects96[17]);
  gahStockObjects96[17] = 0LL;
  inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  FinishStockFontInit(c);
  gbFinishDefGUIFontInit = 0;
}
