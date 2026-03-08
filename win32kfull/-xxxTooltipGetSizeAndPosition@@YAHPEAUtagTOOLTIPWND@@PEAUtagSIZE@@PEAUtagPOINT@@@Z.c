/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C02288F0
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C02287C0 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _MonitorFromPoint @ 0x1C00A2920 (_MonitorFromPoint.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00F9B80 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     GreGetTextExtentW @ 0x1C010FBEC (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0215674 (xxxClientGetTextExtentPointW.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0228128 (-GetCursorHeight@@YAHXZ.c)
 *     CALL_LPK @ 0x1C0228CCC (CALL_LPK.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  const WCHAR *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int16 *v18; // rdx
  __int64 v19; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v23; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v26; // [rsp+30h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  v12 = PtiCurrentShared(v11);
  if ( (unsigned int)CALL_LPK(v12) )
  {
    v26 = 0LL;
    v27 = 0LL;
    ThreadLock(v8, &v26);
    v13 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    xxxClientGetTextExtentPointW((Gre::Base *)TooltipDC, v13, v14, a2);
    if ( !ThreadUnlock1(v16, v15, v17) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v18 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v19 = -1LL;
    do
      ++v19;
    while ( v18[v19] );
    GreGetTextExtentW(TooltipDC, v18, v19, a2);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(v26.m128i_i64, v8);
  cy = a2->cy;
  y = a3->y;
  v26 = *MonitorRect;
  v23 = _mm_srli_si128(v26, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v23) )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  else
  {
    a3->y = y - cy;
    *((_DWORD *)a1 + 8) &= ~1u;
  }
  cx = a2->cx;
  x = a3->x;
  if ( a3->x + a2->cx >= (int)v23 )
  {
    x = v23 - cx;
    a3->x = v23 - cx;
  }
  if ( x < v26.m128i_i32[0] )
    a3->x = v26.m128i_i32[0];
  return 1LL;
}
