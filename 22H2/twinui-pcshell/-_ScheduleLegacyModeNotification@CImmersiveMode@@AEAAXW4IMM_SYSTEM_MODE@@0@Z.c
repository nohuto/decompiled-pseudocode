/*
 * XREFs of ?_ScheduleLegacyModeNotification@CImmersiveMode@@AEAAXW4IMM_SYSTEM_MODE@@0@Z @ 0x1801D1374
 * Callers:
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x1801D0BF4 (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     ?GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18002E810 (-GetCallbackArray@AgileRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___ @ 0x1801CF2D8 (Windows--Internal--ComTaskPool--QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::_ScheduleLegacyModeNotification(RTL_SRWLOCK *a1, int a2, int a3)
{
  RTL_SRWLOCK *v5; // rbx
  struct IObjectArray *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct IObjectArray *v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+2Ch] [rbp-14h]
  int v13; // [rsp+30h] [rbp-10h]
  int v14; // [rsp+60h] [rbp+20h] BYREF
  struct IObjectArray *v15; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0LL;
  v5 = a1 + 32;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  if ( (int)AgileRegistrationList::GetCallbackArray(v5, &v15) >= 0 )
  {
    v6 = v15;
    if ( ((int (__fastcall *)(struct IObjectArray *, int *))v15->lpVtbl->GetCount)(v15, &v14) >= 0 )
    {
      if ( v14 )
      {
        v10 = v6;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
        v11 = a2;
        v12 = a3;
        v13 = v14;
        Windows::Internal::ComTaskPool::QueueTask__lambda_6b79eb4b576a38d0be641e968c7b0b59___(
          v8,
          v7,
          (unsigned int)CApplicationManagerUtility::g_pIAMGlobals[13].Ptr,
          &v10);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
      }
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
}
