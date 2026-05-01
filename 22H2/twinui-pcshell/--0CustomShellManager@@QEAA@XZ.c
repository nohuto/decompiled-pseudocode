/*
 * XREFs of ??0CustomShellManager@@QEAA@XZ @ 0x18020A6D8
 * Callers:
 *     ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020A48C (--$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnkno.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18008EFA8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Range_construct_or_tidy@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXPEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@0Uforward_iterator_tag@1@@Z @ 0x18008F178 (--$_Range_construct_or_tidy@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180090E18 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UICustomShellManager@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18020A57C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_18020A57C.c)
 */

// Hidden C++ exception states: #wind=4
CustomShellManager *__fastcall CustomShellManager::CustomShellManager(CustomShellManager *this)
{
  char v3[32]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v4; // [rsp+48h] [rbp-10h] BYREF

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)this + 5) = &CustomShellManager::`vftable'{for `IImmersiveShellComponent'};
  *((_QWORD *)this + 6) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
  *((_QWORD *)this + 13) = &CustomShellManager::`vftable'{for `ICustomShellManager'};
  *((_QWORD *)this + 14) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  std::wstring::wstring((__int64)v3, L"Windows.Internal.Shell.ShellLauncher.ShellLauncherExperience");
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  std::vector<std::wstring>::_Range_construct_or_tidy<std::wstring const *>(
    (_QWORD *)this + 19,
    (__int64)v3,
    (__int64)&v4);
  `eh vector destructor iterator'(v3, 32LL, 1LL, (void (*)(void *))std::wstring::~wstring);
  return this;
}
