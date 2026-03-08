/*
 * XREFs of ?QueryProcessSegmentStatistics@VIDMM_GLOBAL@@QEAAJGIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C00EE944
 * Callers:
 *     ?VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@GIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION@@@Z @ 0x1C002CD80 (-VidMmQueryProcessSegmentStatistics@@YAJPEAVVIDMM_GLOBAL@@GIPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERY.c)
 * Callees:
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C008A84C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C00C4290 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z @ 0x1C00EF340 (-GetProcessWorkingSetInformation@VIDMM_PROCESS@@QEAAXPEAVVIDMM_SEGMENT@@PEA_K1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::QueryProcessSegmentStatistics(
        VIDMM_GLOBAL *this,
        unsigned __int16 a2,
        unsigned int a3,
        struct VIDMM_PROCESS *a4,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *a5)
{
  unsigned int v5; // r11d
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  __int64 v12; // r8
  __int64 v13; // r10
  struct _VIDMM_PROCESS_COMMITMENT_INFO *v14; // rdi
  __int64 v15; // r9
  struct _D3DKMT_QUERYSTATISTICS_PROCESS_SEGMENT_INFORMATION *v16; // rbx
  struct VIDMM_SEGMENT *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v5 = *((_DWORD *)this + 1754);
  if ( a2 >= v5 )
  {
    WdLogSingleEntry2(3LL, a2, v5);
    return 3221225485LL;
  }
  v9 = 1616LL * a2;
  v10 = *((_QWORD *)this + 5028);
  if ( a3 >= *(_DWORD *)(v9 + v10 + 32) )
    return 3221225485LL;
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(
                            a4,
                            *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                            *(_DWORD *)(v9 + v10 + 28) + a3);
  v14 = CommitmentInformation;
  if ( !CommitmentInformation )
    return 3221225485LL;
  v15 = 5LL;
  v16 = a5;
  v17 = *(struct VIDMM_SEGMENT **)(*(_QWORD *)(v13 + 3712) + 8 * v12);
  v18 = CommitmentInformation - a5;
  *((_DWORD *)a5 + 8) = *((_DWORD *)CommitmentInformation + 14);
  *((_QWORD *)v16 + 16) = *((_QWORD *)CommitmentInformation + 19);
  *((_DWORD *)v16 + 30) = *((_DWORD *)CommitmentInformation + 36);
  v19 = (_QWORD *)((char *)v16 + 48);
  *((_QWORD *)v16 + 17) = *((_QWORD *)CommitmentInformation + 20);
  do
  {
    *v19 = *(_QWORD *)((char *)v19 + v18 + 24);
    *((_DWORD *)v19 - 2) = *(_DWORD *)((char *)v19 + v18 + 16);
    v19 += 2;
    --v15;
  }
  while ( v15 );
  v22 = 0LL;
  v21[0] = 0LL;
  VIDMM_PROCESS::GetProcessWorkingSetInformation(a4, v17, &v22, v21);
  v20 = v22;
  *((_QWORD *)v16 + 2) = v21[0];
  *((_QWORD *)v16 + 1) = v20;
  *((_QWORD *)v16 + 18) = (int)VIDMM_POLICY::IsActive((struct _VIDMM_PROCESS_COMMITMENT_INFO *)((char *)v14 + 168));
  *(_QWORD *)v16 = *((_QWORD *)v14 + 2);
  *((_DWORD *)v16 + 6) = *((_DWORD *)v14 + 45);
  return 0LL;
}
