/*
 * XREFs of ?UnsubscribeFromServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802175B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18002A968 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___ @ 0x1802138BC (Windows--Internal--ComTaskPool--QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___.c)
 *     ?EraseAllViews@FullScreenPositioner@@AEAAJXZ @ 0x180214FA0 (-EraseAllViews@FullScreenPositioner@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_FullScreenAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18021676C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_FullScreenAnimation@@@details@wil@@QEAAX_.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1802169F0 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::UnsubscribeFromServices(
        FullScreenPositioner *this,
        struct IServiceProvider *a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct IApplicationView *v9; // rdx
  int v10; // eax
  struct IApplicationView **v11; // rsi
  FullScreenPositionerHelpers *v12; // rcx
  struct IApplicationView *v13; // rbx
  __int64 v14; // rcx
  struct IServiceProvider *v15; // [rsp+30h] [rbp-10h] BYREF
  struct IApplicationView *v16; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IApplicationView *v18; // [rsp+60h] [rbp+20h] BYREF
  struct IServiceProvider *v19; // [rsp+70h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 80) )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))a2->lpVtbl->QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 255LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      return v6;
    }
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v18 + 32LL))(
           v18,
           *((unsigned int *)this + 80));
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 256LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 80) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  if ( *((_DWORD *)this + 81) )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, struct IApplicationView **))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v18);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 263LL;
      goto LABEL_6;
    }
    v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v18 + 32LL))(
           v18,
           *((unsigned int *)this + 81));
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 264LL;
      goto LABEL_6;
    }
    *((_DWORD *)this + 81) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  v9 = (struct IApplicationView *)*((unsigned int *)this + 82);
  if ( (_DWORD)v9 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 23) + 104LL))(*((_QWORD *)this + 23));
    *((_DWORD *)this + 82) = 0;
  }
  if ( *((_DWORD *)this + 83) )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    v10 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, struct IApplicationView **))a2->lpVtbl->QueryService)(
            a2,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
            &v18);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x115,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v10);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      return v6;
    }
    (*(void (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)v18 + 80LL))(
      v18,
      *((unsigned int *)this + 83));
    *((_DWORD *)this + 83) = 0;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  }
  v11 = (struct IApplicationView **)((char *)this + 208);
  v12 = (FullScreenPositionerHelpers *)*((_QWORD *)this + 26);
  if ( v12 )
  {
    if ( !FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(v12, v9) )
    {
      FullScreenPositioner::SetPositionerMonitor(*v11, 0LL);
      v19 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      v18 = *v11;
      v13 = v18;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
      v15 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v16 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
      Windows::Internal::ComTaskPool::QueueTask__lambda_b0726e8044fd13968fa83f7fa075fb7d___(v14, &v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_FullScreenAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_FullScreenAnimation>::GetImpl'::`2'::impl,
    0,
    a3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 26);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 32);
  FullScreenPositioner::EraseAllViews((FullScreenPositioner *)((char *)this - 32));
  return 0LL;
}
