/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_5768fbe51821daf2523ac35b25514dd7___1_IInspectable___IInspectable___::Invoke @ 0x1802F7370
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801B9D54 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_5768fbe51821daf2523ac35b25514dd7_::operator() @ 0x1802F6234 (_lambda_5768fbe51821daf2523ac35b25514dd7_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_IInspectable____Microsoft::WRL::FtmBase___lambda_5768fbe51821daf2523ac35b25514dd7___1_IInspectable___IInspectable___::Invoke(
        __int64 a1,
        void *a2,
        void *a3)
{
  signed int v3; // eax
  unsigned int v4; // ebx

  v3 = lambda_5768fbe51821daf2523ac35b25514dd7_::operator()((_QWORD *)(a1 + 64), a2, a3);
  v4 = v3;
  if ( v3 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v3);
  return v4;
}
