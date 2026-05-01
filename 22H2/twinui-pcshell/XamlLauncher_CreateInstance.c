/*
 * XREFs of XamlLauncher_CreateInstance @ 0x18039F848
 * Callers:
 *     ?CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18039B540 (-CreateInstance@XamlLauncherFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180072834 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNot.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180090958 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncher@@$$QEAPEAVXamlLauncherState@@@Z @ 0x18039A1E8 (--$MakeAndInitialize@VXamlLauncher@@V1@PEAVXamlLauncherState@@@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ??0XamlLauncherState@@QEAA@XZ @ 0x18039AC14 (--0XamlLauncherState@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ @ 0x18039C244 (-InternalRelease@-$ComPtr@VXamlLauncher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIDropFeedback@@UITemporaryAppVisual@@UIImmersiveApplicationNotification@@UITempAppVisualHost@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18039D760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_18039D760.c)
 */

__int64 __fastcall XamlLauncher_CreateInstance(_QWORD *a1)
{
  __int64 v2; // rbx
  XamlLauncherState *v3; // rax
  XamlLauncherState *v4; // rdi
  XamlLauncherState *v5; // rax
  int v6; // eax
  int CanCastTo; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  _DWORD *v15; // r9
  XamlLauncher *v16; // rcx
  volatile int *v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  XamlLauncher *v20; // [rsp+30h] [rbp+8h] BYREF
  XamlLauncherState *v21; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0LL;
  v3 = (XamlLauncherState *)operator new(0x430uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x430uLL);
    v5 = XamlLauncherState::XamlLauncherState(v4);
    v2 = (__int64)v5;
    if ( v5 )
    {
      v20 = 0LL;
      v21 = v5;
      Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease((volatile int **)&v20);
      v6 = Microsoft::WRL::Details::MakeAndInitialize<XamlLauncher,XamlLauncher,XamlLauncherState *>(&v20, &v21);
      CanCastTo = v6;
      if ( v6 >= 0 )
      {
        *a1 = 0LL;
        if ( InlineIsEqualGUID(&GUID_d8d60399_a0f1_f987_5551_321fd1b49864, &GUID_00000000_0000_0000_c000_000000000046) )
        {
          v16 = v20;
          *a1 = v20;
          (*(void (__fastcall **)(XamlLauncher *))(*(_QWORD *)v16 + 8LL))(v16);
          CanCastTo = 0;
          goto LABEL_19;
        }
        if ( InlineIsEqualGUID(v10, v11) )
        {
          *a1 = v13;
          CanCastTo = 0;
        }
        else
        {
          if ( InlineIsEqualGUID(v12, &GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d) )
          {
            *a1 = v14;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer>::CanCastTo(
                          v14 + 8,
                          v15,
                          a1);
          }
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
        if ( CanCastTo >= 0 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
LABEL_19:
          Microsoft::WRL::ComPtr<XamlLauncher>::InternalRelease((volatile int **)&v20);
          goto LABEL_21;
        }
        v8 = (unsigned int)CanCastTo;
        v9 = 90LL;
      }
      else
      {
        v8 = (unsigned int)v6;
        v9 = 89LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)v8);
      goto LABEL_19;
    }
  }
  CanCastTo = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x57,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
    (const char *)0x8007000ELL);
LABEL_21:
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IDropFeedback,ITemporaryAppVisual,IImmersiveApplicationNotification,ITempAppVisualHost>::Release(
      v2,
      v17);
  return (unsigned int)CanCastTo;
}
