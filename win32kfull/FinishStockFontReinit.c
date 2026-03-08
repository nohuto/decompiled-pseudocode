/*
 * XREFs of FinishStockFontReinit @ 0x1C00B9210
 * Callers:
 *     <none>
 * Callees:
 *     FinishStockFontInit @ 0x1C00B9D70 (FinishStockFontInit.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C00BA5D0 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     GreSetLFONTOwner @ 0x1C010E86C (GreSetLFONTOwner.c)
 *     hfontInitDefaultGuiFont @ 0x1C03B6C5C (hfontInitDefaultGuiFont.c)
 */

__int64 __fastcall FinishStockFontReinit(Gre::Base *c)
{
  INT v1; // edi
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  void *inited; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = (int)c;
  v2 = Gre::Base::Globals(c);
  GreSetLFONTOwner(*(_QWORD *)(*((_QWORD *)v2 + 396) + 136LL), 2147483650LL);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 396) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 396) + 136LL) = 0LL;
  GreSetLFONTOwner(*(_QWORD *)(*((_QWORD *)v2 + 397) + 136LL), 2147483650LL);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 397) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 397) + 136LL) = 0LL;
  inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  FinishStockFontInit(v1);
  result = SGDGetSessionState(v4);
  *(_DWORD *)(*(_QWORD *)(result + 32) + 23412LL) = 0;
  return result;
}
