/*
 * XREFs of ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C02427AC
 * Callers:
 *     ?xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z @ 0x1C024267C (-xxxShowTooltip@@YAHPEAUtagTOOLTIPWND@@@Z.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     _MonitorFromPoint @ 0x1C0042060 (_MonitorFromPoint.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z @ 0x1C00DB224 (-GetTooltipDC@@YAPEAUHDC__@@PEAUtagTOOLTIPWND@@PEAUtagMONITOR@@@Z.c)
 *     GreGetTextExtentW @ 0x1C00E337C (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0158EEC (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0159250 (xxxClientGetTextExtentPointW.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     ?GetCursorHeight@@YAHXZ @ 0x1C0242064 (-GetCursorHeight@@YAHXZ.c)
 */

__int64 __fastcall xxxTooltipGetSizeAndPosition(struct tagTOOLTIPWND *a1, struct tagSIZE *a2, struct tagPOINT *a3)
{
  __int64 v6; // rcx
  struct tagMONITOR *v7; // rax
  __int64 v8; // r14
  HDC TooltipDC; // rbp
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rax
  const WCHAR *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int16 *v16; // rdx
  __int64 v17; // r8
  __m128i *MonitorRect; // rax
  LONG cy; // r8d
  LONG y; // edx
  unsigned __int64 v21; // xmm0_8
  LONG cx; // edx
  LONG x; // ecx
  __m128i v24; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-38h] BYREF

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
    v25[2] = 0LL;
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v25[0] = *(_QWORD *)(v12 + 416);
    *(_QWORD *)(v12 + 416) = v25;
    v25[1] = v8;
    HMLockObject(v8);
    v13 = (const WCHAR *)*((_QWORD *)a1 + 6);
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    xxxClientGetTextExtentPointW(TooltipDC, v13, v14, a2);
    if ( !ThreadUnlock1(v15) )
    {
      _ReleaseDC(TooltipDC);
      return 0LL;
    }
  }
  else
  {
    v16 = (unsigned __int16 *)*((_QWORD *)a1 + 6);
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    GreGetTextExtentW(TooltipDC, v16, v17, a2, 1);
  }
  _ReleaseDC(TooltipDC);
  a2->cx += 6;
  a2->cy += 4;
  MonitorRect = (__m128i *)GetMonitorRect(&v24, v8);
  cy = a2->cy;
  y = a3->y;
  v24 = *MonitorRect;
  v21 = _mm_srli_si128(v24, 8).m128i_u64[0];
  if ( y + cy < SHIDWORD(v21) )
  {
    a3->y += GetCursorHeight();
    *((_DWORD *)a1 + 8) |= 1u;
  }
  else
  {
    *((_DWORD *)a1 + 8) &= ~1u;
    a3->y = y - cy;
  }
  cx = a2->cx;
  x = a3->x;
  if ( a3->x + a2->cx >= (int)v21 )
  {
    x = v21 - cx;
    a3->x = v21 - cx;
  }
  if ( x < v24.m128i_i32[0] )
    a3->x = v24.m128i_i32[0];
  return 1LL;
}
