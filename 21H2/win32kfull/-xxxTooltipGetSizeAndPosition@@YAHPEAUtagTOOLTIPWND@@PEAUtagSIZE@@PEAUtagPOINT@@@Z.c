/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C023E868
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C023E738 (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     CALL_LPK @ 0x1C00B9BC8 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C00B9F08 (xxxClientGetTextExtentPointW.c)
 *     GreGetTextExtentW @ 0x1C00C43FC (GreGetTextExtentW.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C010D224 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C023E168 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  unsigned __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 ThreadWin32Thread; // rax
  const WCHAR *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int16 *v17; // rdx
  __int64 v18; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v22; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v25; // [rsp+30h] [rbp-48h] BYREF
  __int128 v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-28h]

  v6 = *(_QWORD *)(gpsi + 4960LL);
  *a3 = (struct tagPOINT)v6;
  v7 = (struct tagMONITOR *)MonitorFromPoint(v6, 0, 0);
  v8 = (__int64)v7;
  if ( !v7 )
    return 0LL;
  TooltipDC = GetTooltipDC(a1, v7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
  {
    v26 = 0LL;
    v27 = 0LL;
    ThreadLock(v8, (__int64 *)&v26);
    v12 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v13 = -1LL;
    do
      ++v13;
    while ( v12[v13] );
    xxxClientGetTextExtentPointW(TooltipDC, v12, v13, a2);
    if ( !ThreadUnlock1(v15, v14, v16) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v17 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    GreGetTextExtentW(TooltipDC, v17, v18, a2, 1u);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect((__int64)&v25, v8);
  cy = a2->cy;
  y = a3->y;
  v25 = *MonitorRect;
  v22 = _mm_srli_si128(v25, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v22) )
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
  if ( a3->x + a2->cx >= (int)v22 )
  {
    x = v22 - cx;
    a3->x = v22 - cx;
  }
  if ( x < v25.m128i_i32[0] )
    a3->x = v25.m128i_i32[0];
  return 1LL;
}
