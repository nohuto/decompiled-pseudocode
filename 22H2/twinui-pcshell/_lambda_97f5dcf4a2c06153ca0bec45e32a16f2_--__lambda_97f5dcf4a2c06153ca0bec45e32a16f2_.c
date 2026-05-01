/*
 * XREFs of _lambda_97f5dcf4a2c06153ca0bec45e32a16f2_::__lambda_97f5dcf4a2c06153ca0bec45e32a16f2_ @ 0x18008A0BC
 * Callers:
 *     _CImmersiveApp::CImmersiveWindowCollection::SchedulePresentedWindowChanged_::_1_::dtor$1 @ 0x1801725B4 (_CImmersiveApp--CImmersiveWindowCollection--SchedulePresentedWindowChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation_::_1_::dtor$1 @ 0x1801EFC0A (_CImmersiveApp--CImmersiveWindowCollection--QueueAyncVisibilityReconciliation_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::ActivationChanged_::_1_::dtor$1 @ 0x180388523 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--ActivationChanged_--_1_--dtor$.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::FirstFrameRendered_::_1_::dtor$1 @ 0x180389A68 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--FirstFrameRendere_ea_180389A68.c)
 *     _XamlAllUpViewController::[IMonitorFrameDismissAnimationCallback]::MonitorFrameDismissAnimationCompleted_::_1_::dtor$1 @ 0x18038AFFC (_XamlAllUpViewController--[IMonitorFrameDismissAnimationCallback]--MonitorFrameDism_ea_18038AFFC.c)
 *     _XamlAllUpViewController::[IXamlSwitcherWindowInteractionEvents]::OnLightDismiss_::_1_::dtor$1 @ 0x18038B387 (_XamlAllUpViewController--[IXamlSwitcherWindowInteractionEvents]--OnLightDismiss_--_1_--dtor$1.c)
 *     _XamlAllUpViewController::[IXamlMultitaskingViewController]::VirtualDesktopInvoked_::_1_::dtor$1 @ 0x18038BB99 (_XamlAllUpViewController--[IXamlMultitaskingViewController]--VirtualDesktopInvoked_--_1_--dtor$1.c)
 *     _TabletModePositioner::HandleFlashDetection_::_1_::dtor$2 @ 0x180467CED (_TabletModePositioner--HandleFlashDetection_--_1_--dtor$2.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x1804B116D (_DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_97f5dcf4a2c06153ca0bec45e32a1.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$0 @ 0x1804B1232 (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_-__lambda_0.c)
 *     _DCompThumbnailHelpers::DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_const_&__lambda_06ac9bc0098fdd3d203260c35bf5e579___lambda_97f5dcf4a2c06153ca0bec45e32a16f2____::_1_::dtor$2 @ 0x1804B124A (_DCompThumbnailHelpers--DCompThumbnail_SetValueWithPreAndPostCallbacks_tagRECT_cons_ea_1804B124A.c)
 *     _VirtualDesktopGestureWindow::Commit_::_1_::dtor$1 @ 0x1804B26BF (_VirtualDesktopGestureWindow--Commit_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall lambda_97f5dcf4a2c06153ca0bec45e32a16f2_::__lambda_97f5dcf4a2c06153ca0bec45e32a16f2_(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
