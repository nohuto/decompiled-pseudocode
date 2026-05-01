/*
 * XREFs of ??$CreateClassFactory@V?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18012A320
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@V?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180131E4C (--$MakeAndInitialize@V-$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winr.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  _DWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  _DWORD *v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>,winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>,>(&v12);
  if ( v7 >= 0 )
  {
    v9 = v12;
    v12[5] = *a1;
    v10 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v9)(v9, a3, a4);
    v11 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        v9[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v9 = 0LL;
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    return v11;
  }
  else
  {
    if ( v12 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
    return (unsigned int)v7;
  }
}
