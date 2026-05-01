/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9___ @ 0x180391B84
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_beeaa99da247ec9f188a411312d86a25___ @ 0x180391CE8 (CreationThreadDispatcher--RunSync__lambda_beeaa99da247ec9f188a411312d86a25___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800779D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_ @ 0x180391DE0 (_lambda_beeaa99da247ec9f188a411312d86a25_--_lambda_beeaa99da247ec9f188a411312d86a25_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_6db0cc918c730cce3d03b8b11b71b6d9_(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    lambda_beeaa99da247ec9f188a411312d86a25_::_lambda_beeaa99da247ec9f188a411312d86a25_(v6 + 6, a2);
    v4 = v6;
    *v6 = off_18064D830;
    v6[1] = off_18064D7E8;
  }
  result = a1;
  *a1 = v4;
  return result;
}
