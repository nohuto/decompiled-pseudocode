/*
 * XREFs of ?Hide@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800724C0
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800282F0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180071F50 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?OnDismiss@CActionCenterExperienceManager@@UEAAJXZ @ 0x18008C270 (-OnDismiss@CActionCenterExperienceManager@@UEAAJXZ.c)
 *     ?OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x18021F868 (-OnTargetedMessage@CActionCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180220710 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180221750 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180015E10 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ @ 0x180072504 (-ReturnFocus@CActionCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CActionCenterExperienceManager::Hide(CActionCenterExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 40) != 2 )
    return 0LL;
  v2 = CActionCenterExperienceManager::ReturnFocus(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2C1,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = CSingleViewShellExperience::Hide((__int64)this + 120, 0LL);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
