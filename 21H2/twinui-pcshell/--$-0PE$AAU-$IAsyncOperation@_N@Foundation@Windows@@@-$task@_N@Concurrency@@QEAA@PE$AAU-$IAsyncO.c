/*
 * XREFs of ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180392828
 * Callers:
 *     ??$create_task@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA?AV?$task@_N@0@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@Vtask_options@0@@Z @ 0x180393AC8 (--$create_task@PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@Concurrency@@YA-AV-$task@_N@0@PE$.c)
 * Callees:
 *     memmove_0 @ 0x180091333 (memmove_0.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE5CC (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV?$shared_ptr@U?$_Task_impl@_N@details@Concurrency@@@std@@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x180393568 (--$_AsyncInit@_N_N@_Task_impl_base@details@Concurrency@@SAXAEBV-$shared_ptr@U-$_Task_impl@_N@det.c)
 *     ??0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z @ 0x1803944D8 (--0_TaskCreationCallstack@details@Concurrency@@QEAA@AEBV012@@Z.c)
 *     ?_Clear_and_reserve_geometric@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAX_K@Z @ 0x180396794 (-_Clear_and_reserve_geometric@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAX_K@Z.c)
 *     ?_CreateImpl@?$task@_N@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x180396CB8 (-_CreateImpl@-$task@_N@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@.c)
 *     ?_Release@_RefCounter@details@Concurrency@@QEAAJXZ @ 0x180397B04 (-_Release@_RefCounter@details@Concurrency@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall Concurrency::task<bool>::task<bool>(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdx
  void **v9; // rdx
  char v10; // bl
  void *v11; // rcx
  _QWORD *v12; // rax
  void **v13; // rdx
  char **v14; // rdi
  void *v15; // r13
  signed __int64 v16; // r12
  char *v17; // r15
  __int128 v19; // [rsp+20h] [rbp-49h] BYREF
  __int64 v20; // [rsp+30h] [rbp-39h]
  void *v21; // [rsp+38h] [rbp-31h] BYREF
  __int128 v22; // [rsp+40h] [rbp-29h] BYREF
  __int64 v23; // [rsp+50h] [rbp-19h]
  char v24[8]; // [rsp+58h] [rbp-11h] BYREF
  char v25[96]; // [rsp+60h] [rbp-9h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]

  v5 = __abi_winrt_ptr_ctor(a2);
  *a1 = 0LL;
  a1[1] = 0LL;
  v19 = 0LL;
  v6 = *(_QWORD *)(a3 + 8);
  if ( v6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    v6 = *(_QWORD *)(a3 + 8);
  }
  *(_QWORD *)&v19 = *(_QWORD *)a3;
  *((_QWORD *)&v19 + 1) = v6;
  v20 = *(_QWORD *)(a3 + 16);
  v7 = *(volatile signed __int32 **)(a3 + 24);
  if ( v7 )
    _InterlockedIncrement(v7 + 2);
  v8 = (__int64)v7;
  if ( !v7 )
    v8 = 2LL;
  Concurrency::task<bool>::_CreateImpl(a1, v8, &v19);
  if ( v7 )
    Concurrency::details::_RefCounter::_Release((Concurrency::details::_RefCounter *)v7);
  if ( *(_BYTE *)(a3 + 48) )
  {
    v9 = (void **)Concurrency::details::_TaskCreationCallstack::_TaskCreationCallstack(
                    (Concurrency::details::_TaskCreationCallstack *)v24,
                    (const struct Concurrency::details::_TaskCreationCallstack *)(a3 + 56));
    v10 = 1;
    v11 = *v9;
  }
  else
  {
    v11 = retaddr;
    v22 = 0LL;
    v23 = 0LL;
    v21 = retaddr;
    v9 = &v21;
    v10 = 2;
  }
  v12 = (_QWORD *)*a1;
  v12[40] = v11;
  v13 = v9 + 1;
  v14 = (char **)(v12 + 41);
  if ( v12 + 41 != v13 )
  {
    v15 = *v13;
    v16 = (_BYTE *)v13[1] - (_BYTE *)*v13;
    v17 = *v14;
    if ( v16 >> 3 > (unsigned __int64)((__int64)(v12[43] - v12[41]) >> 3) )
    {
      std::vector<void *>::_Clear_and_reserve_geometric(v14);
      v17 = *v14;
    }
    memmove_0(v17, v15, v16);
    v14[1] = &v17[v16];
  }
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    std::vector<void *>::_Tidy((__int64)&v22);
  }
  if ( (v10 & 1) != 0 )
    std::vector<void *>::_Tidy((__int64)v25);
  *(_BYTE *)(*a1 + 12LL) = 1;
  Concurrency::details::_Task_impl_base::_AsyncInit<bool,bool>(a1, v5);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return a1;
}
