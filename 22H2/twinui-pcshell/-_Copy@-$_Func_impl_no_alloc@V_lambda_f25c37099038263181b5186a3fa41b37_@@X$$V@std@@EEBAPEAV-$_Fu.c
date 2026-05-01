/*
 * XREFs of ?_Copy@?$_Func_impl_no_alloc@V_lambda_f25c37099038263181b5186a3fa41b37_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x180396760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc<_lambda_f25c37099038263181b5186a3fa41b37_,void,>::_Copy(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = &std::_Func_impl_no_alloc<_lambda_f25c37099038263181b5186a3fa41b37_,void,>::`vftable';
  a2[1] = a1[1];
  a2[2] = 0LL;
  a2[3] = 0LL;
  v2 = a1[3];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[2] = a1[2];
  a2[3] = a1[3];
  return a2;
}
