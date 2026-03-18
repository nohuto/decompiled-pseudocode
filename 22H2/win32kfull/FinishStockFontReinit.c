/*
 * XREFs of FinishStockFontReinit @ 0x1C00885B0
 * Callers:
 *     <none>
 * Callees:
 *     GreSetLFONTOwner @ 0x1C007813C (GreSetLFONTOwner.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C0085D30 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     FinishStockFontInit @ 0x1C00863A0 (FinishStockFontInit.c)
 *     hfontInitDefaultGuiFont @ 0x1C03B3AAC (hfontInitDefaultGuiFont.c)
 */

__int64 __fastcall FinishStockFontReinit(Gre::Base *c)
{
  unsigned int v1; // edi
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r8
  Gre::Base *inited; // rax
  __int64 v6; // rcx
  __int64 result; // rax

  v1 = (unsigned int)c;
  v2 = Gre::Base::Globals(c);
  GreSetLFONTOwner(*(_QWORD *)(*((_QWORD *)v2 + 396) + 136LL), 0x80000002, v3);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 396) + 136LL));
  v4 = *((_QWORD *)v2 + 396);
  *(_QWORD *)(v4 + 136) = 0LL;
  GreSetLFONTOwner(*(_QWORD *)(*((_QWORD *)v2 + 397) + 136LL), 0x80000002, v4);
  GreDeleteObject(*(_QWORD *)(*((_QWORD *)v2 + 397) + 136LL));
  *(_QWORD *)(*((_QWORD *)v2 + 397) + 136LL) = 0LL;
  inited = (Gre::Base *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  FinishStockFontInit(v1);
  result = SGDGetSessionState(v6);
  *(_DWORD *)(*(_QWORD *)(result + 32) + 23412LL) = 0;
  return result;
}
