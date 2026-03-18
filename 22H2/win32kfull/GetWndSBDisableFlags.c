/*
 * XREFs of GetWndSBDisableFlags @ 0x1C00C7848
 * Callers:
 *     xxxDrawScrollBar @ 0x1C00149D0 (xxxDrawScrollBar.c)
 *     xxxGetScrollBarInfo @ 0x1C00C73CC (xxxGetScrollBarInfo.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C0228F94 (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0229484 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxDoScrollMenu @ 0x1C0229F4C (xxxDoScrollMenu.c)
 *     xxxSBTrackInit @ 0x1C022A46C (xxxSBTrackInit.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
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
