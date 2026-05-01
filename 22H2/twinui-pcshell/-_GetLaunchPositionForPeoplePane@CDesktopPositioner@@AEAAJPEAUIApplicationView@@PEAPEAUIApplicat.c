/*
 * XREFs of ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18045F288
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_00f22e289bab16054dff8568902802b3__&_::Run @ 0x18004D720 (wil--details--functor_wrapper_void__lambda_00f22e289bab16054dff8568902802b3__-_--Run.c)
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x18004A838 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F3F6C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z @ 0x18045E39C (-_CalculateTaskbarFlyoutPosition@CDesktopPositioner@@AEAAJUtagRECT@@UtagSIZE@@PEAU2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_GetLaunchPositionForPeoplePane(
        CDesktopPositioner *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        struct IApplicationViewPosition **a3)
{
  struct IImmersiveApplication **v6; // r8
  int ApplicationFromView; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64, GUID *, __int64 *); // rdi
  int v11; // eax
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, LPVOID *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  int v17; // eax
  struct IApplicationViewPosition *v18; // rax
  void *v20; // [rsp+30h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-31h] BYREF
  __int64 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+48h] [rbp-21h] BYREF
  int v24; // [rsp+50h] [rbp-19h] BYREF
  struct tagSIZE v25; // [rsp+58h] [rbp-11h] BYREF
  RECT rc; // [rsp+60h] [rbp-9h] BYREF
  RECT v27; // [rsp+70h] [rbp+7h] BYREF
  struct tagRECT v28; // [rsp+80h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, (struct IApplicationView *)&v23, v6);
  v8 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    v22 = 0LL;
    v9 = v23;
    v10 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v23 + 24LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v11 = v10(v9, 1LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, &v22);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x694,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_26;
    }
    v12 = 0;
    pv = 0LL;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 32LL))(v22, &v24) < 0 )
      goto LABEL_12;
    v12 = ~v24;
    v13 = *((_QWORD *)this + 38);
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v13 + 96LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v15 = v14(v13, v12, &pv);
    v8 = v15;
    if ( v15 < 0 )
    {
      v16 = 1692LL;
      goto LABEL_18;
    }
    if ( v12 && pv )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, LPVOID, RECT *))(**((_QWORD **)this + 38) + 112LL))(
              *((_QWORD *)this + 38),
              pv,
              &v27);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 1704LL;
        goto LABEL_18;
      }
    }
    else
    {
LABEL_12:
      v15 = (*(__int64 (__fastcall **)(_QWORD, RECT *))(**((_QWORD **)this + 38) + 120LL))(*((_QWORD *)this + 38), &v27);
      v8 = v15;
      if ( v15 < 0 )
      {
        v16 = 1700LL;
        goto LABEL_18;
      }
    }
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagSIZE *))(**((_QWORD **)this + 38) + 104LL))(
            *((_QWORD *)this + 38),
            v12,
            &v25);
    v8 = v15;
    if ( v15 >= 0 )
    {
      rc = v27;
      v15 = CDesktopPositioner::_CalculateTaskbarFlyoutPosition(this, &rc, v25, &v28);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v20 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        v17 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                &v20,
                &v28);
        v8 = v17;
        if ( v17 >= 0 )
        {
          v18 = (struct IApplicationViewPosition *)v20;
          v20 = 0LL;
          *a3 = v18;
          v8 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x6B2,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v17);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
        goto LABEL_23;
      }
      v16 = 1711LL;
    }
    else
    {
      v16 = 1708LL;
    }
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v15);
LABEL_23:
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x691,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  return v8;
}
