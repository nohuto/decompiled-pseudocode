/*
 * XREFs of ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18008AEA4
 * Callers:
 *     ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x18008AE40 (-Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 *     ?Activate@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800C6250 (-Activate@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperience.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1800C6380 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z @ 0x18022E970 (-SetMode@ImeNotificationExperienceManager@@UEAAJW4ImeMode@Experience@Shell@Internal@Windows@@@Z.c)
 *     ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18023EBD0 (-Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ @ 0x180246BF0 (-EnsureActivationArgs@CJumpViewExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x180053148 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::SetArgs(HSTRING *this, HSTRING a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = Microsoft::WRL::Wrappers::HString::Set(this, &v6);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x429,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
