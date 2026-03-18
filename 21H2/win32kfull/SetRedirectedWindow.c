/*
 * XREFs of SetRedirectedWindow @ 0x1C001F9FC
 * Callers:
 *     _SetLayeredWindowAttributes @ 0x1C0020688 (_SetLayeredWindowAttributes.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     xxxPrintWindow @ 0x1C01E297C (xxxPrintWindow.c)
 * Callees:
 *     CreateOrGetRedirectionBitmap @ 0x1C001F528 (CreateOrGetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C001F87C (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     RedirectDCEs @ 0x1C00204E0 (RedirectDCEs.c)
 *     HintSpriteShape @ 0x1C00210C4 (HintSpriteShape.c)
 *     UpdateWindowSpriteMonitor @ 0x1C0022AF0 (UpdateWindowSpriteMonitor.c)
 *     GetRedirectionBitmap @ 0x1C0049330 (GetRedirectionBitmap.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _IsTopLevelWindow @ 0x1C006D904 (_IsTopLevelWindow.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C006FF18 (IsToplevelWindowDesktopComposed.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00B4214 (DeleteOrSetRedirectionBitmap.c)
 *     FillRect @ 0x1C00C1CEC (FillRect.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 *     IncrementCompositedCount @ 0x1C01E25D4 (IncrementCompositedCount.c)
 */

__int64 __fastcall SetRedirectedWindow(struct tagWND *a1, int a2)
{
  int v4; // r13d
  unsigned int v5; // esi
  __int64 v6; // r14
  int RedirectionBitmap; // r14d
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  HBRUSH v13; // r15
  __m128i v14; // xmm0
  __int64 Prop; // rax
  BOOL v17; // r14d
  __int64 SolidBrush; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-20h] BYREF
  RECT v20; // [rsp+30h] [rbp-10h] BYREF
  char v21; // [rsp+88h] [rbp+48h] BYREF
  HBITMAP v22; // [rsp+90h] [rbp+50h] BYREF
  __int64 v23; // [rsp+98h] [rbp+58h]

  v22 = 0LL;
  SmartObjStackRefBase<tagCLS>::Init(v19, 0LL);
  v4 = a2 & 0x10;
  v5 = a2 & 0xFFFFFFEF;
  if ( GetRedirectionBitmap(a1) )
  {
    if ( v5 == 1 )
    {
      GetRedirectionBitmap(a1);
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1);
    }
LABEL_23:
    if ( !v4 )
    {
      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v21);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v21);
    }
    Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
    *(_DWORD *)(Prop + 32) |= v5;
    RedirectionBitmap = 0;
    goto LABEL_26;
  }
  v6 = *((_QWORD *)a1 + 17);
  if ( v6 != *(_QWORD *)v19[0] )
  {
    if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
    {
      if ( *(_BYTE *)(v19[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
    }
    if ( v6 )
    {
      v19[0] = *(_QWORD *)(v6 + 128);
      ++*(_DWORD *)(v19[0] + 8LL);
    }
    else
    {
      v19[0] = gSmartObjNullRef;
    }
  }
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + 8LL) < 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + 8LL) & 0x40) != 0 )
  {
    v17 = 0;
    if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
      v17 = v5 == 1;
    if ( ((unsigned int)IsTopLevelWindow(a1)
       || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) + 8LL) & 0x40) != 0
       || v5 != 1)
      && !v17 )
    {
      RedirectionBitmap = -2143420411;
      goto LABEL_26;
    }
  }
  RedirectionBitmap = CreateOrGetRedirectionBitmap((__int64)a1, 0, 0, (HSURF *)&v22);
  if ( RedirectionBitmap >= 0 )
  {
    if ( !(unsigned int)SetRedirectionBitmap(a1, v22, 0) )
    {
      DeleteOrSetRedirectionBitmap(a1, v22, 0LL);
      RedirectionBitmap = -1073741801;
      goto LABEL_26;
    }
    SetOrClrWF(1LL, a1, 2848LL, 1LL);
    v8 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL));
    UpdateWindowSpriteMonitor(a1, v8);
    if ( v5 == 2 )
    {
      IncrementCompositedCount(a1);
    }
    else if ( v5 == 1 )
    {
      v9 = *((_QWORD *)a1 + 5);
      v10 = *(_QWORD *)(v9 + 88) - *(_QWORD *)(v9 + 104);
      if ( !v10 )
        v10 = *(_QWORD *)(v9 + 96) - *(_QWORD *)(v9 + 112);
      if ( (v10 || *(_QWORD *)(v9 + 168)) && !(unsigned int)IsRectEmptyInl((const struct tagRECT *)(v9 + 88)) )
      {
        v12 = 0LL;
        v13 = (HBRUSH)ghbrWhite;
        if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 1092LL) )
        {
          SolidBrush = GreCreateSolidBrush();
          v11 = *((_QWORD *)a1 + 5);
          v12 = SolidBrush;
          if ( SolidBrush )
            v13 = (HBRUSH)SolidBrush;
        }
        v14 = *(__m128i *)(v11 + 88);
        v20.bottom = v14.m128i_i32[3] - v14.m128i_i32[1];
        v20.top = 0;
        v20.right = v14.m128i_i32[2] - _mm_cvtsi128_si32(v14);
        v20.left = 0;
        v23 = GreSelectBitmap(ghdcMem, v22);
        FillRect(ghdcMem, &v20, v13);
        if ( v12 )
          GreDeleteObject(v12);
        GreSelectBitmap(ghdcMem, v23);
      }
      HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1);
    }
    RedirectDCEs(a1);
    goto LABEL_23;
  }
LABEL_26:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v19);
  return (unsigned int)RedirectionBitmap;
}
