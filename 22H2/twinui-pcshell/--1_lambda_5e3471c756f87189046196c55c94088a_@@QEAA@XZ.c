/*
 * XREFs of ??1_lambda_5e3471c756f87189046196c55c94088a_@@QEAA@XZ @ 0x18021DB40
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x1800BAC88 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     __lambda_4f9db91f7b3ef4e45d712402b4d08f96_::operator()_::_1_::dtor$0 @ 0x1802CD63E (__lambda_4f9db91f7b3ef4e45d712402b4d08f96_--operator()_--_1_--dtor$0.c)
 *     _PeoplePaneViewManager::SubscribeToViewChangeNotifications_::_1_::dtor$0 @ 0x1802D1B47 (_PeoplePaneViewManager--SubscribeToViewChangeNotifications_--_1_--dtor$0.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_5e3471c756f87189046196c55c94088a____::_1_::dtor$0 @ 0x180366517 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_5e3471c756f87189046196c55c94088.c)
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1ef____::_1_::dtor$0 @ 0x18036672D (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_6c8b5f6772d3e01ba2a5e8ade53ff1e.c)
 *     _MonitorFrame::BeginInvokeAnimation_::_1_::dtor$1 @ 0x18036F0ED (_MonitorFrame--BeginInvokeAnimation_--_1_--dtor$1.c)
 *     _MonitorFrame::DestroyInternal_::_1_::dtor$1 @ 0x180370B39 (_MonitorFrame--DestroyInternal_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::TouchKeyboardExperienceManager_::_1_::dtor$19 @ 0x1803B6D61 (_TouchKeyboardExperienceManager--TouchKeyboardExperienceManager_--_1_--dtor$19.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall _lambda_5e3471c756f87189046196c55c94088a_::~_lambda_5e3471c756f87189046196c55c94088a_(
        _lambda_5e3471c756f87189046196c55c94088a_ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
