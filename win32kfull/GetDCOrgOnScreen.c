/*
 * XREFs of GetDCOrgOnScreen @ 0x1C01BEDC4
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C000665C (_ExcludeUpdateRgn.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0230DA0 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C0231B34 (xxxScrollWindowEx.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0038F40 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GetDCOrgOnScreen(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)GreGetDCOrg() )
    return 0LL;
  v5 = 0LL;
  if ( !(unsigned int)UserGetRedirectedWindowOrigin(a1, (__int64)&v5) )
    return 0LL;
  *a2 += v5;
  a2[1] += HIDWORD(v5);
  return 1LL;
}
