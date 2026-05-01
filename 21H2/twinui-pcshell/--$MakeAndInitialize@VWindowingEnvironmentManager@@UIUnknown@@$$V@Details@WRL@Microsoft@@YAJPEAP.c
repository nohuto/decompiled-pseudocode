/*
 * XREFs of ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803533B0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180354730 (-CreateInstance@-$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800431B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0WindowingEnvironmentManager@@QEAA@XZ @ 0x180353AC8 (--0WindowingEnvironmentManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180354634 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$Impleme_ea_180354634.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@UIWindowingEnvironmentManager@@UIWindowingEnvironmentManagerInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180354C50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_180354C50.c)
 *     ?RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ @ 0x180354F38 (-RuntimeClassInitialize@WindowingEnvironmentManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowingEnvironmentManager,IUnknown,>(void **a1)
{
  WindowingEnvironmentManager *v2; // rax
  int CanCastTo; // ebx
  WindowingEnvironmentManager *v4; // rdi
  const struct _GUID *v5; // rdx

  *a1 = 0LL;
  v2 = (WindowingEnvironmentManager *)operator new(0xD0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = WindowingEnvironmentManager::WindowingEnvironmentManager(v2);
    CanCastTo = WindowingEnvironmentManager::RuntimeClassInitialize(v4);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v4;
        (*(void (__fastcall **)(WindowingEnvironmentManager *))(*(_QWORD *)v4 + 8LL))(v4);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo(v4, v5, a1);
        if ( CanCastTo == -2147467262 )
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::CanCastTo((char *)v4 + 32);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,IWindowingEnvironmentManager,IWindowingEnvironmentManagerInternal>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
