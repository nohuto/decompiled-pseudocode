/*
 * XREFs of ?AreEquivalentPinOperations@@YA_NV?$shared_ptr@VPinOperationContext@@@std@@0@Z @ 0x1801374B0
 * Callers:
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013B5C0 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     _anonymous_namespace_::PinConsentPromptManager::IsPromptOutstandingForPinOperation @ 0x18013B870 (_anonymous_namespace_--PinConsentPromptManager--IsPromptOutstandingForPinOperation.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x180144A70 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f864d990cd59c7d75306b1f1b4f893f3_@@_NAEBU-$pair@V-$shar.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180087854 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x1801353F8 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 *     ?AreEquivalentPinSources@@YA_NV?$shared_ptr@VPinRequestContext@@@std@@0@Z @ 0x180137560 (-AreEquivalentPinSources@@YA_NV-$shared_ptr@VPinRequestContext@@@std@@0@Z.c)
 */

char __fastcall AreEquivalentPinOperations(_QWORD **a1, _QWORD **a2)
{
  unsigned __int16 *v4; // r8
  _QWORD *v5; // rcx
  char v6; // bl
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v10, *a2);
  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(v11, *a1);
  if ( !(unsigned __int8)AreEquivalentPinSources(v11, v10) )
    goto LABEL_8;
  v4 = (unsigned __int16 *)(*a2 + 3);
  if ( (*a2)[6] >= 8uLL )
    v4 = *(unsigned __int16 **)v4;
  v5 = *a1 + 3;
  if ( (*a1)[6] >= 8uLL )
    v5 = (_QWORD *)*v5;
  if ( std::_Traits_equal<std::char_traits<unsigned short>>((__int64)v5, (*a1)[5], v4, (*a2)[5]) )
    v6 = 1;
  else
LABEL_8:
    v6 = 0;
  v7 = (std::_Ref_count_base *)a1[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  v8 = (std::_Ref_count_base *)a2[1];
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  return v6;
}
