/*
 * XREFs of ??$MakeAndInitialize@VCIAMSpecialWindow@@V1@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Details@WRL@Microsoft@@YAJPEAPEAVCIAMSpecialWindow@@AEBQEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1801CC714
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationManager@@QEAAJXZ @ 0x1801C02A0 (-RuntimeClassInitialize@CApplicationManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x1801CCF4C (-InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CIAMSpecialWindow,CIAMSpecialWindow,SPECIAL_WINDOW_INIT_DATA const * const &>(
        CIAMSpecialWindowBase **a1,
        const struct SPECIAL_WINDOW_INIT_DATA **a2)
{
  CIAMSpecialWindowBase *v4; // rax
  CIAMSpecialWindowBase *v5; // rbx
  int v6; // edi
  CIAMSpecialWindowBase *v8; // [rsp+40h] [rbp+18h] BYREF

  *a1 = 0LL;
  v4 = (CIAMSpecialWindowBase *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &CIAMSpecialWindowBase::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 5) = 0LL;
    *((_DWORD *)v4 + 13) = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CIAMSpecialWindowBase>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v5 = &CIAMSpecialWindow::`vftable';
    v8 = v5;
    v6 = CIAMSpecialWindowBase::InitializeSpecialWindow(v5, *a2);
    if ( v6 >= 0 )
    {
      (*(void (__fastcall **)(CIAMSpecialWindowBase *))(*(_QWORD *)v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
