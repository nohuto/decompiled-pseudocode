/*
 * XREFs of ?TakeForeground@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAW4ForegroundPolicyResult@ComposableShell@45@@Z @ 0x1802C33B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BB3FC (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ??0?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802BB6E0 (--0-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$0A@$0A@$03$0CAAAAAA@U_TlgReflector.c)
 *     ??1TakeForeground@Win32BackedViewHostItemTelemetry@@QEAA@XZ @ 0x1802BCA6C (--1TakeForeground@Win32BackedViewHostItemTelemetry@@QEAA@XZ.c)
 *     ??1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1802BCC9C (--1Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXI@Z @ 0x1802C2218 (-StartActivity@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXI@Z.c)
 *     ?StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z @ 0x1802C2314 (-StartActivity@Win32BackedViewHostItem_TakeForeground@HolographicPositionerTelemetry@@QEAAXI@Z.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802C23B4 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ?Stop@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableShell@Internal@Windows@@@Z @ 0x1802C259C (-Stop@TakeForeground@Win32BackedViewHostItemTelemetry@@QEAAXW4ForegroundPolicyResult@ComposableS.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::TakeForeground(
        Windows::Internal::Shell::Holographic::Win32BackedViewHostItem *this,
        enum Windows::Internal::ComposableShell::ForegroundPolicyResult *a2)
{
  int v2; // ebx
  int v5; // ebx
  RTL_SRWLOCK *v6; // rbx
  char v7; // bp
  int v8; // edx
  HWND v9; // rdi
  _QWORD v11[40]; // [rsp+20h] [rbp-2A8h] BYREF
  _QWORD v12[40]; // [rsp+160h] [rbp-168h] BYREF

  v2 = *((_DWORD *)this + 120);
  wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<Win32BackedViewHostItemTelemetryProvider,0,0,4,33554432,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v12);
  v12[0] = &Win32BackedViewHostItemTelemetry::TakeForeground::`vftable';
  Win32BackedViewHostItemTelemetry::TakeForeground::StartActivity(
    (Win32BackedViewHostItemTelemetry::TakeForeground *)v12,
    v2);
  v5 = *((_DWORD *)this + 120);
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v11,
    (__int64)"Win32BackedViewHostItem_TakeForeground");
  v11[0] = &HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::`vftable';
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::StartActivity(
    (HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v11,
    v5);
  *(_DWORD *)a2 = 2;
  v6 = (RTL_SRWLOCK *)((char *)this + 176);
  v7 = *((_BYTE *)this + 504);
  AcquireSRWLockShared((PSRWLOCK)this + 22);
  v9 = (HWND)*((_QWORD *)this + 60);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v7 && SetForegroundWindow(v9) )
    *(_DWORD *)a2 = 0;
  wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11, v8);
  Win32BackedViewHostItemTelemetry::TakeForeground::Stop((__int64)v12, *(_DWORD *)a2);
  HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground::~Win32BackedViewHostItem_TakeForeground((HolographicPositionerTelemetry::Win32BackedViewHostItem_TakeForeground *)v11);
  Win32BackedViewHostItemTelemetry::TakeForeground::~TakeForeground((Win32BackedViewHostItemTelemetry::TakeForeground *)v12);
  return 0LL;
}
