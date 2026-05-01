/*
 * XREFs of ?ActivateApplicationInternal@CApplicationManager@@UEAAJW4IAM_ACTIVATE_APPLICATION_OPTION@@PEAUIImmersiveApplication@@@Z @ 0x180066750
 * Callers:
 *     ?ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICATION_OPTION@@@Z @ 0x180066730 (-ActivateApplication@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@W4IAM_ACTIVATE_APPLICA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCImmersiveAppFinderByApplication@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByApplication@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18006692C (--$FindEx@VCImmersiveAppFinderByApplication@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicat.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplication@@@Z @ 0x1801C4684 (-_AttemptPendingActivationTracking@CApplicationManager@@AEAAXPEAUHWND__@@PEAUIImmersiveApplicati.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801C50E4 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::ActivateApplicationInternal(
        __int64 a1,
        unsigned int a2,
        struct IImmersiveApplication *a3)
{
  HWND v6; // rdi
  int v7; // ebx
  int v8; // eax
  HWND LastActivePopup; // rbx
  HWND v10; // rsi
  struct IImmersiveApplication *v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  HWND v15; // [rsp+88h] [rbp+48h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0LL;
  if ( *(_DWORD *)(a1 + 720) == 2 )
  {
    v14 = 0LL;
    v12 = a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)a3 + 8LL))(a3);
    v14 = 0LL;
    v15 = 0LL;
    v7 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::FindEx<CImmersiveAppFinderByApplication>(
           (int)a1 + 392,
           (unsigned int)&v12,
           (unsigned int)&v15,
           (unsigned int)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    if ( v7 >= 0 )
      v7 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 392) + 8 * v13))(
             *(_QWORD *)(*(_QWORD *)(a1 + 392) + 8 * v13),
             &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
             &v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
    if ( v7 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND *))(*(_QWORD *)v14 + 312LL))(v14, a2, &v15);
      v7 = v8;
      if ( v8 == -2147023598 )
      {
        CApplicationManager::_ForgetApplicationNoLock(a1 - 240, v14, 1LL);
      }
      else if ( v8 >= 0 )
      {
        v6 = v15;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  else
  {
    v7 = -2147024891;
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v7 >= 0 )
  {
    LastActivePopup = GetLastActivePopup(v6);
    v10 = v6;
    if ( IsWindowVisible(LastActivePopup) )
      v10 = LastActivePopup;
    if ( SetForegroundWindow(v10) )
    {
      v7 = 0;
      if ( IsIconic(v6) )
        SwitchToThisWindow(v6, 1);
      if ( !(unsigned int)IsShellFrameWindow(v10) )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        CApplicationManager::_AttemptPendingActivationTracking((CApplicationManager *)(a1 - 240), v10, a3);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      (*(void (__fastcall **)(PVOID, HWND, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        v10,
        3LL);
    }
    else
    {
      return (unsigned int)-2147024891;
    }
  }
  return (unsigned int)v7;
}
