/*
 * XREFs of ??$make_wnf_subscription_state@U_SEB_EVENT_HEADER@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@U_SEB_EVENT_HEADER@@@01@@Z @ 0x1801AF4C4
 * Callers:
 *     ??$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBU_SEB_EVENT_HEADER@@@Z@wistd@@K@Z @ 0x1801AF474 (--$make_wnf_subscription@U_SEB_EVENT_HEADER@@@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$reso.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x1801AF830 (--0-$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBK@Z@wistd@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801B103C (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801B1E34 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<_SEB_EVENT_HEADER>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  void *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // edi
  unsigned int v13; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD); // [rsp+48h] [rbp-18h]
  __int64 v15; // [rsp+50h] [rbp-10h] BYREF
  char v16; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v18; // [rsp+80h] [rbp+20h] BYREF

  v18 = a3;
  v13 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<unsigned long>::wnf_subscription_state<unsigned long>(
                                                   v6,
                                                   a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 933LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v8);
    goto LABEL_17;
  }
  v10 = v13;
  if ( v13 == -1 )
  {
    v18 = 0;
    v8 = NtQueryWnfStateData(&WNF_PO_ENERGY_SAVER_STATE, 0LL, 0LL, &v13, 0LL, &v18) | 0x10000000;
    if ( (int)(v8 + 0x80000000) >= 0 && v8 != -805306333 )
    {
      v9 = 940LL;
      goto LABEL_10;
    }
    v10 = v13;
  }
  v15 = 0LL;
  v14 = v7 + 1;
  v16 = 1;
  v11 = RtlSubscribeWnfStateChangeNotification(
          &v15,
          WNF_PO_ENERGY_SAVER_STATE,
          v10,
          lambda_3d7cde0590ac75205a70a489945adb21_::_lambda_invoker_cdecl_);
  if ( v16 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v14,
      v15);
  if ( v11 >= 0 )
  {
    v8 = 0;
    *a4 = v7;
    v7 = 0LL;
  }
  else
  {
    v8 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3BB,
           (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v11,
           (int)v7);
  }
LABEL_17:
  if ( v7 )
    (**v7)(v7, 1LL);
  return v8;
}
