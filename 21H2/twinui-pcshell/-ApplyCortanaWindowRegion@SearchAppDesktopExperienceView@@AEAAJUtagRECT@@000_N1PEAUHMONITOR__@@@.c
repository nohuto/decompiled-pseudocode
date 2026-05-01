/*
 * XREFs of ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18001AEE0
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001B218 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18001B450 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x18001B644 (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z @ 0x18001B668 (-RemoveRectFromRegion@SearchAppDesktopExperienceView@@AEAAJPEAUHRGN__@@HHHH@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::ApplyCortanaWindowRegion(
        SearchAppDesktopExperienceView *this,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4,
        struct tagRECT *a5,
        bool a6,
        bool a7)
{
  char v8; // di
  LONG right; // esi
  int v10; // r13d
  LONG top; // r12d
  int v12; // eax
  HRGN v13; // rbx
  HRGN RectRgnIndirect; // rax
  __int64 v15; // rdx
  HRGN v16; // rax
  HRGN RectRgn; // rax
  int v18; // r13d
  int v19; // eax
  unsigned int v20; // edi
  __int64 v21; // r9
  SearchAppDesktopExperienceView *v22; // r12
  SearchAppDesktopExperienceView *v23; // rcx
  int v24; // eax
  int v25; // esi
  SearchAppDesktopExperienceView *v26; // rcx
  int v27; // r8d
  int v28; // eax
  HRGN v29; // rax
  int v30; // eax
  int v32; // [rsp+20h] [rbp-38h]
  int v33; // [rsp+30h] [rbp-28h]
  unsigned int v34; // [rsp+30h] [rbp-28h]
  HRGN v35; // [rsp+38h] [rbp-20h] BYREF
  SearchAppDesktopExperienceView *v36; // [rsp+40h] [rbp-18h]
  struct tagRECT *v37; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]

  v37 = a4;
  v36 = this;
  if ( a3->left > 0 || a3->top > 0 || a3->right > 0 || (v8 = 0, a3->bottom > 0) )
    v8 = 1;
  right = a2->right;
  v10 = right - a2->left;
  top = a2->top;
  v12 = a2->bottom - top;
  v33 = v12;
  v13 = 0LL;
  v35 = 0LL;
  if ( v8 )
  {
    RectRgnIndirect = CreateRectRgnIndirect(a3);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v35,
      RectRgnIndirect);
    v13 = v35;
    if ( !v35 )
    {
      v15 = 1778LL;
LABEL_35:
      v20 = -2147467259;
      v21 = 2147500037LL;
      goto LABEL_36;
    }
    v12 = v33;
  }
  if ( a6 )
  {
    if ( !a7 )
    {
      if ( !v8 )
      {
        RectRgn = CreateRectRgn(0, 0, v10, v12);
        wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
          &v35,
          RectRgn);
        v13 = v35;
        if ( !v35 )
        {
          v15 = 1798LL;
          goto LABEL_35;
        }
      }
      v18 = v37->bottom - top;
      v34 = v37->top - top;
      v19 = SearchAppDesktopExperienceView::RemoveRectFromRegion(
              (SearchAppDesktopExperienceView *)v34,
              v13,
              v37->left - a2->left,
              v34,
              v37->right - a2->left,
              v18);
      v20 = v19;
      if ( v19 >= 0 )
      {
        v22 = v36;
        if ( *((_DWORD *)v36 + 31) <= 1u )
        {
          if ( (unsigned int)Mirror_IsThreadRTL() )
            right = a5->left;
          v25 = right - a2->left;
          if ( (unsigned int)Mirror_IsThreadRTL() )
            v27 = 0;
          else
            v27 = a5->right - a2->left;
          v28 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v26, v13, v27, v34, v25, v18);
          v20 = v28;
          if ( v28 >= 0 )
            goto LABEL_38;
          v21 = (unsigned int)v28;
          v15 = 1816LL;
        }
        else
        {
          if ( *((_DWORD *)v36 + 31) != 10 )
            goto LABEL_38;
          if ( (unsigned int)Mirror_IsThreadRTL() )
            right = v37->right;
          v24 = SearchAppDesktopExperienceView::RemoveRectFromRegion(v23, v13, 0, v34, right - a2->left, v18);
          v20 = v24;
          if ( v24 >= 0 )
            goto LABEL_38;
          v21 = (unsigned int)v24;
          v15 = 1824LL;
        }
      }
      else
      {
        v21 = (unsigned int)v19;
        v15 = 1806LL;
      }
LABEL_36:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)v21,
        v32);
      goto LABEL_41;
    }
    v16 = CreateRectRgn(a5->left - a2->left, a5->top - top, a5->right - a2->left, a5->bottom - top);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v35,
      v16);
    v13 = v35;
    if ( !v35 )
    {
      v15 = 1791LL;
      goto LABEL_35;
    }
  }
  else if ( a7 )
  {
    v29 = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &v35,
      v29);
    v13 = v35;
    if ( !v35 )
    {
      v15 = 1835LL;
      goto LABEL_35;
    }
  }
  v22 = v36;
LABEL_38:
  LOBYTE(a3) = 1;
  v30 = (*(__int64 (__fastcall **)(_QWORD, HRGN, struct tagRECT *))(**((_QWORD **)v22 + 19) + 144LL))(
          *((_QWORD *)v22 + 19),
          v13,
          a3);
  if ( v30 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x72F,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v30,
      v32);
  v20 = 0;
LABEL_41:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>>(&v35);
  return v20;
}
