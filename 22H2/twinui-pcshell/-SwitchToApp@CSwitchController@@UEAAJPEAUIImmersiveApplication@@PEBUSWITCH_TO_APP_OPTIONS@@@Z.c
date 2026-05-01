/*
 * XREFs of ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18043AB40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1ActivationData@CSwitchController@@QEAA@XZ @ 0x18043A6D4 (--1ActivationData@CSwitchController@@QEAA@XZ.c)
 *     ??1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ @ 0x18043A718 (--1CDetectSwitchReentrancy@CSwitchController@@QEAA@XZ.c)
 *     ?BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z @ 0x18043A880 (-BeginSwitchToApp@CDetectSwitchReentrancy@CSwitchController@@QEAAJPEAV2@@Z.c)
 *     ?_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATION_MONITOR_PREFERENCE@@PEAUIImmersiveApplication@@PEAPEAU2@@Z @ 0x18043B2E4 (-_GetMonitorForAppSwitchWithPreference@CSwitchController@@AEAAJPEAUIImmersiveMonitor@@W4ACTIVATI.c)
 *     ?_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18043B524 (-_LaunchApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x18043B8BC (-_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z.c)
 *     ?FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x1804D96D0 (-FindApplication@CallerIdentity@@YAJPEAUIUnknown@@PEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::SwitchToApp(
        CallerIdentity **this,
        struct IImmersiveApplication *a2,
        const struct SWITCH_TO_APP_OPTIONS *a3)
{
  CSwitchController *v6; // r14
  int MonitorForAppSwitchWithPreference; // ebx
  struct IImmersiveApplication **v8; // r9
  CSwitchController *v9; // rcx
  int v11; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch]
  int v13; // [rsp+38h] [rbp-38h]
  __int64 v14; // [rsp+40h] [rbp-30h] BYREF
  struct IImmersiveApplication *v15; // [rsp+48h] [rbp-28h]
  struct HWND__ v16[4]; // [rsp+50h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+68h] [rbp-8h]
  struct IImmersiveApplication *v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+48h] BYREF

  v20 = 0LL;
  v6 = (CSwitchController *)(this - 11);
  MonitorForAppSwitchWithPreference = CSwitchController::CDetectSwitchReentrancy::BeginSwitchToApp(
                                        (CSwitchController::CDetectSwitchReentrancy *)&v20,
                                        (struct CSwitchController *)(this - 11));
  if ( MonitorForAppSwitchWithPreference >= 0 )
  {
    v12 = 0;
    v14 = 0LL;
    v15 = 0LL;
    *(_OWORD *)&v16[0].unused = 0LL;
    v17 = 0;
    v18 = 0LL;
    v11 = *((_DWORD *)a3 + 4);
    v13 = *((_DWORD *)a3 + 6);
    if ( a2 )
    {
      v19 = a2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
      v19 = v15;
      v15 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
    }
    v12 = *((_DWORD *)a3 + 5);
    if ( *((_QWORD *)a3 + 4) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16[2].unused);
      CallerIdentity::FindApplication(*(this - 9), *((struct IUnknown **)a3 + 4), &v16[2], v8);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    MonitorForAppSwitchWithPreference = CSwitchController::_GetMonitorForAppSwitchWithPreference(
                                          v6,
                                          *(_QWORD *)a3,
                                          *((unsigned int *)a3 + 2),
                                          a2,
                                          &v14);
    if ( MonitorForAppSwitchWithPreference >= 0 )
    {
      MonitorForAppSwitchWithPreference = CSwitchController::_SwitchToApp(
                                            v6,
                                            (struct CSwitchController::ActivationData *)&v11);
      if ( MonitorForAppSwitchWithPreference >= 0 )
        MonitorForAppSwitchWithPreference = CSwitchController::_LaunchApp(
                                              v9,
                                              (struct CSwitchController::ActivationData *)&v11);
    }
    CSwitchController::ActivationData::~ActivationData((CSwitchController::ActivationData *)&v11);
  }
  CSwitchController::CDetectSwitchReentrancy::~CDetectSwitchReentrancy((CSwitchController::CDetectSwitchReentrancy *)&v20);
  return (unsigned int)MonitorForAppSwitchWithPreference;
}
