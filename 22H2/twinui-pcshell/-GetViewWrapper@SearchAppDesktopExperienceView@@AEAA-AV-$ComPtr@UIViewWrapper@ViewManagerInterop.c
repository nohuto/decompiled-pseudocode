/*
 * XREFs of ?GetViewWrapper@SearchAppDesktopExperienceView@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x180019F38
 * Callers:
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x180018510 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18002A4C0 (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 *     ?SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z @ 0x1800885F4 (-SetZBand@SearchAppDesktopExperienceView@@AEAAJW4ZBID@@@Z.c)
 *     ?GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x18008B41C (-GetHwnd@SearchAppDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall SearchAppDesktopExperienceView::GetViewWrapper(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, _QWORD *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(a2);
    v5 = v4(v3, a2);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA3F,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v5,
        1);
  }
  return a2;
}
