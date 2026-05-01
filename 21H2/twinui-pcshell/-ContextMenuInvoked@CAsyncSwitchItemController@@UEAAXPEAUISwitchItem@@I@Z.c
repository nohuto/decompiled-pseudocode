/*
 * XREFs of ?ContextMenuInvoked@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@I@Z @ 0x18041D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1803FD324 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___ @ 0x18041D278 (Windows--Internal--ComTaskPool--QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___.c)
 */

void __fastcall CAsyncSwitchItemController::ContextMenuInvoked(
        CAsyncSwitchItemController *this,
        struct ISwitchItem *a2,
        int a3)
{
  __int64 v6; // rbx
  unsigned int ControllerApartment; // eax
  unsigned int v8; // edi
  struct ISwitchItem *v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+60h] [rbp+20h] BYREF
  struct ISwitchItem *v13; // [rsp+78h] [rbp+38h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    v13 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
    v12 = *((_QWORD *)this + 2);
    v6 = v12;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(*((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this
                                                                         + 2));
    v9 = a2;
    v8 = ControllerApartment;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v9);
    v10 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v11 = a3;
    Windows::Internal::ComTaskPool::QueueTask__lambda_6c2381c8148a5bf607d7998e82322cb8___(v8, (__int64)&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  }
}
