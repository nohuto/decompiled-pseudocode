/*
 * XREFs of ?GetNameInternal@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804BC6A0
 * Callers:
 *     ?GetName@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1804BC600 (-GetName@CVirtualDesktop@@UEAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180062A7C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VirtualDesktopCustomNames@@@details@wil@@.c)
 */

__int64 __fastcall CVirtualDesktop::GetNameInternal(HSTRING *this, HSTRING *a2, __int64 a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VirtualDesktopCustomNames>::GetImpl'::`2'::impl,
    1u,
    a3);
  v5 = WindowsDuplicateString(this[11], a2);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v5);
  return v6;
}
