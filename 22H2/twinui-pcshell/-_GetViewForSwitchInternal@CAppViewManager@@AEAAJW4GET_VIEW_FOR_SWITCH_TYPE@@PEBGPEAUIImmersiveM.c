/*
 * XREFs of ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801E0520
 * Callers:
 *     ?EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801D98E0 (-EnsureApplication@CAppViewManager@@AEAAJPEBGPEAPEAUIImmersiveApplicationInternal@@@Z.c)
 *     ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1801DA810 (-GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@P.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800133E0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180013B40 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1801E0064 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 */

// Hidden C++ exception states: #wind=5
__int64 CAppViewManager::_GetViewForSwitchInternal(CAppViewManager *a1, int a2, const unsigned __int16 *a3, ...)
{
  struct IUnknown *v6; // r12
  __int64 v7; // rbx
  struct IImmersiveMonitor *v8; // r8
  int MostRecentlyUsedViewForApp; // r15d
  RTL_SRWLOCK *v10; // rdi
  __int64 v11; // r14
  int (__fastcall *v12)(__int64, const unsigned __int16 *, __int64 *); // rsi
  HWND v13; // rsi
  struct IUnknown *v14; // rax
  struct IUnknown *v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  struct IUnknown *v22; // [rsp+B0h] [rbp+60h] BYREF
  va_list va1; // [rsp+B0h] [rbp+60h]
  va_list va2; // [rsp+B8h] [rbp+68h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, struct IUnknown *);
  v6 = v22;
  v22->lpVtbl = 0LL;
  v7 = 0LL;
  v18[0] = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va1);
  MostRecentlyUsedViewForApp = CAppViewManager::_GetMostRecentlyUsedViewForApp(
                                 a1,
                                 a3,
                                 v8,
                                 (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForApp < 0 || a2 != 1 )
    goto LABEL_15;
  v10 = CApplicationManagerUtility::g_pIAMGlobals;
  v18[1] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  v11 = *((_QWORD *)a1 + 15);
  v12 = *(int (__fastcall **)(__int64, const unsigned __int16 *, __int64 *))(*(_QWORD *)v11 + 56LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
  if ( v12(v11, a3, &v17) >= 0 && *(_BYTE *)(v17 + 32) )
  {
    v13 = *(HWND *)(v17 + 24);
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    if ( (int)CAppViewManager::_GetGlomForWindow(a1, v13, (struct IImmersiveApplicationInternal **)&v16, (bool *)va) >= 0 )
    {
      if ( (_BYTE)v20 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(v18, (__int64 *)&v16);
        v7 = v18[0];
      }
      else
      {
        if ( !(unsigned int)SHIsSameObject(v22, v16) )
          (*(void (__fastcall **)(_QWORD, HWND, struct IUnknown *, struct IUnknown *, _QWORD))(**((_QWORD **)a1 + 15)
                                                                                             + 96LL))(
            *((_QWORD *)a1 + 15),
            v13,
            v16,
            v22,
            0LL);
        ((void (__fastcall *)(struct IUnknown *, HWND, __int64))v22->lpVtbl[4].Release)(v22, v13, 2LL);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
  if ( v10 )
    ReleaseSRWLockExclusive(v10);
  if ( !v7 )
LABEL_15:
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(v18, (__int64 *)va1);
  if ( MostRecentlyUsedViewForApp >= 0 )
  {
    v14 = v22;
    v22 = 0LL;
    v6->lpVtbl = (struct IUnknownVtbl *)v14;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
  return (unsigned int)MostRecentlyUsedViewForApp;
}
