/*
 * XREFs of ?GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804500B0
 * Callers:
 *     ?GetChromeConfigurationForView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18016FEB0 (-GetChromeConfigurationForView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x180098D88 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1801E8958 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetChromeConfigurationForView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  __int64 *v5; // rax
  struct IApplicationViewTitlebarConfiguration *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  volatile int *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewTitlebarConfiguration *v14; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(v12);
  v14 = (struct IApplicationViewTitlebarConfiguration *)*v5;
  v6 = v14;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(v12);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, __int64, __int64))(*(_QWORD *)v6 + 40LL))(
            v6,
            1LL,
            1LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, _QWORD))(*(_QWORD *)v6 + 24LL))(
              v6,
              0LL);
      v7 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
        *a4 = v6;
        v7 = 0;
        goto LABEL_10;
      }
      v9 = 292LL;
    }
    else
    {
      v9 = 291LL;
    }
    v8 = (unsigned int)v10;
  }
  else
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 290LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v7;
}
