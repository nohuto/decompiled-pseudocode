/*
 * XREFs of ?_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@123@@Z @ 0x180397EC8
 * Callers:
 *     ?_CancelAndRunContinuations@?$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x180396020 (-_CancelAndRunContinuations@-$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Exc.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x180396200 (-_CancelAndRunContinuations@-$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Ex.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x1803973B4 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskCollectionBaseImpl::_SetCollectionState(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax

  v2 = _Mtx_lock((_Mtx_t)(a1 + 72));
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  if ( *(int *)(a1 + 176) < 2 )
    *(_DWORD *)(a1 + 176) = 2;
  v3 = _Cnd_broadcast((_Cnd_t)a1);
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = _Mtx_unlock((_Mtx_t)(a1 + 72));
  if ( v4 )
    std::_Throw_C_error(v4);
}
