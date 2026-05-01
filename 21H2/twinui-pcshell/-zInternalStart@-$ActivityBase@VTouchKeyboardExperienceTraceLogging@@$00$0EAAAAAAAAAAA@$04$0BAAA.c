/*
 * XREFs of ?zInternalStart@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1803C6B1C
 * Callers:
 *     ?StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z @ 0x1803C00DC (-StartActivity@InputAppActivation@TouchKeyboardExperienceTelemetryLogger@@QEAAXPEBG@Z.c)
 *     ?StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803C0198 (-StartActivity@InputAppActivationRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z @ 0x1803C0248 (-StartActivity@InputAppResumeRequested@TouchKeyboardExperienceTelemetryLogger@@QEAAXI@Z.c)
 *     ?StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1803D2AF0 (-StartActivity@DeferredRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboar.c)
 *     ?StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803D2BF4 (-StartActivity@InputAppActivated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803D2CA4 (-StartActivity@InputAppResumed@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803D2D54 (-StartActivity@InputAppTerminated@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1803D2E04 (-StartActivity@OnInputAppRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ?StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1803D2EE0 (-StartActivity@OnInputAppRequestedResizeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII.c)
 *     ?StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z @ 0x1803D2FBC (-StartActivity@OnInputAppRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXII@Z.c)
 *     ?StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803D3098 (-StartActivity@OnShellRequestedHideActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1803D3148 (-StartActivity@OnShellRequestedShowActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@IPEBG_N22@Z @ 0x1803D31F8 (-StartActivity@OnShellRequestedStateChangeActivity@TouchKeyboardExperienceTelemetryLogger@@QEAAX.c)
 *     ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x1803D3338 (-StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 *     ?StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@0I@Z @ 0x1803D343C (-StartActivity@PendingRequestExecuted@TouchKeyboardExperienceTelemetryLogger@@QEAAX_NW4CoreKeybo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801DAFD8 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExperienceTraceLogging@@P6AXXZ@Z @ 0x1803C6800 (-get@-$static_lazy@VTouchKeyboardExperienceTraceLogging@@@details@wil@@QEAAPEAVTouchKeyboardExpe.c)
 */

void __fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  RTL_SRWLOCK *v5; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<TouchKeyboardExperienceTraceLogging>::get(
                               v3,
                               _lambda_6268ba93b0f4a787e13bfdfc1db8eb78_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v4 > 5u && tlgKeywordOn((__int64)v4, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  v5 = SRWLock;
  *(_DWORD *)v2 = 1;
  if ( v5 )
    ReleaseSRWLockExclusive(v5);
}
