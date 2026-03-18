/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C0225BF8
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C0225AC8 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C0040D04 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GreGetTextExtentW @ 0x1C007A468 (GreGetTextExtentW.c)
 *     GetMonitorRect @ 0x1C00C46EC (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C00D03B0 (_MonitorFromPoint.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0212AAC (xxxClientGetTextExtentPointW.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0225430 (-GetCursorHeight@@YAHXZ.c)
 *     CALL_LPK @ 0x1C0225FD4 (CALL_LPK.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  Gre::Base *TooltipDC; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagTHREADINFO *v15; // rax
  const WCHAR *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v26; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+40h] [rbp-28h]

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = (Gre::Base *)GetTooltipDC(a1, v7);
  v15 = PtiCurrentShared(v12, v11, v13, v14);
  if ( (unsigned int)CALL_LPK(v15) )
  {
    v29 = 0LL;
    v30 = 0LL;
    ThreadLock(v8, &v29);
    v16 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    xxxClientGetTextExtentPointW(TooltipDC, v16, v17, a2);
    if ( !ThreadUnlock1(v19, v18, v20) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v21 = *((_QWORD *)a1 + 6);
    v22 = -1LL;
    do
      ++v22;
    while ( *(_WORD *)(v21 + 2 * v22) );
    GreGetTextExtentW((__int64)TooltipDC, v21, v22, (__int64)a2);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect((__int64)&v29, v8);
  cy = a2->cy;
  y = a3->y;
  v29 = *MonitorRect;
  v26 = _mm_srli_si128(v29, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v26) )
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
  if ( a3->x + a2->cx >= (int)v26 )
  {
    x = v26 - cx;
    a3->x = v26 - cx;
  }
  if ( x < v29.m128i_i32[0] )
    a3->x = v29.m128i_i32[0];
  return 1LL;
}
