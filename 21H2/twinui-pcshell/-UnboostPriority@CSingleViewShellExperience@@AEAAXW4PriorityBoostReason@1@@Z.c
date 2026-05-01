/*
 * XREFs of ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180015CF0
 * Callers:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x180015E10 (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180050430 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x180085BAC (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_f55151fab6cde82124031f7726ac4810___1_IInspectable___IInspectable___::Invoke @ 0x18014F430 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_18014F430.c)
 *     wil::details::ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___::_ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___ @ 0x1804E3794 (wil--details--ScopeExitFn__lambda_a7f15287e5878abd1220aaf01e051b7a___--_ScopeExitFn__lambda_a7f1.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1804E462C (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800143D0 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ @ 0x180015BB8 (-UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800874B4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@45@Z @ 0x1804E2BAC (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U2@U3@@-$_tlgWrit.c)
 */

LPVOID __fastcall CSingleViewShellExperience::UnboostPriority(__int64 a1, int a2)
{
  int v4; // eax
  PCWSTR StringRawBuffer; // rsi
  PCWSTR v6; // rax
  __int64 v7; // r14
  LPVOID result; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  void (*v15)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v16; // ecx
  char v17; // al
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+50h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-20h] BYREF
  __int64 v21; // [rsp+60h] [rbp-18h] BYREF
  __int64 v22; // [rsp+68h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+30h]
  __int64 v24; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+40h] BYREF
  WINBOOL fPending; // [rsp+C0h] [rbp+48h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+50h] BYREF

  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    if ( !*(_BYTE *)(a1 + 140) )
      goto LABEL_5;
    *(_BYTE *)(a1 + 140) = 0;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 88) + 128LL))(*(_QWORD *)(a1 + 88), a1);
    if ( v4 >= 0 )
      goto LABEL_5;
    v14 = 1232LL;
LABEL_14:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v4,
      v18);
    goto LABEL_5;
  }
  wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
    (struct _TP_TIMER **)(a1 + 144),
    0LL);
  CSingleViewShellExperience::UnboostDiskIo((CSingleViewShellExperience *)a1, v10, v11, v12, v18);
  if ( *(_BYTE *)(a1 + 141) )
  {
    v13 = *(_QWORD *)(a1 + 88);
    *(_BYTE *)(a1 + 141) = 0;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 128LL))(v13, a1);
    if ( v4 < 0 )
    {
      v14 = 1223LL;
      goto LABEL_14;
    }
  }
LABEL_5:
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 16), 0LL);
  v6 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 8), 0LL);
  Context = 0LL;
  v7 = (__int64)v6;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180650690;
    qword_180650690[0] = &ShellScreenClippingLogging::`vftable';
    qword_1806506A8 = (struct _tlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180650690, qword_1806506A8, v15);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180650690);
  }
  result = Context;
  v9 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( *v9 > 5u )
  {
    result = (LPVOID)tlgKeywordOn(v9, 0x200000000000LL);
    if ( (_BYTE)result )
    {
      v17 = *(_BYTE *)(a1 + 140);
      LODWORD(v27) = 0;
      LOBYTE(v25) = v17;
      LOBYTE(v24) = *(_BYTE *)(a1 + 141);
      LODWORD(v19) = a2;
      v21 = (__int64)StringRawBuffer;
      v22 = v7;
      return (LPVOID)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
                       v16,
                       (int)&dword_1805A2288,
                       (__int64)&v22,
                       (__int64)&v21,
                       (__int64)&v19,
                       (__int64)&v24,
                       (__int64)&v27,
                       (__int64)&v25);
    }
  }
  return result;
}
