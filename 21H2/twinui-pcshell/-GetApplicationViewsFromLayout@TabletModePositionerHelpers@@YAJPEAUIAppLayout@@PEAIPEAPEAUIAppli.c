/*
 * XREFs of ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z @ 0x18040B870
 * Callers:
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x180474430 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView@@PEAPEAU3@@Z @ 0x180474AC8 (-IsRelatedWin32ViewPresentInLayout@ScreenManagerHelpers@@YAJPEAUIAppLayout@@PEAUIApplicationView.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositionerHelpers::GetApplicationViewsFromLayout(
        TabletModePositionerHelpers *this,
        struct IAppLayout *a2,
        unsigned int *a3,
        struct IApplicationView **a4)
{
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v15; // rax
  struct IApplicationView *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  __int64 v18; // [rsp+70h] [rbp+40h] BYREF
  struct IApplicationView *v19; // [rsp+78h] [rbp+48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+50h] BYREF

  *(_QWORD *)a3 = 0LL;
  *a4 = 0LL;
  *(_DWORD *)a2 = 0;
  v8 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64))(*(_QWORD *)this + 80LL))(this, 1LL);
  if ( v8 )
  {
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v9 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL))(
           this,
           0LL,
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v18);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 38LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"internal\\shell\\private\\inc\\TabletModePositionerHelpers.h",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      return v10;
    }
    v12 = v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v12 + 48LL))(
           v12,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v20);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 39LL;
      goto LABEL_11;
    }
    if ( v8 == 2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v9 = (*(__int64 (__fastcall **)(TabletModePositionerHelpers *, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)this + 104LL))(
             this,
             1LL,
             1LL,
             &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
             &v18);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 43LL;
        goto LABEL_11;
      }
      v13 = v18;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      v9 = (*(__int64 (__fastcall **)(__int64, GUID *, struct IApplicationView **))(*(_QWORD *)v13 + 48LL))(
             v13,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &v19);
      v10 = v9;
      if ( v9 < 0 )
      {
        v11 = 44LL;
        goto LABEL_11;
      }
    }
    v15 = v20;
    v20 = 0LL;
    *(_QWORD *)a3 = v15;
    v16 = v19;
    v19 = 0LL;
    *a4 = v16;
    *(_DWORD *)a2 = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  return 0LL;
}
