/*
 * XREFs of ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0021308
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0025E8C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C006A610 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0021340 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0022344 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall SetTopmostEnum(struct tagWND *a1, int a2, int a3)
{
  int v3; // r9d
  int v4; // r10d
  struct tagWND *RootOwner; // rax

  v3 = a3;
  v4 = a2;
  RootOwner = a1;
  if ( !a2 && !a3 )
    RootOwner = GetRootOwner(a1);
  SetTopmost(RootOwner, v4, v3);
}
