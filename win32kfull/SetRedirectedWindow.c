/*
 * XREFs of SetRedirectedWindow @ 0x1C002BE1C
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C002BBFC (_SetLayeredWindowAttributes.c)
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 * Callees:
 *     IncrementCompositedCount @ 0x1C00059EC (IncrementCompositedCount.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0021D34 (DeleteOrSetRedirectionBitmap.c)
 *     RedirectDCEs @ 0x1C002B7EC (RedirectDCEs.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002B8C8 (CreateOrGetRedirectionBitmap.c)
 *     HintSpriteShape @ 0x1C002C1B0 (HintSpriteShape.c)
 *     UpdateWindowSpriteMonitor @ 0x1C002C598 (UpdateWindowSpriteMonitor.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C002D900 (IsToplevelWindowDesktopComposed.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002D938 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0031BF4 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     GetRedirectionBitmap @ 0x1C0043F00 (GetRedirectionBitmap.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  __int64 ThreadWin32Thread; // rax
  int v5; // r12d
  unsigned int v6; // r13d
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 Prop; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  HBRUSH v17; // r12
  __m128i v18; // xmm0
  __int64 v19; // r13
  __int64 RedirectionBitmap; // rax
  __int64 SolidBrush; // rax
  BOOL v22; // esi
  HBITMAP v23; // [rsp+20h] [rbp-30h] BYREF
  __int64 v24; // [rsp+28h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-20h] BYREF
  RECT v26; // [rsp+38h] [rbp-18h] BYREF
  char v27; // [rsp+98h] [rbp+48h] BYREF
  int v28; // [rsp+A0h] [rbp+50h]

  v23 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v24 = gSmartObjNullRef;
  v5 = a2 & 0x10;
  v6 = 0;
  v7 = a2 & 0xFFFFFFEF;
  v25 = *(_QWORD *)(ThreadWin32Thread + 1512);
  *(_QWORD *)(ThreadWin32Thread + 1512) = &v25;
  v28 = v5;
  if ( GetRedirectionBitmap(a1) )
  {
    if ( v7 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, RedirectionBitmap, 0LL);
    }
LABEL_18:
    if ( !v5 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v27);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v27);
    }
    Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
    *(_DWORD *)(Prop + 32) |= v7;
    v9 = 0;
    goto LABEL_21;
  }
  v8 = *((_QWORD *)a1 + 17);
  if ( v8 != *(_QWORD *)v24 )
  {
    if ( v24 != gSmartObjNullRef && !--*(_DWORD *)(v24 + 8) )
    {
      if ( *(_BYTE *)(v24 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v24);
    }
    if ( v8 )
    {
      v24 = *(_QWORD *)(v8 + 128);
      ++*(_DWORD *)(v24 + 8);
    }
    else
    {
      v24 = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) + 8LL) & 0x40) != 0 )
  {
    v22 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      v22 = v7 == 1;
    if ( ((unsigned int)IsTopLevelWindow(a1)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) + 8LL) & 0x40) != 0
       || v7 != 1)
      && !v22 )
    {
      v9 = -2143420411;
      goto LABEL_21;
    }
  }
  v9 = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0, (__int64 *)&v23);
  if ( v9 >= 0 )
  {
    if ( !(unsigned int)SetRedirectionBitmap(a1, v23, 0) )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, (__int64)v23, 0);
      v9 = -1073741801;
      goto LABEL_21;
    }
    SetOrClrWF(1LL, a1, 2848LL, 1LL);
    v10 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor(a1, v10);
    if ( v7 == 2 )
    {
      IncrementCompositedCount((__int64)a1);
    }
    else if ( v7 == 1 )
    {
      v11 = *((_QWORD *)a1 + 5);
      v12 = *(_QWORD *)(v11 + 88) - *(_QWORD *)(v11 + 104);
      if ( !v12 )
        v12 = *(_QWORD *)(v11 + 96) - *(_QWORD *)(v11 + 112);
      if ( (v12 || *(_QWORD *)(v11 + 168)) && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v11 + 88)) )
      {
        v16 = 0LL;
        v17 = *(HBRUSH *)(gpsi + 4736LL);
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 1076LL) )
        {
          SolidBrush = GreCreateSolidBrush();
          v15 = *((_QWORD *)a1 + 5);
          v16 = SolidBrush;
          if ( SolidBrush )
            v17 = (HBRUSH)SolidBrush;
        }
        v18 = *(__m128i *)(v15 + 88);
        v26.bottom = v18.m128i_i32[3] - v18.m128i_i32[1];
        v26.top = 0;
        v26.right = v18.m128i_i32[2] - _mm_cvtsi128_si32(v18);
        v26.left = 0;
        v19 = GreSelectBitmap(ghdcMem, v23);
        FillRect(ghdcMem, &v26, v17);
        if ( v16 )
          GreDeleteObject(v16);
        GreSelectBitmap(ghdcMem, v19);
        v5 = v28;
        v6 = 1;
      }
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, v23, v6);
    }
    RedirectDCEs((__int64)a1);
    goto LABEL_18;
  }
LABEL_21:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v24);
  return (unsigned int)v9;
}
