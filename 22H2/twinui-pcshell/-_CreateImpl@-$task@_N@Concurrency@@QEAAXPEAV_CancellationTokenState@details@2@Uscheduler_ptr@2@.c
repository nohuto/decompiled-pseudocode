/*
 * XREFs of ?_CreateImpl@?$task@_N@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x1803969E8
 * Callers:
 *     ??$?0PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@@?$task@_N@Concurrency@@QEAA@PE$AAU?$IAsyncOperation@_N@Foundation@Windows@@AEBVtask_options@1@@Z @ 0x180392558 (--$-0PE$AAU-$IAsyncOperation@_N@Foundation@Windows@@@-$task@_N@Concurrency@@QEAA@PE$AAU-$IAsyncO.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@_N@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x180392420 (--$-0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@-$_Re_ea_180392420.c)
 *     ?_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV?$weak_ptr@U_Task_impl_base@details@Concurrency@@@std@@@Z @ 0x180397788 (-_RegisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXV-$weak_ptr@U_Task_impl_base@de.c)
 */

void __fastcall Concurrency::task<bool>::_CreateImpl(__int64 *a1, __int64 a2, __int64 a3)
{
  volatile signed __int32 *v6; // rcx
  __int64 v7; // r14
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  std::_Ref_count_base *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v14; // [rsp+38h] [rbp-28h]
  std::_Ref_count_base *v15[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  std::_Ref_count_base **v18; // [rsp+98h] [rbp+38h]
  __int64 v19; // [rsp+A0h] [rbp+40h]

  v19 = a3;
  *(_OWORD *)v15 = 0LL;
  v6 = *(volatile signed __int32 **)(a3 + 8);
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v6 = *(volatile signed __int32 **)(a3 + 8);
  }
  v15[0] = *(std::_Ref_count_base **)a3;
  v15[1] = (std::_Ref_count_base *)v6;
  v16 = *(_QWORD *)(a3 + 16);
  v18 = v15;
  v17 = a2;
  v18 = (std::_Ref_count_base **)operator new(0x1C8uLL);
  v7 = std::_Ref_count_obj<Concurrency::details::_Task_impl<bool>>::_Ref_count_obj<Concurrency::details::_Task_impl<bool>>(
         (__int64)v18,
         &v17,
         (__int64 *)v15);
  if ( v15[1] )
    std::_Ref_count_base::_Decref(v15[1]);
  *a1 = v7 + 16;
  v14 = (std::_Ref_count_base *)a1[1];
  v8 = v14;
  a1[1] = v7;
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  if ( a2 != 2 )
  {
    v9 = *a1;
    v13 = 0LL;
    v10 = a1[1];
    v11 = v9;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 12));
      v11 = *a1;
      v10 = a1[1];
    }
    *(_QWORD *)&v13 = v11;
    *((_QWORD *)&v13 + 1) = v10;
    Concurrency::details::_Task_impl_base::_RegisterCancellation(v9, &v13);
  }
  v12 = *(std::_Ref_count_base **)(a3 + 8);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
