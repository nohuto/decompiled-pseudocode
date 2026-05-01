/*
 * XREFs of ??$make_wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z@wistd@@KPEAPEAU?$wnf_subscription_state@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@01@@Z @ 0x1803B634C
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800D16F4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@@Z @ 0x1801AF9E0 (--0-$wnf_subscription_state@K@details@wil@@QEAA@$$QEAV-$function@$$A6AXAEBK@Z@wistd@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801B11EC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1801B1FE4 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // edi
  unsigned int v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h] BYREF
  char v15; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]
  int v17; // [rsp+80h] [rbp+20h] BYREF

  v17 = a3;
  *a4 = 0LL;
  v12 = -1;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
    v7 = wil::details::wnf_subscription_state<unsigned long>::wnf_subscription_state<unsigned long>(v6, a2);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v8 = -2147024882;
    v9 = 933LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)v8);
    goto LABEL_15;
  }
  v17 = 0;
  v8 = NtQueryWnfStateData(&WNF_HOLO_USER_DISPLAY_CONTEXT, 0LL, 0LL, &v12, 0LL, &v17) | 0x10000000;
  if ( (int)(v8 + 0x80000000) >= 0 && v8 != -805306333 )
  {
    v9 = 940LL;
    goto LABEL_9;
  }
  v14 = 0LL;
  v13 = v7 + 1;
  v15 = 1;
  v10 = RtlSubscribeWnfStateChangeNotification(
          &v14,
          WNF_HOLO_USER_DISPLAY_CONTEXT,
          v12,
          lambda_10c2d457696a47a750b06b77de2a577d_::_lambda_invoker_cdecl_);
  if ( v15 )
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      v13,
      v14);
  if ( v10 >= 0 )
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
           (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
           (const char *)(unsigned int)v10);
  }
LABEL_15:
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *, __int64))*v7)(v7, 1LL);
  return v8;
}
