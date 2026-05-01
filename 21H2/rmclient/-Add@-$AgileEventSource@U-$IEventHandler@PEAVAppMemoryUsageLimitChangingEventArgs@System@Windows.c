/*
 * XREFs of ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180002418
 * Callers:
 *     ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800023E0 (-add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAVApp.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800024B0 (-AddInternal@-$EventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Wind.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180002700 (--$CreateAgileHelper@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  if ( !a2 )
    return 2147942487LL;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
         a2,
         &v8);
  if ( v6 >= 0 )
  {
    if ( v8 )
      v6 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             v5,
             v8,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return (unsigned int)v6;
}
