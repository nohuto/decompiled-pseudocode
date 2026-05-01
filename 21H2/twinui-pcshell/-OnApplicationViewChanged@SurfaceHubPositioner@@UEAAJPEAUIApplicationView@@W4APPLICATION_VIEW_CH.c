/*
 * XREFs of ?OnApplicationViewChanged@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007D3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180448484 (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180448708 (-_IsViewManaged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804487D4 (-_OnSizeConstraintsChanged@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180448DBC (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SurfaceHubPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  int v5; // r8d
  int v6; // r8d
  SurfaceHubPositioner *v7; // rsi
  int IsViewManaged; // ebx
  __int64 v9; // rdx
  SurfaceHubPositioner *v10; // rsi
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(struct IApplicationView *, struct IUnknown **); // rbx
  int MonitorForLaunch; // eax
  struct IUnknown *v14[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  struct IUnknown *v16; // [rsp+40h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(a1 + 448) )
    return 0LL;
  v5 = a3 - 7;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 == 7 )
      {
        v7 = (SurfaceHubPositioner *)(a1 - 128);
        IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v16);
        if ( IsViewManaged < 0 )
        {
          v9 = 426LL;
LABEL_12:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
            (const char *)(unsigned int)IsViewManaged);
          return (unsigned int)IsViewManaged;
        }
        if ( (_BYTE)v16 )
          SurfaceHubPositioner::_OnSizeConstraintsChanged(v7, a2);
      }
      return 0LL;
    }
  }
  v10 = (SurfaceHubPositioner *)(a1 - 128);
  IsViewManaged = SurfaceHubPositioner::_IsViewManaged((SurfaceHubPositioner *)(a1 - 128), a2, (bool *)&v16);
  if ( IsViewManaged < 0 )
  {
    v9 = 405LL;
    goto LABEL_12;
  }
  if ( !(_BYTE)v16 )
    return 0LL;
  v14[0] = 0LL;
  v16 = 0LL;
  v12 = *(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  MonitorForLaunch = v12(a2, v14);
  IsViewManaged = MonitorForLaunch;
  if ( MonitorForLaunch >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    MonitorForLaunch = SurfaceHubPositioner::_GetMonitorForLaunch(v10, a2, (struct IImmersiveMonitor **)&v16);
    IsViewManaged = MonitorForLaunch;
    if ( MonitorForLaunch >= 0 )
    {
      if ( !(unsigned int)SHIsSameObject(v14[0], v16) )
        SurfaceHubPositioner::_SetDefaultLayout(v10, a2, 0);
      (*(void (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
      return 0LL;
    }
    v11 = 411LL;
  }
  else
  {
    v11 = 410LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)MonitorForLaunch);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return (unsigned int)IsViewManaged;
}
