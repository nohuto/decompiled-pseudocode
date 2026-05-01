/*
 * XREFs of ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180447720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044862C (-_ReLayoutAllApps@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180448794 (-_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::DisplaySettingsChange(__int64 a1, struct IImmersiveMonitor *a2, char a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **); // rbx
  int v14; // eax
  __int64 v15; // rdx
  SurfaceHubPositioner *v16; // rsi
  struct IImmersiveMonitor *v17[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned int v19; // [rsp+60h] [rbp+20h] BYREF
  struct IImmersiveMonitor *v20; // [rsp+78h] [rbp+38h] BYREF

  if ( *(_BYTE *)(a1 + 456) )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v5 = SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange((SurfaceHubPositioner *)(a1 - 120), a2);
      v6 = v5;
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1D0,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v5);
        return v6;
      }
    }
    if ( (a3 & 0x28) != 0 )
    {
      v20 = 0LL;
      v8 = *(_QWORD *)(a1 + 40);
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, struct IImmersiveMonitor **))(*(_QWORD *)v8 + 72LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
      v10 = v9(v8, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &v20);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 471LL;
LABEL_21:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_22;
      }
      v19 = 1;
      v10 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 40) + 32LL))(
              *(_QWORD *)(a1 + 40),
              &v19);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 473LL;
        goto LABEL_21;
      }
      if ( v19 <= 1 )
      {
        v16 = (SurfaceHubPositioner *)(a1 - 120);
      }
      else
      {
        v17[0] = 0LL;
        v12 = *(_QWORD *)(a1 + 40);
        v13 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, struct IImmersiveMonitor **))(*(_QWORD *)v12 + 104LL);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
        v14 = v13(v12, 1LL, v20, v17);
        v6 = v14;
        if ( v14 < 0 )
        {
          v15 = 477LL;
LABEL_16:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v15,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)v14);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
LABEL_22:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
          return v6;
        }
        v16 = (SurfaceHubPositioner *)(a1 - 120);
        v14 = SurfaceHubPositioner::_ReLayoutAllApps(v16, v17[0]);
        v6 = v14;
        if ( v14 < 0 )
        {
          v15 = 478LL;
          goto LABEL_16;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
      }
      v10 = SurfaceHubPositioner::_ReLayoutAllApps(v16, v20);
      v6 = v10;
      if ( v10 < 0 )
      {
        v11 = 480LL;
        goto LABEL_21;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
    }
  }
  return 0LL;
}
