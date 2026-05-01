/*
 * XREFs of ?GetLeftAndRightSnappedViews@TabletModePositionerOperation@@AEAAJPEAUIObjectArray@@PEAPEAUIApplicationView@@1@Z @ 0x18047A46C
 * Callers:
 *     ?CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArray@@W4CreateSanitizedLayoutFlags@@@Z @ 0x180479E60 (-CreateSanitizedLayout@TabletModePositionerOperation@@UEAAJPEAUIApplicationView@@0PEAUIObjectArr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TabletModePositionerOperation::GetLeftAndRightSnappedViews(
        TabletModePositionerOperation *this,
        struct IObjectArray *a2,
        struct IApplicationView **a3,
        struct IApplicationView **a4)
{
  HRESULT v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // r15d
  int v16; // edi
  int v17; // eax
  struct IApplicationView *v19; // [rsp+30h] [rbp-29h] BYREF
  struct IApplicationView *v20; // [rsp+38h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v22[40]; // [rsp+48h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  *a3 = 0LL;
  *a4 = 0LL;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 8) + 24LL))(*((_QWORD *)this + 8), v22);
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v8 = IUnknown_QueryService(
         *((IUnknown **)this + 2),
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &ppvOut);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v20 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    v10 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, struct IApplicationView **))a2->lpVtbl->GetAt)(
            a2,
            0LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v20);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x158,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)(unsigned int)v10);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      goto LABEL_18;
    }
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    v11 = ((__int64 (__fastcall *)(struct IObjectArray *, __int64, GUID *, struct IApplicationView **))a2->lpVtbl->GetAt)(
            a2,
            1LL,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v19);
    v9 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v13 = 347LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
        (const char *)v12);
      goto LABEL_16;
    }
    v14 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, v20);
    v15 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, v20);
    v16 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, v19);
    v17 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *))(*(_QWORD *)ppvOut + 56LL))(ppvOut, v19);
    if ( v14 && v17 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      *a3 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      *a4 = v19;
    }
    else
    {
      if ( !v15 || !v16 )
      {
        v9 = -2147024809;
        v12 = 2147942487LL;
        v13 = 367LL;
        goto LABEL_15;
      }
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
      *a4 = v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      *a3 = v19;
    }
    v9 = 0;
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x155,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)(unsigned int)v8);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return v9;
}
