/*
 * XREFs of ?Stop@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802C249C
 * Callers:
 *     _lambda_b9b8919c976c9175b4f59b30cd5e8c9c_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800C7770 (_lambda_b9b8919c976c9175b4f59b30cd5e8c9c_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_cc5deaedd2cfca8d7c581af421c5ead5_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800C7824 (_lambda_cc5deaedd2cfca8d7c581af421c5ead5_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     _lambda_fa229aea017a19cbc9cb3db68405d883_::operator()_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_ @ 0x1800C78C0 (_lambda_fa229aea017a19cbc9cb3db68405d883_--operator()_Windows--Internal--Shell--Holographic--Win.c)
 *     ?_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32ApplicationView@@_N@Z @ 0x1802C4A10 (-_SendViewToDesktop@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@CAJPEAUIWin32App.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18001DE3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002D8C8 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?SetStopResult@?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA_NJPEAJ@Z @ 0x1801C14F0 (-SetStopResult@-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?LockExclusive@?$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1801DAFD8 (-LockExclusive@-$ActivityBase@VNotificationCenterLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflecto.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802C5ADC (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 */

void __fastcall wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::Stop(
        __int64 a1,
        int a2)
{
  bool v3; // al
  PSRWLOCK v4; // rcx
  bool v5; // di
  __int64 v6; // rax
  _DWORD *v7; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v9; // r8
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF
  DWORD v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = a2;
  wil::ActivityBase<NotificationCenterLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v3 = wil::ActivityBase<WindowManagementLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowManagementLogging,_TlgReflectorTag_Param0IsProviderType>::SetStopResult(
         *(_QWORD *)(a1 + 48),
         0,
         (int *)&v11);
  v4 = SRWLock;
  v5 = v3;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    v6 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
           v4,
           _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
    v7 = *(_DWORD **)(v6 + 8);
    if ( *v7 > 5u && tlgKeywordOn(*(_QWORD *)(v6 + 8), 0x200000000000LL) )
    {
      CurrentThreadId = GetCurrentThreadId();
      v9 = *(_QWORD *)(a1 + 48);
      LODWORD(SRWLock) = 0;
      v11 = CurrentThreadId;
      v12 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v7,
        byte_180570094,
        (const GUID *)(v9 + 8),
        0LL,
        (__int64)&v12,
        (__int64)&SRWLock,
        (__int64)&v11);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
