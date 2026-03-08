/*
 * XREFs of BgpTxtClearRegion @ 0x140AEF770
 * Callers:
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxDrawRectangle @ 0x1403817FC (BgpGxDrawRectangle.c)
 */

__int64 __fastcall BgpTxtClearRegion(__int64 a1)
{
  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
    return BgpGxDrawRectangle(*(_BYTE **)(a1 + 24), a1);
  else
    return 3221225485LL;
}
