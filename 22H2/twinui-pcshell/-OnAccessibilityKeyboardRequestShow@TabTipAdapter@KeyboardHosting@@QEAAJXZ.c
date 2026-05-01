/*
 * XREFs of ?OnAccessibilityKeyboardRequestShow@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x1803CDBF8
 * Callers:
 *     ?OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803BC7A0 (-OnAccessibilityKeyboardRequestShow@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800D1AE8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputAppConsumesUdk@@@details@wil@@QEAAX_.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z @ 0x1803BBEBC (-NotifyCurrentVisibilityState@TouchKeyboardExperienceManager@@QEAAJI_N0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1803BF36C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard@@@details@wil@@QE.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x1803D26EC (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnAccessibilityKeyboardRequestShow(
        KeyboardHosting::TabTipAdapter *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // edi
  __int64 v5; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DesktopGazeXAMLKeyboard>::GetImpl'::`2'::impl,
    0,
    a3);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  if ( v4 < 0 )
  {
    v5 = 1944LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputAppConsumesUdk>::ReportUsage(
    (unsigned int *)&`wil::Feature<__WilFeatureTraits_Feature_InputAppConsumesUdk>::GetImpl'::`2'::impl,
    1u,
    3u);
  v4 = TouchKeyboardExperienceManager::NotifyCurrentVisibilityState(
         *((TouchKeyboardExperienceManager **)this + 8),
         *((_DWORD *)this + 122),
         0,
         0);
  if ( v4 < 0 )
  {
    v5 = 1947LL;
    goto LABEL_3;
  }
  *(_BYTE *)(*((_QWORD *)this + 13) + 513LL) = 1;
  *((_BYTE *)this + 448) = 1;
  v7 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition(this, 1);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7AA,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
