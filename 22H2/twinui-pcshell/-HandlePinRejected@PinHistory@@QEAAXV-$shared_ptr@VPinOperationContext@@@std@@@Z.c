/*
 * XREFs of ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013A7EC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$2 @ 0x180140370 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_ResumeCoro$2.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18002158C (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z @ 0x180132024 (--$PinHistoryRequestHandled@PEBGAEAH@PinManagerTelemetry@@SAX$$QEAPEBGAEAH@Z.c)
 *     ??$_Emplace_reallocate@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$vector@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@QEAU21@$$QEAU21@@Z @ 0x180132E1C (--$_Emplace_reallocate@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_clo.c)
 *     ??$emplace_front@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAAEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@1@$$QEAU21@@Z @ 0x180133C24 (--$emplace_front@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x1801353F8 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXAEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@3@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@3@@Z @ 0x180139040 (-ForEachOperationInTimeWindow@PinHistory@@AEAAXAEBV-$deque@U-$pair@V-$shared_ptr@VPinOperationCo.c)
 *     ?RequestorBestAvailableAppId@PinRequestContext@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x18013FE60 (-RequestorBestAvailableAppId@PinRequestContext@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std.c)
 *     ?pop_back@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAAXXZ @ 0x180145B5C (-pop_back@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall PinHistory::HandlePinRejected(__int64 a1, std::_Ref_count_base *a2)
{
  std::_Ref_count_base **v4; // r8
  std::_Ref_count_base *v5; // rcx
  void ***v6; // rdx
  std::_Ref_count_base *v7; // r8
  std::_Ref_count_base *v8; // rax
  std::_Ref_count_base *v9; // rcx
  std::_Ref_count_base **v10; // rdx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base *v13[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-49h]
  std::_Ref_count_base *v15; // [rsp+38h] [rbp-41h] BYREF
  std::_Ref_count_base *v16; // [rsp+40h] [rbp-39h]
  std::_Ref_count_base *v17; // [rsp+48h] [rbp-31h]
  _QWORD v18[2]; // [rsp+50h] [rbp-29h] BYREF
  void **v19; // [rsp+60h] [rbp-19h] BYREF
  __int128 v20; // [rsp+68h] [rbp-11h]
  __int64 v21; // [rsp+78h] [rbp-1h]
  void ***v22; // [rsp+98h] [rbp+1Fh]
  std::_Ref_count_base *v23; // [rsp+A0h] [rbp+27h] BYREF
  int v24; // [rsp+A8h] [rbp+2Fh] BYREF
  RTL_SRWLOCK *v25; // [rsp+B0h] [rbp+37h] BYREF

  v23 = a2;
  v25 = 0LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)a1, &v25);
  std::chrono::steady_clock::now(v18);
  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(&v15, a2);
  v17 = *v4;
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::emplace_front<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
    (__int64 **)(a1 + 104),
    &v15);
  v5 = v16;
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
  if ( *(_QWORD *)(a1 + 136) > *(_QWORD *)(a1 + 152) )
    std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::pop_back(a1 + 104);
  v24 = 0;
  v13[0] = a2;
  v13[1] = (std::_Ref_count_base *)&v24;
  v14 = a1;
  v19 = &std::_Func_impl_no_alloc<_lambda_f864d990cd59c7d75306b1f1b4f893f3_,bool,std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &>::`vftable';
  v20 = *(_OWORD *)v13;
  v21 = a1;
  v22 = &v19;
  PinHistory::ForEachOperationInTimeWindow((__int64)v5, (_QWORD *)(a1 + 104), *(_QWORD *)(a1 + 184), (__int64)&v19);
  if ( v22 )
  {
    v6 = &v19;
    LOBYTE(v6) = v22 != &v19;
    ((void (__fastcall *)(void ***, void ***))(*v22)[4])(v22, v6);
  }
  if ( v24 >= *(_DWORD *)(a1 + 192) )
  {
    std::chrono::steady_clock::now(v18);
    std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v13, *(_QWORD **)a2);
    v8 = v13[0];
    v15 = v13[0];
    v9 = v13[1];
    v16 = v13[1];
    v13[0] = 0LL;
    v13[1] = 0LL;
    v17 = v7;
    v10 = *(std::_Ref_count_base ***)(a1 + 24);
    if ( *(std::_Ref_count_base ***)(a1 + 32) == v10 )
    {
      std::vector<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Emplace_reallocate<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>(
        (__int64 *)(a1 + 16),
        (__int64)v10,
        &v15);
      v11 = v16;
    }
    else
    {
      *v10 = v8;
      v10[1] = v9;
      v11 = 0LL;
      v10[2] = v7;
      *(_QWORD *)(a1 + 24) += 24LL;
    }
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v13, *(_QWORD **)a2);
  v23 = *(std::_Ref_count_base **)PinRequestContext::RequestorBestAvailableAppId(v13[0], v18);
  PinManagerTelemetry::PinHistoryRequestHandled<unsigned short const *,int &>((__int64 *)&v23, &v24);
  if ( v13[1] )
    std::_Ref_count_base::_Decref(v13[1]);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v25);
  v12 = (std::_Ref_count_base *)*((_QWORD *)a2 + 1);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
