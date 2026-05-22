/*
 * XREFs of ??1?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801574E0
 * Callers:
 *     ??1?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18015742C (--1-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Para.c)
 *     ?reset@?$shared_object@V?$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180167FBC (-reset@-$shared_object@V-$ActivityData@VHolographicDriverClientContinuousTrace@@U_TlgReflectorTa.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180068650 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1800A0F40 (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?get@?$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDriverClientContinuousTrace@@P6AXXZ@Z @ 0x180167E4C (-get@-$static_lazy@VHolographicDriverClientContinuousTrace@@@details@wil@@QEAAPEAVHolographicDri.c)
 */

void __fastcall wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<HolographicDriverClientContinuousTrace,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v5; // rax

  wil::details::shared_buffer::reset((volatile signed __int32 **)(a1 + 224));
  if ( *(_BYTE *)(a1 + 64) )
  {
    v3 = *(void **)(a1 + 56);
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v3);
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v5 = wil::details::static_lazy<HolographicDriverClientContinuousTrace>::get(
           v2,
           _lambda_fbd0f72fdb52924b760b88d2d8805198_::_lambda_invoker_cdecl_);
    _tlgWriteActivityAutoStop<0,5>(*(_DWORD **)(v5 + 8), (const GUID *)(a1 + 8));
  }
  *(_DWORD *)a1 = 3;
}
