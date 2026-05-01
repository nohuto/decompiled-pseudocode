/*
 * XREFs of ?_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397D78
 * Callers:
 *     ??$_ThenImpl@_NV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@@?$task@_N@Concurrency@@AEBA?AV?$task@X@1@AEBV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@AEAU_ThenImplOptions@details@1@@Z @ 0x180393830 (--$_ThenImpl@_NV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@@-$task@_N@Concurrency@@AEBA-AV.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397F44 (-_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandle.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Concurrency::details::_Task_impl_base::_ScheduleContinuation(
        Concurrency::details::_Task_impl_base *this,
        struct Concurrency::details::_ContinuationTaskHandleBase *a2)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // edi
  _QWORD *v9; // rax
  char *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  std::_Ref_count_base *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  Concurrency::details::_Task_impl_base **v16; // rax
  char v17[8]; // [rsp+30h] [rbp-38h] BYREF
  std::_Ref_count_base *v18; // [rsp+38h] [rbp-30h]
  char v19[8]; // [rsp+40h] [rbp-28h] BYREF
  std::_Ref_count_base *v20; // [rsp+48h] [rbp-20h]
  char v21[8]; // [rsp+50h] [rbp-18h] BYREF
  std::_Ref_count_base *v22; // [rsp+58h] [rbp-10h]

  v4 = 0;
  v5 = _Mtx_lock((Concurrency::details::_Task_impl_base *)((char *)this + 32));
  if ( v5 )
  {
    std::_Throw_C_error(v5);
    __debugbreak();
  }
  if ( *((_DWORD *)this + 2) == 3 || *((_DWORD *)this + 2) == 4 && *((_BYTE *)a2 + 32) )
  {
    v4 = 1;
  }
  else if ( *((_DWORD *)this + 2) == 4 )
  {
    v4 = (*((_QWORD *)this + 2) != 0LL) + 2;
  }
  else
  {
    *((_QWORD *)a2 + 1) = *((_QWORD *)this + 14);
    *((_QWORD *)this + 14) = a2;
  }
  v6 = _Mtx_unlock((Concurrency::details::_Task_impl_base *)((char *)this + 32));
  if ( v6 )
    std::_Throw_C_error(v6);
  v7 = v4 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return;
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(struct Concurrency::details::_ContinuationTaskHandleBase *, char *))(*(_QWORD *)a2 + 16LL))(
                       a2,
                       v17);
      v10 = (char *)this + 16;
      LOBYTE(v11) = 1;
      LOBYTE(v12) = 1;
      LOBYTE(v10) = 1;
      (*(void (__fastcall **)(_QWORD, char *, __int64, __int64, char *))(*(_QWORD *)*v9 + 8LL))(
        *v9,
        v10,
        v12,
        v11,
        (char *)this + 16);
      v13 = v18;
    }
    else
    {
      v14 = (_QWORD *)(*(__int64 (__fastcall **)(struct Concurrency::details::_ContinuationTaskHandleBase *, char *))(*(_QWORD *)a2 + 16LL))(
                        a2,
                        v19);
      v15 = *v14 + 16LL;
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)*v14 + 8LL))(
        *v14,
        v15,
        0LL,
        0LL,
        *v14 + 16LL);
      v13 = v20;
    }
    if ( v13 )
      std::_Ref_count_base::_Decref(v13);
    (**(void (__fastcall ***)(struct Concurrency::details::_ContinuationTaskHandleBase *, __int64))a2)(a2, 1LL);
  }
  else
  {
    v16 = (Concurrency::details::_Task_impl_base **)(*(__int64 (__fastcall **)(struct Concurrency::details::_ContinuationTaskHandleBase *, char *))(*(_QWORD *)a2 + 16LL))(
                                                      a2,
                                                      v21);
    Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(*v16, a2);
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
  }
}
