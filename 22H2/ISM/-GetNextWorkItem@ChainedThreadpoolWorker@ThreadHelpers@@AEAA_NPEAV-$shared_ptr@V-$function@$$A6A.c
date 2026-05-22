/*
 * XREFs of ?GetNextWorkItem@ChainedThreadpoolWorker@ThreadHelpers@@AEAA_NPEAV?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@PEAPEAUIUnknown@@@Z @ 0x18015D408
 * Callers:
 *     ?WorkCallback@ChainedThreadpoolWorker@ThreadHelpers@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180166D60 (-WorkCallback@ChainedThreadpoolWorker@ThreadHelpers@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B028 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

char __fastcall ThreadHelpers::ChainedThreadpoolWorker::GetNextWorkItem(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  RTL_SRWLOCK *v3; // rdi
  _QWORD *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  bool v13; // zf
  __int64 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  std::_Ref_count_base *v20; // rcx

  v3 = (RTL_SRWLOCK *)(a1 + 16);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  if ( *(_QWORD *)(a1 + 56) )
  {
    v7 = *(_QWORD **)(a1 + 24);
    if ( v7 )
      v7 = (_QWORD *)*v7;
    v8 = *(__int64 **)(v7[1] + 8 * (*(_QWORD *)(a1 + 48) & (v7[2] - 1LL)));
    v9 = *v8;
    v10 = v8[1];
    *v8 = 0LL;
    v8[1] = 0LL;
    v11 = (std::_Ref_count_base *)a2[1];
    *a2 = v9;
    a2[1] = v10;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
    v12 = *(std::_Ref_count_base **)(*(_QWORD *)(*(_QWORD *)(a1 + 32)
                                               + 8 * (*(_QWORD *)(a1 + 48) & (*(_QWORD *)(a1 + 40) - 1LL)))
                                   + 8LL);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    v13 = (*(_QWORD *)(a1 + 56))-- == 1LL;
    if ( v13 )
      *(_QWORD *)(a1 + 48) = 0LL;
    else
      ++*(_QWORD *)(a1 + 48);
    v14 = *(__int64 **)(a1 + 64);
    if ( v14 )
      v15 = *v14;
    else
      v15 = 0LL;
    v16 = *(_QWORD *)(a1 + 88) & 1LL;
    v17 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * ((*(_QWORD *)(v15 + 16) - 1LL) & (*(_QWORD *)(a1 + 88) >> 1)));
    v18 = *(_QWORD *)(v17 + 8 * v16);
    *(_QWORD *)(v17 + 8 * v16) = 0LL;
    *a3 = v18;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 72)
                                                                            + 8
                                                                            * ((*(_QWORD *)(a1 + 80) - 1LL) & (*(_QWORD *)(a1 + 88) >> 1)))
                                                                + 8 * (*(_QWORD *)(a1 + 88) & 1LL)));
    v13 = (*(_QWORD *)(a1 + 96))-- == 1LL;
    if ( v13 )
      *(_QWORD *)(a1 + 88) = 0LL;
    else
      ++*(_QWORD *)(a1 + 88);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    return 1;
  }
  else
  {
    *(_BYTE *)(a1 + 120) = 0;
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    v20 = (std::_Ref_count_base *)a2[1];
    a2[1] = 0LL;
    *a2 = 0LL;
    if ( v20 )
      std::_Ref_count_base::_Decref(v20);
    *a3 = 0LL;
    return 0;
  }
}
