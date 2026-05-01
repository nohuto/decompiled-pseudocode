/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_f5241c58406c3c804da063fdf7490d44___ @ 0x1803033F0
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_d87caed06550b1d9f51495b75369296b__&_ @ 0x180303798 (CreationThreadDispatcher--RunSync__lambda_d87caed06550b1d9f51495b75369296b__-_.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800779D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_f5241c58406c3c804da063fdf7490d44_(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *result; // rax

  v4 = 0LL;
  v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)v5);
    v4 = v6;
    v6[6] = *a2;
    *v6 = off_18051FD20;
    v6[1] = &CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  }
  result = a1;
  *a1 = v4;
  return result;
}
