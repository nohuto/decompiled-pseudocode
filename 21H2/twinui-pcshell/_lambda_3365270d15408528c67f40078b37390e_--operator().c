/*
 * XREFs of _lambda_3365270d15408528c67f40078b37390e_::operator() @ 0x180136A28
 * Callers:
 *     wil::details::lambda_call__lambda_3365270d15408528c67f40078b37390e___::_lambda_call__lambda_3365270d15408528c67f40078b37390e___ @ 0x180135CF4 (wil--details--lambda_call__lambda_3365270d15408528c67f40078b37390e___--_lambda_call__lambda_3365.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001E864 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180020684 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180026620 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x180135568 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation @ 0x18013E158 (_anonymous_namespace_--PinConsentPromptManager--RemoveOutstandingPromptForOperation.c)
 */

void __fastcall lambda_3365270d15408528c67f40078b37390e_::operator()(RTL_SRWLOCK **a1)
{
  std::_Ref_count_base *v2; // rcx
  RTL_SRWLOCK *v3; // rsi
  std::_Ref_count_base *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp-18h] BYREF

  v2 = (std::_Ref_count_base *)a1[1];
  if ( v2 && std::_Ref_count_base::_Incref_nz(v2) )
  {
    v3 = *a1;
    v4 = (std::_Ref_count_base *)a1[1];
    if ( *a1 )
    {
      v7 = 0LL;
      wil::srwlock::lock_exclusive(v3 + 2, &v7);
      v5 = std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(&v6, a1 + 2);
      anonymous_namespace_::PinConsentPromptManager::RemoveOutstandingPromptForOperation(v3, v5);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
    }
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
  }
}
