/*
 * XREFs of ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z @ 0x1804E3308
 * Callers:
 *     ??0ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAA@XZ @ 0x1800B130C (--0ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAA@XZ.c)
 *     ??0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z @ 0x1800BA994 (--0CBaseTrayFlyoutExperienceManager@@QEAA@HH@Z.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x18021D29C (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x1802227E4 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x180226628 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ??0ImeNotificationExperienceManager@@QEAA@XZ @ 0x18022DEB4 (--0ImeNotificationExperienceManager@@QEAA@XZ.c)
 *     ??0CTaskContinuityActivitiesExperienceManager@@QEAA@XZ @ 0x18022ED54 (--0CTaskContinuityActivitiesExperienceManager@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x1802306E8 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x180239AD8 (--0CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ??0CPeopleBarJumpViewExperienceManager@@QEAA@XZ @ 0x18023D418 (--0CPeopleBarJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CShoulderTapExperienceManager@@QEAA@XZ @ 0x18023F588 (--0CShoulderTapExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180241E18 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x1802459EC (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0CQuickConnectExperienceManager@@QEAA@XZ @ 0x18024B2EC (--0CQuickConnectExperienceManager@@QEAA@XZ.c)
 *     ??0CVirtualTouchpadExperienceManager@@QEAA@XZ @ 0x180251674 (--0CVirtualTouchpadExperienceManager@@QEAA@XZ.c)
 *     ??0CScreenClippingExperienceManager@@QEAA@XZ @ 0x180256680 (--0CScreenClippingExperienceManager@@QEAA@XZ.c)
 *     ??0CInsightsExperienceManager@@QEAA@XZ @ 0x18025DF98 (--0CInsightsExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSingleViewShellExperience::CSingleViewShellExperience(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_WORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 88) = a2;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_OWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 128) = SHTaskPoolGetUniqueContext(a1);
  *(_DWORD *)(a1 + 132) = a3;
  *(_DWORD *)(a1 + 136) = 0;
  *(_WORD *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_DWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 200) = 0;
  return result;
}
