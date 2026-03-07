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
