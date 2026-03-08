/*
 * XREFs of ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00F9314
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00FA000 (xxxTooltipWndProc.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0228074 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyTooltipBitmap(struct tagTOOLTIPWND *a1)
{
  __int64 StockObject; // rax

  if ( *((_QWORD *)a1 + 3) )
  {
    StockObject = GreGetStockObject(21LL);
    GreSelectBitmap(*((_QWORD *)a1 + 2), StockObject);
    GreDeleteObject(*((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
