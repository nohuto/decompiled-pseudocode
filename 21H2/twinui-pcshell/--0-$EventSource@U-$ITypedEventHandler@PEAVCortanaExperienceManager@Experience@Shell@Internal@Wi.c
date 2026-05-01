/*
 * XREFs of ??0?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIFocusNavigateEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18021D2D8
 * Callers:
 *     ??0ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAA@XZ @ 0x1800B132C (--0ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@QEAA@XZ.c)
 *     ??0CActionCenterExperienceManager@@QEAA@XZ @ 0x18021D44C (--0CActionCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CControlCenterExperienceManager@@QEAA@XZ @ 0x180222994 (--0CControlCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CortanaSharedExperienceManager@@QEAA@XZ @ 0x1802265E0 (--0CortanaSharedExperienceManager@@QEAA@XZ.c)
 *     ??0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ @ 0x1802267D8 (--0ShellExperienceView@Cortana@TwinUI@@QEAA@XZ.c)
 *     ??0CToastCenterExperienceManager@@QEAA@XZ @ 0x180230898 (--0CToastCenterExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180241FC8 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0CJumpViewExperienceManager@@QEAA@XZ @ 0x180245B9C (--0CJumpViewExperienceManager@@QEAA@XZ.c)
 *     ??0SearchAppExperienceManager@@QEAA@XZ @ 0x180265000 (--0SearchAppExperienceManager@@QEAA@XZ.c)
 *     ??0ViewWrapperBase@@QEAA@XZ @ 0x18033CFA8 (--0ViewWrapperBase@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

RTL_SRWLOCK *__fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::Internal::Shell::Experience::IFocusNavigateEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        RTL_SRWLOCK *a1)
{
  a1->Ptr = 0LL;
  InitializeSRWLock(a1 + 1);
  InitializeSRWLock(a1 + 2);
  return a1;
}
