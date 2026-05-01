/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke @ 0x1801DA9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801B9BA4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator() @ 0x1801D781C (_lambda_73bca28b4d92a1291c49cf8f8a9be4e0_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_73bca28b4d92a1291c49cf8f8a9be4e0___1_long_::Invoke(
        __int64 a1,
        unsigned int a2)
{
  signed int v2; // eax
  unsigned int v3; // ebx

  v2 = lambda_73bca28b4d92a1291c49cf8f8a9be4e0_::operator()(a1 + 16, a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v2);
  return v3;
}
