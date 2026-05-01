/*
 * XREFs of ??1?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@QEAA@XZ @ 0x1803945CC
 * Callers:
 *     _Concurrency::details::_Task_impl_base::_RegisterCancellation_::_1_::dtor$0 @ 0x180397815 (_Concurrency--details--_Task_impl_base--_RegisterCancellation_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_RegisterCancellation_::_1_::dtor$1 @ 0x180397821 (_Concurrency--details--_Task_impl_base--_RegisterCancellation_--_1_--dtor$1.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18020F990 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::weak_ptr<Concurrency::details::_Task_impl_base>::~weak_ptr<Concurrency::details::_Task_impl_base>(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decwref(v1);
}
