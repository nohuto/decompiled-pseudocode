/*
 * XREFs of SetRedirectedWindow @ 0x1C00BD1BC
 * Callers:
 *     xxxSetWindowStyle @ 0x1C005E1E0 (xxxSetWindowStyle.c)
 *     xxxCreateWindowEx @ 0x1C00751E0 (xxxCreateWindowEx.c)
 *     _SetLayeredWindowAttributes @ 0x1C00BD548 (_SetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x1C01E82D0 (xxxPrintWindow.c)
 * Callees:
 *     FillRect @ 0x1C0045734 (FillRect.c)
 *     RedirectDCEs @ 0x1C004C510 (RedirectDCEs.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006BF1C (IsToplevelWindowDesktopComposed.c)
 *     _IsTopLevelWindow @ 0x1C006FC88 (_IsTopLevelWindow.c)
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078DC8 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BD4F8 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     HintSpriteShape @ 0x1C00BD898 (HintSpriteShape.c)
 *     UpdateWindowSpriteDPI @ 0x1C00BD938 (UpdateWindowSpriteDPI.c)
 *     GetRedirectionBitmap @ 0x1C00BEF20 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00BEFA8 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C00BF148 (CreateOrGetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00EF958 (DeleteOrSetRedirectionBitmap.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF7D0 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E7F40 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v4; // r12d
  unsigned int v5; // r13d
  unsigned int v6; // r14d
  __int64 v7; // rsi
  BOOL v8; // esi
  int v9; // esi
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  HBRUSH v14; // rsi
  __int64 v15; // rcx
  __int64 SolidBrush; // rax
  __m128i v17; // xmm0
  __int64 v18; // rax
  HBRUSH v19; // r8
  __int64 v20; // r13
  __int64 RedirectionBitmap; // rax
  __int64 Prop; // rax
  _BYTE v24[8]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25[2]; // [rsp+28h] [rbp-28h] BYREF
  RECT v26; // [rsp+38h] [rbp-18h] BYREF
  HBITMAP v27; // [rsp+A0h] [rbp+50h] BYREF
  HBRUSH v28; // [rsp+A8h] [rbp+58h]

  v27 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v25, 0LL);
  v4 = a2 & 0x10;
  v5 = 0;
  v6 = a2 & 0xFFFFFFEF;
  if ( GetRedirectionBitmap(a1) )
  {
    if ( v6 == 1 )
    {
      RedirectionBitmap = GetRedirectionBitmap(a1);
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, RedirectionBitmap, 0LL);
    }
    goto LABEL_39;
  }
  v7 = *((_QWORD *)a1 + 17);
  if ( v7 != *(_QWORD *)v25[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v25);
    if ( v7 )
    {
      v25[0] = *(_QWORD *)(v7 + 128);
      ++*(_DWORD *)(v25[0] + 8);
    }
    else
    {
      v25[0] = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 8LL) & 0x40) != 0 )
  {
    v8 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      v8 = v6 == 1;
    if ( !(unsigned int)IsTopLevelWindow((__int64)a1)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v25[0] + 8LL) + 8LL) & 0x40) == 0
      && v6 == 1 )
    {
      v8 = 1;
    }
    if ( !v8 )
    {
      v9 = -2143420411;
      goto LABEL_42;
    }
  }
  v9 = CreateOrGetRedirectionBitmap(a1, 0LL, 0LL, &v27);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetRedirectionBitmap(a1, v27, 0) )
    {
      SetOrClrWF(1, (__int64)a1, 0xB20u, 1);
      v11 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
      UpdateWindowSpriteDPI(a1, v11);
    }
    else
    {
      DeleteOrSetRedirectionBitmap(a1, v27, 0LL, v10);
      v9 = -1073741801;
    }
    if ( v9 >= 0 )
    {
      if ( v6 == 2 )
        IncrementCompositedCount(a1);
      if ( v6 == 1 )
      {
        v12 = *((_QWORD *)a1 + 5);
        if ( (*(_QWORD *)(v12 + 88) != *(_QWORD *)(v12 + 104)
           || *(_QWORD *)(v12 + 96) != *(_QWORD *)(v12 + 112)
           || *(_QWORD *)(v12 + 168))
          && !IsRectEmptyInl((const struct tagRECT *)(v12 + 88)) )
        {
          v14 = 0LL;
          v28 = (HBRUSH)ghbrWhite;
          v15 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 1092LL);
          if ( (_DWORD)v15 )
          {
            SolidBrush = GreCreateSolidBrush(v15);
            v13 = *((_QWORD *)a1 + 5);
            v14 = (HBRUSH)SolidBrush;
          }
          v17 = *(__m128i *)(v13 + 88);
          v26.bottom = v17.m128i_i32[3] - v17.m128i_i32[1];
          v26.top = 0;
          v26.right = v17.m128i_i32[2] - _mm_cvtsi128_si32(v17);
          v26.left = 0;
          v18 = GreSelectBitmap(*(_QWORD *)ghdcMem, v27);
          v19 = v14;
          v20 = v18;
          if ( !v14 )
            v19 = v28;
          FillRect(*(HDC *)ghdcMem, &v26, v19);
          if ( v14 )
            GreDeleteObject(v14);
          GreSelectBitmap(*(_QWORD *)ghdcMem, v20);
          v5 = 1;
        }
        HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, v27, v5);
      }
      RedirectDCEs(a1);
LABEL_39:
      if ( !v4 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v24);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v24);
      }
      Prop = GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
      *(_DWORD *)(Prop + 32) |= v6;
      v9 = 0;
    }
  }
LABEL_42:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v25);
  return (unsigned int)v9;
}
