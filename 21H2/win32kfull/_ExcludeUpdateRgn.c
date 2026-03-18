/*
 * XREFs of _ExcludeUpdateRgn @ 0x1C00C4B2C
 * Callers:
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00C2950 (-UT_InvertCaret@@YAXXZ.c)
 *     NtUserExcludeUpdateRgn @ 0x1C014D520 (NtUserExcludeUpdateRgn.c)
 * Callees:
 *     GreGetRandomRgn @ 0x1C014B3A0 (GreGetRandomRgn.c)
 *     GetDCOrgOnScreen @ 0x1C014C0D4 (GetDCOrgOnScreen.c)
 *     GreExtSelectClipRgnInternal @ 0x1C014CBF4 (GreExtSelectClipRgnInternal.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z @ 0x1C022E878 (-CalcVirtualScreenClipRegion@@YAXPEAUHRGN__@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall ExcludeUpdateRgn(HDC a1, struct tagWND *a2)
{
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  __int128 v7; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      return GreIntersectClipRect(a1, 0LL, 0LL, 0LL, 0);
    }
    else if ( (unsigned int)GetDCOrgOnScreen(a1, &v6) )
    {
      if ( (unsigned int)GreGetRandomRgn(a1) == 1 )
        GreOffsetRgn(ghrgnInv1, (unsigned int)v6, HIDWORD(v6));
      else
        CalcVirtualScreenClipRegion(ghrgnInv1, a2);
      GreCombineRgn(ghrgnInv1, ghrgnInv1, *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL), 4LL);
      GreOffsetRgn(ghrgnInv1, (unsigned int)-(int)v6, (unsigned int)-HIDWORD(v6));
      return GreExtSelectClipRgnInternal(a1);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v7 = 0LL;
    return GreGetClipBox(a1, &v7, 0LL);
  }
}
