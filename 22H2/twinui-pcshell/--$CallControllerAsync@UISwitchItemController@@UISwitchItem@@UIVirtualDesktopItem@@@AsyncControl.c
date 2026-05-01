/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@UIVirtualDesktopItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@ZV?$ComPtr@UISwitchItem@@@23@V?$ComPtr@UIVirtualDesktopItem@@@23@@Z @ 0x18041CDA0
 * Callers:
 *     ?MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z @ 0x18041D410 (-MoveItemToDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIVirtualDesktopItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1803FD054 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_c2a2628a81f3a0afe82e0d81e4960563___ @ 0x18041CF80 (Windows--Internal--ComTaskPool--QueueTask__lambda_c2a2628a81f3a0afe82e0d81e4960563___.c)
 *     _lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_ @ 0x18041D0B0 (_lambda_c2a2628a81f3a0afe82e0d81e4960563_--__lambda_c2a2628a81f3a0afe82e0d81e4960563_.c)
 */

__int64 __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem,IVirtualDesktopItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3,
        __int64 *a4)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 (__fastcall *v10)(__int64); // [rsp+20h] [rbp-28h] BYREF
  int (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h] BYREF
  __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  v6 = *a1;
  if ( v6 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v6);
    v11 = *a1;
    v10 =  ITabletModeController::`vcall'{72,{flat}};
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v11);
    v12 = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    v13 = *a4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    Windows::Internal::ComTaskPool::QueueTask__lambda_c2a2628a81f3a0afe82e0d81e4960563___(ControllerApartment, &v10);
    lambda_c2a2628a81f3a0afe82e0d81e4960563_::__lambda_c2a2628a81f3a0afe82e0d81e4960563_(&v10);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a4);
}
