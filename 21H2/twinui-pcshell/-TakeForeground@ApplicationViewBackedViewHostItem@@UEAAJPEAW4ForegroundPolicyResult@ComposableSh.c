/*
 * XREFs of ?TakeForeground@ApplicationViewBackedViewHostItem@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1802CAFE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BB3FC (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1802C8D7C (--1ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1802CA560 (-StartActivity@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@.c)
 *     ?Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1802CA70C (-Stop@ApplicationViewBackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXW4Fo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewBackedViewHostItem::TakeForeground(
        ApplicationViewBackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v5,
    (__int64)"ApplicationViewBackedViewHostItem_TakeForeground");
  v5[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::`vftable';
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *)v5,
    *((_DWORD *)this + 46));
  *(_DWORD *)a2 = 2;
  if ( *((_BYTE *)this + 204)
    && (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19)) >= 0 )
  {
    *(_DWORD *)a2 = 0;
  }
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::Stop((__int64)v5, *(_DWORD *)a2);
  HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground::~ApplicationViewBackedViewHostItem_TakeForeground((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_TakeForeground *)v5);
  return 0LL;
}
