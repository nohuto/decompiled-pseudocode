/*
 * XREFs of ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1802796D0
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18027F528 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?IsReducedSearchBoxWidthEnabled@@YAEXZ @ 0x1800102C0 (-IsReducedSearchBoxWidthEnabled@@YAEXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x18001A3E0 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18001B450 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180242D18 (-IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR__@@@Z @ 0x180279BB8 (-ApplyCortiniWindowRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@UtagRECT@@PEAUHMONITOR_.c)
 *     ?RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x1802801E8 (-RemoveRectFromRegion@CortanaDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ApplyCortanaWindowRegion(
        CortanaDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7,
        HMONITOR a8)
{
  char v10; // r14
  LONG right; // r13d
  LONG left; // r15d
  CortanaFlightingHelpers *top; // rcx
  HRGN v14; // rbx
  HRGN RectRgnIndirect; // rax
  __int64 v16; // rdx
  HRGN RectRgn; // rax
  int v18; // eax
  unsigned int v19; // edi
  __int64 v20; // r9
  HRGN v21; // rax
  HRGN v22; // rax
  int v23; // r14d
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  CortanaFlightingHelpers *v27; // rcx
  LANGID ThreadUILanguage; // ax
  int v29; // r13d
  LANGID v30; // ax
  CortanaDesktopExperienceView *v31; // rcx
  int v32; // r8d
  int v33; // eax
  int v34; // eax
  HRGN v36; // rax
  HGDIOBJ ho; // [rsp+30h] [rbp-48h] BYREF
  int v38; // [rsp+38h] [rbp-40h]
  int y2; // [rsp+3Ch] [rbp-3Ch]
  int x2; // [rsp+40h] [rbp-38h]
  HMONITOR v41; // [rsp+48h] [rbp-30h]
  struct tagRECT *v42; // [rsp+50h] [rbp-28h]
  struct tagRECT v43; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v42 = a4;
  v41 = a8;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v10 = 0, a3->bottom > 0) )
    v10 = 1;
  right = a2->right;
  left = a2->left;
  x2 = right - a2->left;
  top = (CortanaFlightingHelpers *)(unsigned int)a2->top;
  v38 = (int)top;
  y2 = a2->bottom - (_DWORD)top;
  v14 = 0LL;
  ho = 0LL;
  if ( v10 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgnIndirect);
    v14 = (HRGN)ho;
    if ( !ho )
    {
      v16 = 2199LL;
LABEL_49:
      v19 = -2147467259;
      v20 = 2147500037LL;
      goto LABEL_50;
    }
  }
  if ( !*((_BYTE *)this + 259) && !CortanaFlightingHelpers::IsWideQFDeltaEnabled(top) && *((_DWORD *)this + 36) == 4 )
  {
    RectRgn = CreateRectRgn(0, 0, x2, y2);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      RectRgn);
    v14 = (HRGN)ho;
    if ( !ho )
    {
      v16 = 2208LL;
      goto LABEL_49;
    }
    v43 = *a2;
    v18 = CortanaDesktopExperienceView::ApplyCortiniWindowRegion(this, (HRGN)ho, &v43, v41);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = (unsigned int)v18;
      v16 = 2212LL;
LABEL_50:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v20);
      goto LABEL_43;
    }
  }
  if ( a6 )
  {
    if ( a7 )
    {
      v21 = CreateRectRgn(a5->left - left, a5->top - v38, a5->right - left, a5->bottom - v38);
      wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
        &ho,
        v21);
      v14 = (HRGN)ho;
      if ( !ho )
      {
        v16 = 2225LL;
        goto LABEL_49;
      }
    }
    else
    {
      if ( !v10 && *((_DWORD *)this + 36) != 4 )
      {
        v22 = CreateRectRgn(0, 0, x2, y2);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          &ho,
          v22);
        v14 = (HRGN)ho;
        if ( !ho )
        {
          v16 = 2232LL;
          goto LABEL_49;
        }
      }
      v23 = v42->bottom - v38;
      v24 = v42->right - left;
      v38 = v42->top - v38;
      v25 = CortanaDesktopExperienceView::RemoveRectFromRegion(top, v14, v42->left - left, v38, v24, v23);
      v19 = v25;
      if ( v25 < 0 )
      {
        v20 = (unsigned int)v25;
        v16 = 2240LL;
        goto LABEL_50;
      }
      if ( (*((_DWORD *)this + 35) == 1
         || (*((_BYTE *)this + 259) || CortanaFlightingHelpers::IsWideQFDeltaEnabled(v27)) && !*((_DWORD *)this + 35))
        && *((_DWORD *)this + 36) != 6 )
      {
        ThreadUILanguage = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
          right = a5->left;
        v29 = right - left;
        v30 = GetThreadUILanguage();
        if ( (unsigned int)IsBiDiLocale(v30) )
          v32 = 0;
        else
          v32 = a5->right - left;
        v33 = CortanaDesktopExperienceView::RemoveRectFromRegion(v31, v14, v32, v38, v29, v23);
        v19 = v33;
        if ( v33 < 0 )
        {
          v20 = (unsigned int)v33;
          v16 = 2251LL;
          goto LABEL_50;
        }
      }
      else if ( !*((_BYTE *)this + 259) )
      {
        IsReducedSearchBoxWidthEnabled((__int64)v27, v26);
      }
    }
  }
  else if ( a7 )
  {
    v36 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &ho,
      v36);
    v14 = (HRGN)ho;
    if ( !ho )
    {
      v16 = 2281LL;
      goto LABEL_49;
    }
  }
  LOBYTE(a3) = 1;
  v34 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)this + 21) + 144LL))(
          *((_QWORD *)this + 21),
          v14,
          a3);
  if ( v34 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8ED,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v34);
  v19 = 0;
LABEL_43:
  if ( v14 )
    DeleteObject(v14);
  return v19;
}
