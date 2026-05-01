/*
 * XREFs of ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x180397684
 * Callers:
 *     ??R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU?$IAsyncOperation@_N@Foundation@Windows@@W4AsyncStatus@23@@Z @ 0x180395210 (--R_lambda_9c267cdafd8e064f323ec4e1c7ae30d4_@@QEAAXPE$AAU-$IAsyncOperation@_N@Foundation@Windows.c)
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x180396828 (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 * Callees:
 *     ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180397D34 (-_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 *     ?_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@123@@Z @ 0x180398198 (-_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@12.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_Task_impl<unsigned char>::_FinalizeAndRunContinuations(
        Concurrency::details::_Task_impl_base *this,
        char a2)
{
  struct _Mtx_internal_imp_t *v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  *((_BYTE *)this + 368) = a2;
  v3 = (Concurrency::details::_Task_impl_base *)((char *)this + 32);
  v4 = _Mtx_lock((Concurrency::details::_Task_impl_base *)((char *)this + 32));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 2) == 4 )
  {
    v5 = _Mtx_unlock(v3);
    if ( v5 )
      std::_Throw_C_error(v5);
  }
  else
  {
    *((_DWORD *)this + 2) = 3;
    v6 = _Mtx_unlock(v3);
    if ( v6 )
      std::_Throw_C_error(v6);
    Concurrency::details::_TaskCollectionBaseImpl::_SetCollectionState((char *)this + 136);
    Concurrency::details::_Task_impl_base::_RunTaskContinuations(this);
  }
}
