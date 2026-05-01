/*
 * XREFs of ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x180394750
 * Callers:
 *     _Concurrency::details::_CancellationTokenState::_DeregisterCallback_::_1_::dtor$1 @ 0x180397164 (_Concurrency--details--_CancellationTokenState--_DeregisterCallback_--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$1 @ 0x1803982D1 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$3 @ 0x1803982DD (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$3.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$9 @ 0x180398397 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$9.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_lock<std::mutex>::~unique_lock<std::mutex>(__int64 a1)
{
  int v1; // eax

  if ( *(_BYTE *)(a1 + 8) )
  {
    v1 = _Mtx_unlock(*(_Mtx_t *)a1);
    if ( v1 )
      std::_Throw_C_error(v1);
  }
}
