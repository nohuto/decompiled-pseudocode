/*
 * XREFs of ?SwitchItemDragEnded@CAsyncSwitchItemController@@UEAAXXZ @ 0x18041D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___ @ 0x1803FD0EC (Windows--Internal--ComTaskPool--QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x1803FD324 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 */

void __fastcall CAsyncSwitchItemController::SwitchItemDragEnded(CAsyncSwitchItemController *this)
{
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 (__fastcall *v4)(__int64); // [rsp+20h] [rbp-18h] BYREF
  __int64 v5[2]; // [rsp+28h] [rbp-10h] BYREF

  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 2);
  if ( v2 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v2);
    v5[0] = *((_QWORD *)this + 2);
    v4 =  ISwitchItemController::`vcall'{112,{flat}};
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
    Windows::Internal::ComTaskPool::QueueTask__lambda_04782cd470235717f7963c3576bcb0e4___(ControllerApartment, &v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5);
  }
}
