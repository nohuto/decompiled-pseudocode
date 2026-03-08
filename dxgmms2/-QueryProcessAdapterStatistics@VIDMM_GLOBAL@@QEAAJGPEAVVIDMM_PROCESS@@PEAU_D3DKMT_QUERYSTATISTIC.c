/*
 * XREFs of ?QueryProcessAdapterStatistics@VIDMM_GLOBAL@@QEAAJGPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00EE688
 * Callers:
 *     ?VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@GPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C002CD40 (-VidMmQueryProcessAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@GPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYS.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00012D0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C008A84C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C00C4290 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessAdapterStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        struct VIDMM_PROCESS *a3,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *a4)
{
  __int64 v5; // rbp
  unsigned int v6; // ecx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned int v13; // r8d
  unsigned int v14; // r13d
  __int64 v15; // rbp
  __int64 v16; // r15
  __int64 v17; // r12
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // r11
  _BYTE v23[8]; // [rsp+20h] [rbp-48h] BYREF
  DXGPUSHLOCK *v24; // [rsp+28h] [rbp-40h]
  int v25; // [rsp+30h] [rbp-38h]

  v5 = a2;
  v6 = *((_DWORD *)this + 1754);
  if ( a2 < v6 )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)this + 5134, 0);
    DXGPUSHLOCK::AcquireShared(v24);
    v10 = *((_QWORD *)this + 3);
    v25 = 1;
    v11 = 0;
    v12 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 8LL * *(unsigned int *)(v10 + 240));
    if ( v12 )
    {
      *(_DWORD *)a4 = *(_DWORD *)(1616 * v5 + *((_QWORD *)this + 5028) + 32);
      *((_QWORD *)a4 + 3) = *(_QWORD *)(v12 + 456);
      *((_DWORD *)a4 + 4) = *(_DWORD *)(v12 + 448);
      *((_DWORD *)a4 + 8) = *(_DWORD *)(v12 + 464);
      *((_DWORD *)a4 + 9) = *(_DWORD *)(v12 + 468);
      *((_QWORD *)a4 + 23) = 1LL;
      *((_QWORD *)a4 + 22) = *(int *)(v12 + 484);
      *((_QWORD *)a4 + 21) = (int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(v12 + 472));
      v13 = 0;
      *(_OWORD *)((char *)a4 + 40) = 0LL;
      *(_OWORD *)((char *)a4 + 56) = 0LL;
      *(_OWORD *)((char *)a4 + 72) = 0LL;
      v14 = *(_DWORD *)a4;
      if ( *(_DWORD *)a4 )
      {
        v15 = *((_QWORD *)a4 + 8);
        v16 = *((_QWORD *)a4 + 9);
        v17 = *((_QWORD *)a4 + 10);
        do
        {
          CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                                    a3,
                                    *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                    v13);
          v13 = v19 + 1;
          *((_QWORD *)a4 + 5) = *((_QWORD *)CommitmentInformation + 20) + v20;
          *((_QWORD *)a4 + 6) = *((_QWORD *)CommitmentInformation + 9) + v21;
          *((_QWORD *)a4 + 7) = *((_QWORD *)CommitmentInformation + 11) + v22;
          v15 += *((_QWORD *)CommitmentInformation + 13);
          *((_QWORD *)a4 + 8) = v15;
          v16 += *((_QWORD *)CommitmentInformation + 15);
          *((_QWORD *)a4 + 9) = v16;
          v17 += *((_QWORD *)CommitmentInformation + 17);
          *((_QWORD *)a4 + 10) = v17;
        }
        while ( v13 < v14 );
      }
    }
    else
    {
      v11 = -1073741811;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
    return v11;
  }
  else
  {
    WdLogSingleEntry2(3LL, a2, v6);
    return 3221225485LL;
  }
}
