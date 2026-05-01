/*
 * XREFs of ??$MakeAndInitialize@V?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Z @ 0x180131CDC
 * Callers:
 *     ??$CreateClassFactory@V?$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x18012A1B0 (--$CreateClassFactory@V-$wrl_class_factory@UPinManager@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180135A88 (--1-$MakeAllocator@VCAppTransitionTargetManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>,winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>,>(
        _QWORD *a1)
{
  unsigned int v2; // edi
  _DWORD *v3; // rax
  _DWORD *v4; // rbx
  _DWORD *v6; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  v6 = v3;
  if ( v3 )
  {
    v3[3] = 1;
    v3[5] = 4;
    *(_QWORD *)v3 = &winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable';
    v6 = 0LL;
    ((void (__fastcall *)(_DWORD *))*(&winrt::wrl_class_factory<winrt::Windows::Internal::Shell::implementation::PinManager>::`vftable'
                                    + 1))(v3);
    *a1 = v4;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAppTransitionTargetManager>::~MakeAllocator<CAppTransitionTargetManager>(&v6);
  return v2;
}
