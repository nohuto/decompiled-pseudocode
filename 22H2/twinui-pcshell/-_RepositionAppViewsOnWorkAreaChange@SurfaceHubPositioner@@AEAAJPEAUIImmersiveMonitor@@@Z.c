/*
 * XREFs of ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180448794
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180447720 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x1801F3F6C (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x1802134A4 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180215D98 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802178DC (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange(
        SurfaceHubPositioner *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // rdi
  int v8; // eax
  void *v9; // rbx
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int i; // r15d
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, _QWORD, GUID *, void **); // rsi
  int v17; // eax
  void *v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-40h] BYREF
  void *v22; // [rsp+48h] [rbp-38h] BYREF
  int v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h] BYREF
  __int128 v25; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v25 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v25);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v24);
    v7 = v24;
    if ( !v24 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        533LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v6);
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
           &v22,
           &v25);
    if ( v7 && v8 >= 0 )
    {
      v9 = v22;
      if ( *(void **)(v7 + 72) != v22 )
      {
        v19 = v22;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
        v19 = *(void **)(v7 + 72);
        *(_QWORD *)(v7 + 72) = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      }
      v20 = 0LL;
      v10 = *((_QWORD *)this + 23);
      v11 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v10 + 64LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      v12 = v11(v10, 2LL, a2, &v20);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 548LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
LABEL_23:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v24);
        return v5;
      }
      v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v21);
      v5 = v12;
      if ( v12 < 0 )
      {
        v13 = 550LL;
        goto LABEL_13;
      }
      for ( i = 0; i < v21; ++i )
      {
        v19 = 0LL;
        v15 = v20;
        v16 = *(int (__fastcall **)(__int64, _QWORD, GUID *, void **))(*(_QWORD *)v20 + 32LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
        if ( v16(v15, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v19) >= 0
          && (*(int (__fastcall **)(void *, int *))(*(_QWORD *)v19 + 216LL))(v19, &v23) >= 0 )
        {
          if ( v23 )
          {
            v17 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v19 + 320LL))(v19, v7);
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x232,
                (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
                (const char *)(unsigned int)v17);
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    }
    v5 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x213,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
