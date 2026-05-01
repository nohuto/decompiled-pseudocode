/*
 * XREFs of ??$CreateClassFactory@V?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1800E3E50
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x1800E3F0C (--$MakeAndInitialize@V-$wrl_class_factory@UWindowTabHost@implementation@Shell@Internal@Windows@w.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::WindowTabHost>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // eax
  _DWORD *v8; // rbx
  unsigned int v9; // edi
  int v10; // eax
  _DWORD *v12; // [rsp+20h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::WindowTabHost>,winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::WindowTabHost>,>(&v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v12[5] = *a1;
    v10 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v8)(v8, a3, a4);
    v9 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        v8[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v8 = 0LL;
      }
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  return v9;
}
