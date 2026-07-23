/*
 * XREFs of VfDeadlockAcquireResource @ 0x1409DE5C8
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x1409DB500 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1409DB550 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x1409DB720 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1409DB820 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x1409DB990 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x1409DBA00 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeInitializeMutant @ 0x1409DBBD0 (VerifierKeInitializeMutant.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x1409DC860 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     ViKeObjectAcquired @ 0x1409DD204 (ViKeObjectAcquired.c)
 *     VerifierExAcquireResourceExclusiveLite @ 0x1409E2AE0 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1409E2BB0 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1409E2C80 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x1409E2D50 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1409E2FC0 (VerifierExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x1409E3060 (VerifierExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1409E3100 (VerifierExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x1409E3180 (VerifierExEnterPriorityRegionAndAcquireResourceShared.c)
 *     VerifierExAcquireFastMutex @ 0x1409E5710 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexUnsafe @ 0x1409E5840 (VerifierExAcquireFastMutexUnsafe.c)
 *     VerifierExTryToAcquireFastMutex @ 0x1409E5A30 (VerifierExTryToAcquireFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1405A26E8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2760 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x1409DF838 (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x1409DFA78 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x1409DFB38 (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x1409DFB94 (ViDeadlockAnalyze.c)
 *     ViDeadlockCanProceed @ 0x1409DFE08 (ViDeadlockCanProceed.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x1409E00A0 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x1409E0120 (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x1409E02AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E02E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1409E05A8 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x1409E0818 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x1409E0BE8 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x1409E0D30 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x1409E0DD8 (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x1409E0E68 (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x1409E0F14 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1409E0F48 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockAcquireResource(ULONG_PTR a1, int a2, __int64 a3, unsigned int a4, PVOID a5)
{
  ULONG_PTR v6; // r13
  PVOID result; // rax
  void *v9; // rdi
  __int64 v10; // r14
  USHORT v11; // ax
  unsigned int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rax
  void *v15; // rsi
  int v16; // r15d
  __int64 v17; // rax
  void *v18; // r11
  int *v19; // rsi
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // r15
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rdx
  _QWORD *v26; // r9
  int *v27; // rdi
  _QWORD *v28; // r10
  int v29; // eax
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  int *v32; // r10
  int *v33; // r9
  __int64 v34; // rdx
  _QWORD *v35; // rdx
  int v36; // ecx
  _QWORD *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // r8
  _QWORD *v41; // rdx
  _OWORD *v42; // rax
  __int64 v43; // rax
  unsigned __int8 v44; // [rsp+34h] [rbp-8Dh]
  PVOID v45; // [rsp+38h] [rbp-89h]
  PVOID v46; // [rsp+40h] [rbp-81h]
  PVOID Entry; // [rsp+50h] [rbp-71h] BYREF
  int v49; // [rsp+58h] [rbp-69h]
  PVOID v50; // [rsp+60h] [rbp-61h]
  int v51; // [rsp+68h] [rbp-59h]
  PVOID v52; // [rsp+70h] [rbp-51h]
  PVOID v53; // [rsp+78h] [rbp-49h] BYREF
  __int64 v54; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[8]; // [rsp+90h] [rbp-31h] BYREF

  v6 = a2;
  v54 = (__int64)a5;
  result = memset(BackTrace, 0, sizeof(BackTrace));
  v49 = 0;
  v9 = 0LL;
  v53 = 0LL;
  Entry = 0LL;
  if ( (_DWORD)v6 == 8 )
  {
    if ( !VfWin32kDllBase )
      return result;
    if ( VfWin32kDllBase > (unsigned __int64)a5 )
      return result;
    result = (PVOID)(VfWin32kDllBase + (unsigned int)VfWin32kSizeOfImage);
    if ( result <= a5 )
      return result;
  }
  result = (PVOID)ViDeadlockCanProceed(a1);
  if ( !(_DWORD)result )
    return result;
  result = (PVOID)ViIsThreadInsidePagingCodePaths();
  if ( (_DWORD)result )
    return result;
  result = ViDeadlockGlobals;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return result;
  result = ViDeadlockGlobals;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return result;
  v50 = 0LL;
  v10 = 0LL;
  v51 = ViDeadlockResourceTypeInfo[v6];
  v45 = (PVOID)ViDeadlockAllocate(3LL);
  v52 = (PVOID)ViDeadlockAllocate(2LL);
  v46 = (PVOID)ViDeadlockAllocate(1LL);
  v11 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v12 = v11;
  if ( !v11 )
  {
    BackTrace[0] = a5;
    v12 = 1;
  }
  if ( v12 < 8 )
    BackTrace[v12] = 0LL;
  v44 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v13 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v50 = v52, v52 = 0LL, !v50) )
  {
LABEL_50:
    v15 = v46;
    goto LABEL_51;
  }
  v10 = ViDeadlockSearchThread(a3);
  if ( !v10 )
  {
    v14 = ViDeadlockAddThread(a3, v45);
    v45 = 0LL;
    v10 = v14;
    if ( !v14 )
    {
      v15 = v46;
      v16 = 0;
      goto LABEL_53;
    }
    LODWORD(v9) = 1;
  }
  if ( (_DWORD)v6 != 8 )
  {
    v17 = ViDeadlockSearchResource(a1, &Entry, 1LL);
    v18 = 0LL;
    v19 = (int *)v17;
    if ( !v17 )
    {
      v15 = v46;
      if ( !(unsigned int)ViDeadlockAddResource(a1, (__int64)&v53, (__int64)&Entry) )
      {
        if ( (_DWORD)v9 )
        {
          v16 = 1;
          ViDeadlockRemoveThread(v10);
          goto LABEL_52;
        }
LABEL_51:
        v16 = 0;
        goto LABEL_52;
      }
      v46 = 0LL;
      v19 = (int *)ViDeadlockSearchResource(a1, &Entry, v20);
      v18 = 0LL;
    }
    v21 = *v19;
    if ( *v19 != (_DWORD)v6 )
    {
      if ( ((unsigned int)(v6 - 3) > 1 || (unsigned int)(v21 - 3) > 1) && (v21 != 7 || (unsigned int)(v6 - 5) > 1) )
      {
        ViDeadlockPreprocessOptions(
          byte_140C12F48,
          "Acquiring lock 0x%p using mismatched API for this lock type.",
          (const void *)0x1008);
        VfReportIssueWithOptions(0xC4u, 0x1008uLL, a1, *v19, v6, byte_140C12F48);
        goto LABEL_35;
      }
      *v19 = v6;
    }
    if ( (unsigned int)(v6 - 5) <= 1 )
      v22 = *(_QWORD *)(v10 + 8);
    else
      v22 = *(_QWORD *)(v10 + 16);
    v23 = *((_QWORD *)v19 + 2);
    if ( v23 && v23 != v10 )
      *((_WORD *)v19 + 3) = 0;
    v24 = *((_WORD *)v19 + 3) + 1;
    *((_QWORD *)v19 + 2) = v10;
    *((_WORD *)v19 + 3) = v24;
    if ( v22 )
    {
      if ( v24 > 1u )
      {
        if ( (v51 & 1) != 0 )
          goto LABEL_20;
        ViDeadlockPreprocessOptions(
          &dword_140C12F44,
          "Lock 0x%p doesn't support recursive acquire.",
          (const void *)0x1000);
        VfReportIssueWithOptions(0xC4u, 0x1000uLL, a1, (ULONG_PTR)v19, v10, &dword_140C12F44);
LABEL_35:
        v15 = v46;
        v16 = 0;
        goto LABEL_52;
      }
      v25 = a4;
      v26 = *(_QWORD **)(v22 + 8);
      if ( v26 != (_QWORD *)(v22 + 8) )
      {
        while ( 1 )
        {
          v27 = (int *)(v26 - 3);
          if ( (unsigned int)ViDeadlockSimilarNode(a1, v25, v26 - 3, *v26) )
            break;
          if ( v26 == v28 )
            goto LABEL_47;
        }
        ViDeadlockCheckDuplicatesAmongChildren(v22, v27, &Entry);
        goto LABEL_85;
      }
LABEL_47:
      if ( *((_WORD *)v19 + 2) )
      {
        if ( !(_DWORD)v25 )
        {
          v29 = ViDeadlockAnalyze(a1, v22, 1, 0, v54);
          v18 = 0LL;
          if ( v29 )
            goto LABEL_50;
        }
      }
    }
    else
    {
      v32 = v19 + 6;
      v33 = (int *)*((_QWORD *)v19 + 3);
      if ( v33 != v19 + 6 )
      {
        v34 = a4;
        while ( 1 )
        {
          v27 = v33 - 10;
          v33 = *(int **)v33;
          if ( *(void **)v27 == v18 )
          {
            if ( (unsigned int)ViDeadlockSimilarNode(a1, v34, v27, v33) )
              break;
          }
          if ( v33 == v32 )
            goto LABEL_76;
        }
        ViDeadlockCheckDuplicatesAmongRoots(v27, &Entry);
        goto LABEL_85;
      }
LABEL_76:
      v49 = 1;
    }
    v27 = (int *)v50;
    v50 = v18;
    *((_QWORD *)v27 + 9) = 0LL;
    *((_QWORD *)v27 + 8) = v18;
    v35 = v27 + 6;
    *((_QWORD *)v27 + 10) = v18;
    *((_QWORD *)v27 + 18) = v18;
    *(_QWORD *)v27 = v22;
    *((_QWORD *)v27 + 7) = v19;
    v36 = *((_DWORD *)ViDeadlockGlobals + 8201);
    *((_QWORD *)v27 + 2) = v27 + 2;
    *((_QWORD *)v27 + 1) = v27 + 2;
    *((_QWORD *)v27 + 4) = v27 + 6;
    *((_QWORD *)v27 + 3) = v27 + 6;
    v27[18] = 2 * (a4 & 1 | (4 * v36));
    if ( v49 == (_DWORD)v18 )
    {
      v37 = (_QWORD *)(v22 + 8);
      v38 = *(_QWORD *)(v22 + 8);
      if ( *(_QWORD *)(v38 + 8) != v22 + 8 )
        goto LABEL_81;
      *v35 = v38;
      *((_QWORD *)v27 + 4) = v37;
      *(_QWORD *)(v38 + 8) = v35;
      *v37 = v35;
      ViDeadlockUpdateChildrenCount(v22, 1LL);
    }
    v39 = v19 + 6;
    v40 = *((_QWORD *)v19 + 3);
    v41 = v27 + 10;
    if ( *(int **)(v40 + 8) == v19 + 6 )
    {
      *v41 = v40;
      *((_QWORD *)v27 + 6) = v39;
      *(_QWORD *)(v40 + 8) = v41;
      *v39 = v41;
      ++*((_WORD *)v19 + 2);
      if ( (unsigned __int16)v19[1] > 0xFFF0u )
        ViDeadlockState |= 0x20u;
LABEL_85:
      if ( v27 )
      {
        v27[18] |= 1u;
        *((_QWORD *)v27 + 8) = v10;
        if ( (unsigned int)(v6 - 5) <= 1 )
          *(_QWORD *)(v10 + 8) = v27;
        else
          *(_QWORD *)(v10 + 16) = v27;
        ++*(_DWORD *)(v10 + 40);
        v42 = *(_OWORD **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_OWORD *)v27 + 9) = v42[5];
          *((_OWORD *)v27 + 10) = v42[6];
          *((_OWORD *)v27 + 11) = v42[7];
          *((_OWORD *)v27 + 12) = v42[8];
        }
        v43 = *((_QWORD *)v27 + 7);
        *((_OWORD *)v27 + 5) = *(_OWORD *)BackTrace;
        *((_OWORD *)v27 + 6) = *(_OWORD *)&BackTrace[2];
        *((_OWORD *)v27 + 7) = *(_OWORD *)&BackTrace[4];
        *((_OWORD *)v27 + 8) = *(_OWORD *)&BackTrace[6];
        *(_OWORD *)(v43 + 120) = *((_OWORD *)v27 + 5);
        *(_OWORD *)(v43 + 136) = *((_OWORD *)v27 + 6);
        *(_OWORD *)(v43 + 152) = *((_OWORD *)v27 + 7);
        *(_OWORD *)(v43 + 168) = *((_OWORD *)v27 + 8);
      }
      goto LABEL_20;
    }
LABEL_81:
    __fastfail(3u);
  }
  *(_BYTE *)(v10 + 48) = 1;
LABEL_20:
  v15 = v46;
  v16 = 0;
LABEL_52:
  v9 = v45;
LABEL_53:
  if ( MEMORY[0xFFFFF78000000320] - v13 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v13;
  ViDeadlockDetectionUnlock(1LL);
  ViLowerIrql(v44);
  v30 = Entry;
  if ( Entry )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      ViDeadlockFree(v30);
      v30 = v31;
    }
    while ( v31 );
  }
  if ( v53 )
    ViDeadlockFree(v53);
  if ( v16 )
    ViDeadlockFree((PVOID)v10);
  if ( v50 )
    ViDeadlockFree(v50);
  if ( v15 )
    ViDeadlockFree(v15);
  result = v52;
  if ( v52 )
    result = (PVOID)ViDeadlockFree(v52);
  if ( v9 )
    return (PVOID)ViDeadlockFree(v9);
  return result;
}
