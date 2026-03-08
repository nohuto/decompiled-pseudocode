/*
 * XREFs of VfDeadlockAcquireResource @ 0x140AD3DAC
 * Callers:
 *     ViDeadlockExAcquireFastMutexUnsafe_Exit @ 0x140AD5FD0 (ViDeadlockExAcquireFastMutexUnsafe_Exit.c)
 *     ViDeadlockExAcquireFastMutex_Exit @ 0x140AD6010 (ViDeadlockExAcquireFastMutex_Exit.c)
 *     ViDeadlockExAcquireSharedStarveExclusive_Exit @ 0x140AD6050 (ViDeadlockExAcquireSharedStarveExclusive_Exit.c)
 *     ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit @ 0x140AD6090 (ViDeadlockExEnterCriticalRegionAndAcquireResourceExclusive_Exit.c)
 *     ViDeadlockExTryToAcquireFastMutex_Exit @ 0x140AD6130 (ViDeadlockExTryToAcquireFastMutex_Exit.c)
 *     ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit @ 0x140AD62D0 (ViDeadlockKeAcquireInStackQueuedSpinLockRaiseToSynch_Exit.c)
 *     ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit @ 0x140AD6310 (ViDeadlockKeAcquireSpinLockRaiseToDpc_Exit.c)
 *     ViDeadlockKeInitializeMutant_Exit @ 0x140AD6350 (ViDeadlockKeInitializeMutant_Exit.c)
 *     ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit @ 0x140AD64C0 (ViDeadlockKeTryToAcquireSpinLockAtDpcLevel_Exit.c)
 *     ViDeadlockObjectAcquired @ 0x140AD6750 (ViDeadlockObjectAcquired.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1405CF698 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405CF710 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140ABD79A (ViDeadlockCanProceed.c)
 *     ViDeadlockAddResource @ 0x140AD53DC (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x140AD5624 (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x140AD56E4 (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x140AD5740 (ViDeadlockAnalyze.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140AD5BD4 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140AD5C54 (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x140AD5DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD5E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140AD6280 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD6830 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140AD6C20 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140AD6D80 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140AD6E28 (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x140AD6EB8 (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x140AD6F60 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140AD6FA0 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockAcquireResource(LONG *a1, int a2, __int64 a3, unsigned int a4, PVOID a5)
{
  ULONG_PTR v6; // rdi
  PVOID result; // rax
  void *v9; // r15
  __int64 v10; // r14
  USHORT v11; // ax
  int v12; // ecx
  __int64 v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r10d
  void *v16; // rsi
  int v17; // edi
  __int64 v18; // rax
  __int64 v19; // r8
  void *v20; // r11
  int *v21; // rsi
  int v22; // ecx
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  __int64 v27; // r15
  __int64 v28; // r9
  int *v29; // rdi
  int v30; // eax
  int *v31; // r9
  int *v32; // r10
  __int64 v33; // rdx
  _QWORD *v34; // rdx
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  int v39; // eax
  _OWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rcx
  _QWORD *v43; // rbx
  unsigned __int8 v44; // [rsp+34h] [rbp-8Dh]
  __int64 v45; // [rsp+38h] [rbp-89h]
  PVOID v46; // [rsp+40h] [rbp-81h]
  PVOID Entry; // [rsp+50h] [rbp-71h] BYREF
  int v49; // [rsp+58h] [rbp-69h]
  PVOID v50; // [rsp+60h] [rbp-61h]
  int v51; // [rsp+68h] [rbp-59h]
  int v52; // [rsp+6Ch] [rbp-55h]
  PVOID v53; // [rsp+70h] [rbp-51h]
  PVOID v54; // [rsp+78h] [rbp-49h] BYREF
  __int64 v55; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[8]; // [rsp+90h] [rbp-31h] BYREF

  v6 = a2;
  v52 = a2;
  v55 = (__int64)a5;
  result = memset(BackTrace, 0, sizeof(BackTrace));
  v49 = 0;
  v9 = 0LL;
  v54 = 0LL;
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
  v45 = ViDeadlockAllocate(3LL);
  v53 = (PVOID)ViDeadlockAllocate(2LL);
  v46 = (PVOID)ViDeadlockAllocate(1LL);
  v11 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v12 = v11;
  if ( !v11 )
  {
    BackTrace[0] = a5;
    v12 = 1;
LABEL_12:
    BackTrace[v12] = 0LL;
    goto LABEL_13;
  }
  if ( v11 < 8u )
    goto LABEL_12;
LABEL_13:
  v44 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v13 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v50 = v53, v53 = 0LL, !v50) )
  {
    v16 = v46;
    goto LABEL_77;
  }
  v10 = ViDeadlockSearchThread(a3);
  if ( v10 )
  {
    v15 = 1;
    goto LABEL_19;
  }
  v14 = ViDeadlockAddThread(a3, v45);
  v45 = 0LL;
  v10 = v14;
  v15 = 1;
  if ( v14 )
  {
    LODWORD(v9) = 1;
LABEL_19:
    if ( (_DWORD)v6 == 8 )
    {
      *(_BYTE *)(v10 + 48) = 1;
LABEL_21:
      v16 = v46;
      v17 = 0;
LABEL_79:
      v9 = (void *)v45;
      goto LABEL_80;
    }
    v18 = ViDeadlockSearchResource(a1, &Entry);
    v20 = 0LL;
    v21 = (int *)v18;
    if ( v18 )
    {
LABEL_25:
      v22 = *v21;
      v15 = 1;
      if ( *v21 != (_DWORD)v6 )
      {
        if ( ((unsigned int)(v6 - 3) > 1 || (unsigned int)(v22 - 3) > 1) && (v22 != 7 || (unsigned int)(v6 - 5) > 1) )
        {
          ViDeadlockPreprocessOptions(
            byte_140C0DD64,
            "Acquiring lock 0x%p using mismatched API for this lock type.",
            (const void *)0x1008);
          VfReportIssueWithOptions(0xC4u, 0x1008uLL, (ULONG_PTR)a1, *v21, v6, byte_140C0DD64);
LABEL_36:
          v16 = v46;
          v17 = 0;
LABEL_78:
          v15 = 1;
          goto LABEL_79;
        }
        *v21 = v6;
      }
      if ( (unsigned int)(v6 - 5) <= 1 )
        v23 = *(_QWORD *)(v10 + 8);
      else
        v23 = *(_QWORD *)(v10 + 16);
      v24 = *((_QWORD *)v21 + 2);
      if ( v24 && v24 != v10 )
        *((_WORD *)v21 + 3) = 0;
      v25 = *((_WORD *)v21 + 3) + 1;
      *((_QWORD *)v21 + 2) = v10;
      *((_WORD *)v21 + 3) = v25;
      if ( v23 )
      {
        if ( v25 > 1u )
        {
          if ( (v51 & 1) != 0 )
            goto LABEL_21;
          ViDeadlockPreprocessOptions(
            &dword_140C0DD74,
            "Lock 0x%p doesn't support recursive acquire.",
            (const void *)0x1000);
          VfReportIssueWithOptions(0xC4u, 0x1000uLL, (ULONG_PTR)a1, (ULONG_PTR)v21, v10, &dword_140C0DD74);
          goto LABEL_36;
        }
        v26 = a4;
        v27 = v23 + 8;
        v28 = *(_QWORD *)(v23 + 8);
        while ( v28 != v27 )
        {
          v29 = (int *)(v28 - 24);
          if ( (unsigned int)ViDeadlockSimilarNode(a1, v26, v28 - 24) )
          {
            ViDeadlockCheckDuplicatesAmongChildren(v23, v29, &Entry);
            goto LABEL_65;
          }
        }
        if ( !*((_WORD *)v21 + 2)
          || (_DWORD)v26
          || (v30 = ViDeadlockAnalyze((_DWORD)a1, v23, v15, 0, v55), v20 = 0LL, v15 = 1, !v30) )
        {
          v31 = v21 + 6;
LABEL_59:
          v29 = (int *)v50;
          v50 = v20;
          *((_QWORD *)v29 + 9) = 0LL;
          *((_QWORD *)v29 + 8) = v20;
          v34 = v29 + 6;
          *((_QWORD *)v29 + 10) = v20;
          *((_QWORD *)v29 + 18) = v20;
          *(_QWORD *)v29 = v23;
          *((_QWORD *)v29 + 7) = v21;
          v35 = *((_DWORD *)ViDeadlockGlobals + 8201);
          *((_QWORD *)v29 + 2) = v29 + 2;
          *((_QWORD *)v29 + 1) = v29 + 2;
          *((_QWORD *)v29 + 4) = v29 + 6;
          *((_QWORD *)v29 + 3) = v29 + 6;
          v29[18] = 2 * (v15 & a4 | (4 * v35));
          if ( v49 == (_DWORD)v20 )
          {
            v36 = *(_QWORD *)v27;
            if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) != v27 )
              goto LABEL_63;
            *v34 = v36;
            *((_QWORD *)v29 + 4) = v27;
            *(_QWORD *)(v36 + 8) = v34;
            *(_QWORD *)v27 = v34;
            ViDeadlockUpdateChildrenCount(v23, v15, v19, v31);
          }
          v37 = *(_QWORD *)v31;
          v38 = v29 + 10;
          if ( *(int **)(*(_QWORD *)v31 + 8LL) != v31 )
LABEL_63:
            __fastfail(3u);
          *v38 = v37;
          *((_QWORD *)v29 + 6) = v31;
          *(_QWORD *)(v37 + 8) = v38;
          *(_QWORD *)v31 = v38;
          *((_WORD *)v21 + 2) += v15;
          if ( (unsigned __int16)v21[1] > 0xFFF0u )
            ViDeadlockState |= 0x20u;
LABEL_69:
          v39 = v52;
          v29[18] |= v15;
          *((_QWORD *)v29 + 8) = v10;
          if ( v39 - 5 <= v15 )
            *(_QWORD *)(v10 + 8) = v29;
          else
            *(_QWORD *)(v10 + 16) = v29;
          *(_DWORD *)(v10 + 40) += v15;
          v40 = *(_OWORD **)v29;
          if ( *(_QWORD *)v29 )
          {
            *((_OWORD *)v29 + 9) = v40[5];
            *((_OWORD *)v29 + 10) = v40[6];
            *((_OWORD *)v29 + 11) = v40[7];
            *((_OWORD *)v29 + 12) = v40[8];
          }
          v41 = *((_QWORD *)v29 + 7);
          *((_OWORD *)v29 + 5) = *(_OWORD *)BackTrace;
          *((_OWORD *)v29 + 6) = *(_OWORD *)&BackTrace[2];
          *((_OWORD *)v29 + 7) = *(_OWORD *)&BackTrace[4];
          *((_OWORD *)v29 + 8) = *(_OWORD *)&BackTrace[6];
          *(_OWORD *)(v41 + 120) = *((_OWORD *)v29 + 5);
          *(_OWORD *)(v41 + 136) = *((_OWORD *)v29 + 6);
          *(_OWORD *)(v41 + 152) = *((_OWORD *)v29 + 7);
          *(_OWORD *)(v41 + 168) = *((_OWORD *)v29 + 8);
          goto LABEL_21;
        }
      }
      else
      {
        v31 = v21 + 6;
        v32 = (int *)*((_QWORD *)v21 + 3);
        if ( v32 == v21 + 6 )
        {
LABEL_58:
          v15 = 1;
          v27 = 8LL;
          v49 = 1;
          goto LABEL_59;
        }
        v33 = a4;
        while ( 1 )
        {
          v29 = v32 - 10;
          v32 = *(int **)v32;
          if ( *(void **)v29 == v20 )
          {
            if ( (unsigned int)ViDeadlockSimilarNode(a1, v33, v29) )
              break;
          }
          if ( v32 == v31 )
            goto LABEL_58;
        }
        ViDeadlockCheckDuplicatesAmongRoots(v29, &Entry);
LABEL_65:
        v15 = 1;
        if ( v29 )
          goto LABEL_69;
      }
      v16 = v46;
      v17 = 0;
      goto LABEL_79;
    }
    v16 = v46;
    if ( (unsigned int)ViDeadlockAddResource((int)a1, (__int64)&v54, (__int64)&Entry) )
    {
      v46 = 0LL;
      v21 = (int *)ViDeadlockSearchResource(a1, &Entry);
      v20 = 0LL;
      goto LABEL_25;
    }
    if ( (_DWORD)v9 )
    {
      v17 = 1;
      ViDeadlockRemoveThread(v10);
      v15 = 1;
      goto LABEL_79;
    }
LABEL_77:
    v17 = 0;
    goto LABEL_78;
  }
  v16 = v46;
  v17 = 0;
LABEL_80:
  if ( MEMORY[0xFFFFF78000000320] - v13 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v13;
  ViDeadlockDetectionUnlock(v15);
  ViLowerIrql(v44);
  v42 = Entry;
  if ( Entry )
  {
    do
    {
      v43 = (_QWORD *)*v42;
      ViDeadlockFree(v42);
      v42 = v43;
    }
    while ( v43 );
  }
  if ( v54 )
    ViDeadlockFree(v54);
  if ( v17 )
    ViDeadlockFree((PVOID)v10);
  if ( v50 )
    ViDeadlockFree(v50);
  if ( v16 )
    ViDeadlockFree(v16);
  result = v53;
  if ( v53 )
    result = (PVOID)ViDeadlockFree(v53);
  if ( v9 )
    return (PVOID)ViDeadlockFree(v9);
  return result;
}
