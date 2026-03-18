/*
 * XREFs of GetWndSBDisableFlags @ 0x1C0065218
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     xxxDrawScrollBar @ 0x1C00C5DC8 (xxxDrawScrollBar.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C02405EC (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240ACC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C024162C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C0241B74 (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall GetWndSBDisableFlags(__int64 a1, int a2)
{
  int *v2; // rax
  int v3; // ecx
  int v4; // eax

  v2 = *(int **)(a1 + 152);
  if ( v2 )
  {
    v3 = *v2;
    v4 = *v2 >> 2;
    if ( !a2 )
      LOBYTE(v4) = v3;
    return v4 & 3;
  }
  else
  {
    UserSetLastError(1447LL);
    return 0LL;
  }
}
