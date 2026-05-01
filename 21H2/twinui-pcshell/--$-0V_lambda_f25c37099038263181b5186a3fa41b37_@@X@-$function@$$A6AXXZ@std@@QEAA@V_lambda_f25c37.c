/*
 * XREFs of ??$?0V_lambda_f25c37099038263181b5186a3fa41b37_@@X@?$function@$$A6AXXZ@std@@QEAA@V_lambda_f25c37099038263181b5186a3fa41b37_@@@Z @ 0x180392C9C
 * Callers:
 *     ??R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ @ 0x180394F28 (--R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::function<void (void)>::function<void (void)>(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rax
  std::_Ref_count_base *v4; // rcx

  a1[7] = 0LL;
  *a1 = &std::_Func_impl_no_alloc<_lambda_f25c37099038263181b5186a3fa41b37_,void,>::`vftable';
  v3 = *a2;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[1] = v3;
  a1[2] = a2[1];
  a1[3] = a2[2];
  a2[1] = 0LL;
  a2[2] = 0LL;
  a1[7] = a1;
  v4 = (std::_Ref_count_base *)a2[2];
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return a1;
}
