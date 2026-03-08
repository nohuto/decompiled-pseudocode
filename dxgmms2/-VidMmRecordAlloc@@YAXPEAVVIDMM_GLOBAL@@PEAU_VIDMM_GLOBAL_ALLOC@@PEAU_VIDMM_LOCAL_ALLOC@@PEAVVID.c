/*
 * XREFs of ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C008A6F4
 * Callers:
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0086BA0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0087210 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0087A08 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0087D78 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089F2C (-FindNewAllocOwner@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1C00A1840 (-OpenLocalAllocation@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVVIDM.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00F90C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00F97D0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     ?DriverId@VIDMM_SEGMENT@@QEAAKXZ @ 0x1C0001414 (-DriverId@VIDMM_SEGMENT@@QEAAKXZ.c)
 *     ?GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z @ 0x1C008A84C (-GetCommitmentInformation@VIDMM_PROCESS@@QEAAPEAU_VIDMM_PROCESS_COMMITMENT_INFO@@KK@Z.c)
 */

void __fastcall VidMmRecordAlloc(__int64 a1, __int64 a2, __int64 a3, VIDMM_SEGMENT *a4, __int64 a5, int a6)
{
  unsigned int v7; // esi
  __int64 v8; // rbp
  __int64 v9; // r8
  int v10; // r13d
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rdi
  struct _VIDMM_PROCESS_COMMITMENT_INFO *CommitmentInformation; // rax
  struct _VIDMM_PROCESS_COMMITMENT_INFO *v15; // r8
  __int64 v16; // rdx
  unsigned int i; // ecx
  __int64 v18; // rdx
  int v19; // r9d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r9
  int v26; // edx
  __int64 v27; // rax

  v7 = *((_DWORD *)a4 + 5);
  v8 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 240LL);
  v10 = VIDMM_SEGMENT::DriverId(a4);
  v12 = *(_DWORD *)(v11 + 64);
  v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL) + 8 * v8);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v13 + 440, 0LL);
  CommitmentInformation = VIDMM_PROCESS::GetCommitmentInformation(*(VIDMM_PROCESS **)(a3 + 8), v8, v7);
  v15 = CommitmentInformation;
  if ( !v12 || (v12 & 0x1F) == v10 )
  {
    v22 = *((_DWORD *)CommitmentInformation + 16);
    v23 = *((_QWORD *)v15 + 9);
    if ( a6 )
    {
      *((_DWORD *)v15 + 16) = v22 - 1;
      *((_QWORD *)v15 + 9) = v23 - a5;
    }
    else
    {
      *((_DWORD *)v15 + 16) = v22 + 1;
      *((_QWORD *)v15 + 9) = v23 + a5;
    }
  }
  else
  {
    v16 = 1LL;
    for ( i = 6; i < 0x1E; i += 6 )
    {
      if ( ((v12 >> i) & 0x1F) == v10 )
      {
        v18 = 2 * v16;
        v19 = *((_DWORD *)CommitmentInformation + 2 * v18 + 16);
        if ( a6 )
          v20 = v19 - 1;
        else
          v20 = v19 + 1;
        v21 = a5 + *((_QWORD *)CommitmentInformation + v18 + 9);
        if ( a6 )
          v21 = *((_QWORD *)v15 + v18 + 9) - a5;
        *((_QWORD *)v15 + v18 + 9) = v21;
        *((_DWORD *)v15 + 2 * v18 + 16) = v20;
        goto LABEL_10;
      }
      v16 = (unsigned int)(v16 + 1);
    }
    v24 = *((_DWORD *)CommitmentInformation + 36);
    v25 = *((_QWORD *)v15 + 19);
    v26 = v24 + 1;
    if ( a6 )
      v26 = v24 - 1;
    v27 = a5 + v25;
    if ( a6 )
      v27 = v25 - a5;
    *((_QWORD *)v15 + 19) = v27;
    *((_DWORD *)v15 + 36) = v26;
  }
LABEL_10:
  ExReleasePushLockExclusiveEx(v13 + 440, 0LL);
  KeLeaveCriticalRegion();
}
