/*
 * XREFs of VfDeadlockReleaseResource @ 0x140A985B4
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140A7F4E0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseSpinLock @ 0x140A7F570 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140A96020 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140A96070 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x140A960C0 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x140A96130 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x140A96180 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x140A9C2E0 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x140A9C360 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405FFA20 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x140601864 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406018DC (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140A7F8F2 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140A994FC (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140A997C0 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140A99A38 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140A99E14 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140A99F58 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140A9A000 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140A9A170 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockReleaseResource(LONG *a1, int a2, __int64 a3, void *a4)
{
  ULONG_PTR v5; // rdi
  int v8; // r14d
  PVOID result; // rax
  __int64 *v10; // r13
  __int64 *v11; // rbp
  USHORT v12; // ax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int *v17; // rax
  int *v18; // r14
  int v19; // eax
  __int16 v20; // cx
  ULONG_PTR v21; // rax
  BOOL v22; // r15d
  __int64 *v23; // rdi
  __int16 v24; // cx
  _DWORD *v25; // rax
  int v26; // eax
  __int64 **v27; // rcx
  __int64 *v28; // rax
  __int64 **v29; // rcx
  __int64 *v30; // rax
  int v31; // eax
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  unsigned __int8 v34; // [rsp+40h] [rbp-A8h]
  int v35; // [rsp+44h] [rbp-A4h]
  PVOID Entry; // [rsp+48h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+50h] [rbp-98h]
  PVOID BackTrace[8]; // [rsp+60h] [rbp-88h] BYREF

  v37 = a3;
  v5 = a2;
  Entry = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  v35 = 0;
  v8 = 0;
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
  v10 = 0LL;
  v11 = 0LL;
  v12 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v13 = v12;
  if ( !v12 )
  {
    BackTrace[0] = a4;
    v14 = 1LL;
LABEL_10:
    BackTrace[v14] = 0LL;
    goto LABEL_11;
  }
  v14 = 1LL;
  if ( v13 )
    v14 = v13;
  if ( (unsigned int)v14 < 8 )
    goto LABEL_10;
LABEL_11:
  v34 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v16 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v17 = (int *)ViDeadlockSearchResource(a1, &Entry, v15);
    v18 = v17;
    if ( !v17 )
    {
      v8 = 0;
      goto LABEL_59;
    }
    v19 = *v17;
    if ( v19 == (_DWORD)v5 )
      goto LABEL_17;
    if ( v19 == 7 )
    {
      if ( (unsigned int)(v5 - 5) <= 1 )
      {
        *v18 = v5;
        v19 = v5;
        goto LABEL_17;
      }
    }
    else if ( v19 == 1 && (_DWORD)v5 == 2 )
    {
      if ( *((_WORD *)v18 + 3) > 1u )
        *((_WORD *)v18 + 3) = 1;
      v19 = 1;
LABEL_17:
      v20 = *((_WORD *)v18 + 3);
      if ( v20 )
      {
        v11 = (__int64 *)*((_QWORD *)v18 + 2);
        v22 = *v11 != v37;
        if ( (unsigned int)(v19 - 5) <= 1 )
          v23 = (__int64 *)v11[1];
        else
          v23 = (__int64 *)v11[2];
        v24 = v20 - 1;
        *((_WORD *)v18 + 3) = v24;
        if ( !v24 )
        {
          v25 = ViDeadlockGlobals;
          *((_QWORD *)v18 + 2) = 0LL;
          ++v25[8210];
          if ( (int *)v23[7] == v18 )
          {
            *((_DWORD *)v23 + 18) &= ~1u;
            v10 = v23;
          }
          else
          {
            ++v25[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v23[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v18] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v23[7] + 8),
                v11,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140C0D9C8,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v23[7] + 8),
                v11);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v23[7] + 8),
                (ULONG_PTR)v11,
                byte_140C0D9C8);
            }
            while ( (int *)v23[7] != v18 )
            {
              v23 = (__int64 *)*v23;
              if ( !v23 )
                goto LABEL_42;
            }
            *((_DWORD *)v23 + 18) &= ~1u;
            v10 = v23;
            v26 = *((_DWORD *)v23 + 18);
            if ( (v26 & 4) == 0 )
            {
              ++*((_DWORD *)ViDeadlockGlobals + 8209);
              v26 = *((_DWORD *)v23 + 18);
            }
            *((_DWORD *)v23 + 18) = v26 | 4;
          }
LABEL_42:
          if ( (unsigned int)(*v18 - 5) <= 1 )
          {
            v29 = (__int64 **)v11[1];
            if ( v29 )
            {
              do
              {
                if ( ((_DWORD)v29[9] & 1) != 0 && v29[8] == v11 )
                  break;
                v30 = *v29;
                v11[1] = (__int64)*v29;
                v29 = (__int64 **)v30;
              }
              while ( v30 );
            }
          }
          else
          {
            v27 = (__int64 **)v11[2];
            if ( v27 )
            {
              do
              {
                if ( ((_DWORD)v27[9] & 1) != 0 && v27[8] == v11 )
                  break;
                v28 = *v27;
                v11[2] = (__int64)*v27;
                v27 = (__int64 **)v28;
              }
              while ( v28 );
            }
          }
          if ( v10 )
          {
            v10[8] = 0LL;
            v31 = --*((_DWORD *)v11 + 10);
            if ( v22 )
            {
              *((_DWORD *)v10 + 18) |= 4u;
              v31 = *((_DWORD *)v11 + 10);
            }
            if ( !v31 )
            {
              v35 = 1;
              ViDeadlockRemoveThread((__int64)v11);
            }
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        ViDeadlockSearchThread(a3);
        ViDeadlockPreprocessOptions(
          &dword_140C0D9E0,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v21 = ViDeadlockSearchThread(a3);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v18, v21, &dword_140C0D9E0);
      }
      goto LABEL_57;
    }
    ViDeadlockPreprocessOptions(
      byte_140C0D9DC,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v18, v5, byte_140C0D9DC);
LABEL_57:
    *(_OWORD *)(v18 + 46) = *(_OWORD *)BackTrace;
    *(_OWORD *)(v18 + 50) = *(_OWORD *)&BackTrace[2];
    *(_OWORD *)(v18 + 54) = *(_OWORD *)&BackTrace[4];
    *(_OWORD *)(v18 + 58) = *(_OWORD *)&BackTrace[6];
    v8 = v35;
  }
LABEL_59:
  if ( MEMORY[0xFFFFF78000000320] - v16 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v16;
  ViDeadlockDetectionUnlock(1LL);
  result = (PVOID)ViLowerIrql(v34);
  v32 = Entry;
  if ( Entry )
  {
    do
    {
      v33 = (_QWORD *)*v32;
      result = (PVOID)ViDeadlockFree(v32);
      v32 = v33;
    }
    while ( v33 );
  }
  if ( v8 )
    return (PVOID)ViDeadlockFree(v11);
  return result;
}
