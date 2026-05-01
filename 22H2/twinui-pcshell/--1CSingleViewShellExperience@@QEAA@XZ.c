/*
 * XREFs of ??1CSingleViewShellExperience@@QEAA@XZ @ 0x1804E343C
 * Callers:
 *     ??_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z @ 0x1800B1BE0 (--_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z.c)
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1800BAC88 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18021D8B8 (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CControlCenterExperienceManager@@UEAA@XZ @ 0x1802229BC (--1CControlCenterExperienceManager@@UEAA@XZ.c)
 *     ??1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ @ 0x180226BC8 (--1ShellExperienceView@Cortana@TwinUI@@UEAA@XZ.c)
 *     ??_EImeNotificationExperienceManager@@UEAAPEAXI@Z @ 0x18022DF80 (--_EImeNotificationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x18022EE50 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CToastCenterExperienceManager@@UEAA@XZ @ 0x180230A48 (--1CToastCenterExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarFlyoutExperienceManager@@UEAA@XZ @ 0x180239D68 (--1CPeopleBarFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x18023D5C8 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CShoulderTapExperienceManager@@UEAA@XZ @ 0x18023F67C (--1CShoulderTapExperienceManager@@UEAA@XZ.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$12 @ 0x1802420CB (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$12.c)
 *     ??1CStartExperienceManager@@UEAA@XZ @ 0x18024221C (--1CStartExperienceManager@@UEAA@XZ.c)
 *     ??1CJumpViewExperienceManager@@UEAA@XZ @ 0x180245D00 (--1CJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x18024B528 (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1CVirtualTouchpadExperienceManager@@UEAA@XZ @ 0x1802519AC (--1CVirtualTouchpadExperienceManager@@UEAA@XZ.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1802569D4 (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1CInsightsExperienceManager@@EEAA@XZ @ 0x18025E18C (--1CInsightsExperienceManager@@EEAA@XZ.c)
 * Callees:
 *     ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ @ 0x1800178E8 (-CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEAU_TP_TIMER@@@Z @ 0x1800880D0 (-Destroy@-$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAXPEA.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSingleViewShellExperience::~CSingleViewShellExperience(CSingleViewShellExperience *this)
{
  __int64 *v2; // rdi
  struct _TP_TIMER *v3; // rcx
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx

  v2 = (__int64 *)((char *)this + 104);
  if ( *((_QWORD *)this + 14) )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v2 + 56LL))(*v2, *((_QWORD *)this + 14));
  CSingleViewShellExperience::CancelWaitForWindowReadyForPresentation(this);
  if ( *((_QWORD *)this + 22) )
  {
    v2 = (__int64 *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 22));
  }
  if ( *((_QWORD *)this + 24) )
  {
    v2 = (__int64 *)((char *)this + 104);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 13) + 56LL))(
      *((_QWORD *)this + 13),
      *((_QWORD *)this + 24));
  }
  WindowsDeleteString(*((HSTRING *)this + 23));
  *((_QWORD *)this + 23) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 21));
  *((_QWORD *)this + 21) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  v3 = (struct _TP_TIMER *)*((_QWORD *)this + 18);
  if ( v3 )
    wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(v3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  v4 = *((_QWORD *)this + 12);
  if ( v4 )
  {
    *((_QWORD *)this + 12) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v5 )
    (**v5)(v5, 1LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 3);
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  WindowsDeleteString(*((HSTRING *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
