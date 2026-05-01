/*
 * XREFs of CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___ @ 0x1802002E0
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___ @ 0x180200218 (NotificationDispatcher--RunAsync__lambda_03cd8f9c11c3b75e9e31d9155b53654a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1800779D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAsyncCallback@@VFtmBase@23@@WRL@Micr.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___::CAsyncCallbackWithLambda__lambda_a6d13e69f30641531d997813b368784e___(
        _QWORD *a1,
        _QWORD *a2)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAsyncCallback,Microsoft::WRL::FtmBase>((__int64)a1);
  a1[6] = 0LL;
  if ( a1 + 6 != a2 )
  {
    a1[6] = *a2;
    *a2 = 0LL;
  }
  a1[7] = a2[1];
  *a1 = off_18050F9C8;
  a1[1] = &CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  return a1;
}
