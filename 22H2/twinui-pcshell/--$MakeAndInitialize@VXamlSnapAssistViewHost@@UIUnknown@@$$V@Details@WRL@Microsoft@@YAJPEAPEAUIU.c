/*
 * XREFs of ??$MakeAndInitialize@VXamlSnapAssistViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803837AC
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VXamlSnapAssistViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180384400 (-CreateInstance@-$SimpleClassFactory@VXamlSnapAssistViewHost@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnkn.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0XamlSnapAssistViewHost@@QEAA@XZ @ 0x180383C44 (--0XamlSnapAssistViewHost@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlSnapAssistViewHost@@@Z @ 0x18038435C (-Attach@-$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@QEAAXPEAVXamlSnapAssistViewHost@@@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@@Details@23@UIXamlViewHost@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180384390 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_180384390.c)
 *     ?InternalRelease@?$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ @ 0x180384938 (-InternalRelease@-$ComPtr@VXamlSnapAssistViewHost@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJXZ @ 0x1803849EC (-RuntimeClassInitialize@XamlSnapAssistViewHost@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<XamlSnapAssistViewHost,IUnknown,>(
        XamlSnapAssistViewHost **a1)
{
  XamlSnapAssistViewHost *v2; // rax
  int CanCastTo; // edi
  XamlSnapAssistViewHost *v4; // rax
  XamlSnapAssistViewHost *v5; // rbx
  __int64 v6; // rdx
  XamlSnapAssistViewHost *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  *a1 = 0LL;
  v2 = (XamlSnapAssistViewHost *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = XamlSnapAssistViewHost::XamlSnapAssistViewHost(v2);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::Attach(&v8, v4);
    v9 = 0LL;
    v5 = v8;
    CanCastTo = XamlSnapAssistViewHost::RuntimeClassInitialize(v8);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v5;
        (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)v5 + 8LL))(v5);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CMultitaskingViewHostBase<ISnapAssistViewHost>>,IXamlViewHost>::CanCastTo(
                      v5,
                      v6,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(XamlSnapAssistViewHost *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    Microsoft::WRL::ComPtr<XamlSnapAssistViewHost>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
