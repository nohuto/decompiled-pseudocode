/*
 * XREFs of ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x180217580
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180216310 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 */

__int64 __fastcall FullScreenPositioner::TabletModeChanged(__int64 a1, int a2)
{
  bool v3; // zf
  struct IApplicationView *v4; // rdx
  struct IApplicationView **v5; // rsi
  struct IApplicationView **i; // rdi

  if ( *(_DWORD *)(a1 + 204) )
  {
    v3 = a2 == 1;
    v4 = *(struct IApplicationView **)(a1 + 80);
    *(_BYTE *)(a1 + 264) = v3;
    if ( v4 )
      FullScreenPositioner::PositionView(a1 - 160, v4, 0LL, 1u);
    v5 = *(struct IApplicationView ***)(a1 + 96);
    for ( i = *(struct IApplicationView ***)(a1 + 88); i != v5; ++i )
    {
      if ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(a1 + 80), (struct IUnknown *)*i) )
        FullScreenPositioner::PositionView(a1 - 160, *i, 2LL, 1u);
    }
  }
  return 0LL;
}
