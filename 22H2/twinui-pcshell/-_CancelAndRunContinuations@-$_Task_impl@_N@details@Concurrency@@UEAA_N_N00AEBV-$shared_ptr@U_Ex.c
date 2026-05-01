/*
 * XREFs of ?_CancelAndRunContinuations@?$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x180396200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x1800D7938 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180276230 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ??4?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18028ECB4 (--4-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180397D34 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 *     ?_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@123@@Z @ 0x180397EC8 (-_SetCollectionState@_TaskCollectionBaseImpl@details@Concurrency@@IEAAXW4_TaskCollectionState@12.c)
 */

char __fastcall Concurrency::details::_Task_impl<bool>::_CancelAndRunContinuations(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        _QWORD *a5)
{
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  int v15; // eax
  struct _Mtx_internal_imp_t *v16; // [rsp+20h] [rbp-78h]
  _QWORD v17[8]; // [rsp+30h] [rbp-68h] BYREF

  v16 = (struct _Mtx_internal_imp_t *)(a1 + 32);
  v8 = _Mtx_lock((_Mtx_t)(a1 + 32));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = *(_DWORD *)(a1 + 8);
  if ( a3 )
  {
    if ( v9 != 4 )
    {
      std::shared_ptr<PeoplePaneViewInfo>::operator=((_QWORD *)(a1 + 16), a5);
LABEL_10:
      if ( a2 )
      {
        *(_DWORD *)(a1 + 8) = 4;
        v10 = 1;
      }
      else
      {
        v10 = 0;
        if ( *(_DWORD *)(a1 + 8) == 1 )
          v10 = 2;
        *(_DWORD *)(a1 + 8) = 2;
        Concurrency::details::_TaskEventLogger::_LogCancelTask((Concurrency::details::_TaskEventLogger *)(a1 + 352));
      }
      v11 = _Mtx_unlock(v16);
      if ( v11 )
        std::_Throw_C_error(v11);
      v12 = v10 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          if ( *(_QWORD *)(a1 + 432) )
            std::_Func_class<void,>::operator()(a1 + 376);
        }
      }
      else
      {
        Concurrency::details::_TaskCollectionBaseImpl::_SetCollectionState(a1 + 136);
        if ( *(_QWORD *)(a1 + 112) )
        {
          v17[0] = &std::_Func_impl_no_alloc<_lambda_bb3ea35c7a129712676a4a6472ecdc6a_,void,>::`vftable';
          v17[1] = a1;
          v17[7] = v17;
          Concurrency::details::_ScheduleFuncWithAutoInline(v17, 16LL);
          std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
            (__int64)v17,
            v13);
        }
      }
      return 1;
    }
  }
  else if ( v9 != 3 && *(_DWORD *)(a1 + 8) != 4 && (*(_DWORD *)(a1 + 8) != 2 || a2) )
  {
    goto LABEL_10;
  }
  v15 = _Mtx_unlock(v16);
  if ( v15 )
    std::_Throw_C_error(v15);
  return 0;
}
