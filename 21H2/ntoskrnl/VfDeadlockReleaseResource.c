/*
 * XREFs of VfDeadlockReleaseResource @ 0x1409DF338
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x1409DBFB0 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x1409DC070 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1409DC140 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x1409DC230 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x1409DC310 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLock @ 0x1409DC3D0 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409DC440 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x1409E5900 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x1409E5990 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1402C1720 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405A2024 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1405A26E8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2760 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x1409DFE08 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x1409E02AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E02E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x1409E05A8 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x1409E0818 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x1409E0BE8 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x1409E0D30 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x1409E0DD8 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1409E0F48 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockReleaseResource(const void *a1, int a2, __int64 a3, void *a4)
{
  __int64 *v4; // r14
  ULONG_PTR v6; // rdi
  int v9; // esi
  PVOID result; // rax
  __int64 *v11; // r13
  unsigned int v12; // ecx
  PVOID v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rbx
  int *v17; // rax
  int *v18; // rsi
  int v19; // eax
  __int16 v20; // cx
  ULONG_PTR v21; // rax
  __int64 v22; // r12
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
  unsigned __int8 v34; // [rsp+40h] [rbp-49h]
  int v35; // [rsp+44h] [rbp-45h]
  PVOID Entry; // [rsp+48h] [rbp-41h] BYREF
  __int64 v37; // [rsp+50h] [rbp-39h]
  PVOID BackTrace[8]; // [rsp+60h] [rbp-29h] BYREF

  v4 = 0LL;
  v37 = a3;
  v6 = a2;
  Entry = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
  v35 = 0;
  v9 = 0;
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
  v11 = 0LL;
  v12 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v13 = BackTrace[0];
  if ( !v12 )
    v13 = a4;
  BackTrace[0] = v13;
  v14 = 1LL;
  if ( v12 )
    v14 = v12;
  if ( (unsigned int)v14 < 8 )
    BackTrace[v14] = 0LL;
  v34 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(1LL);
  v16 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v17 = (int *)ViDeadlockSearchResource(a1, &Entry, v15);
    v18 = v17;
    if ( !v17 )
    {
      v9 = 0;
      goto LABEL_59;
    }
    v19 = *v17;
    if ( v19 == (_DWORD)v6 )
      goto LABEL_17;
    if ( v19 == 7 )
    {
      if ( (unsigned int)(v6 - 5) <= 1 )
      {
        *v18 = v6;
        v19 = v6;
        goto LABEL_17;
      }
    }
    else if ( v19 == 1 && (_DWORD)v6 == 2 )
    {
      if ( *((_WORD *)v18 + 3) > 1u )
        *((_WORD *)v18 + 3) = 1;
      v19 = 1;
LABEL_17:
      v20 = *((_WORD *)v18 + 3);
      if ( v20 )
      {
        v4 = (__int64 *)*((_QWORD *)v18 + 2);
        v22 = *v4;
        if ( (unsigned int)(v19 - 5) <= 1 )
          v23 = (__int64 *)v4[1];
        else
          v23 = (__int64 *)v4[2];
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
            v11 = v23;
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
                v4,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140C12F54,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v23[7] + 8),
                v4);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v23[7] + 8),
                (ULONG_PTR)v4,
                byte_140C12F54);
            }
            while ( (int *)v23[7] != v18 )
            {
              v23 = (__int64 *)*v23;
              if ( !v23 )
                goto LABEL_42;
            }
            *((_DWORD *)v23 + 18) &= ~1u;
            v11 = v23;
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
            v29 = (__int64 **)v4[1];
            if ( v29 )
            {
              do
              {
                if ( ((_DWORD)v29[9] & 1) != 0 && v29[8] == v4 )
                  break;
                v30 = *v29;
                v4[1] = (__int64)*v29;
                v29 = (__int64 **)v30;
              }
              while ( v30 );
            }
          }
          else
          {
            v27 = (__int64 **)v4[2];
            if ( v27 )
            {
              do
              {
                if ( ((_DWORD)v27[9] & 1) != 0 && v27[8] == v4 )
                  break;
                v28 = *v27;
                v4[2] = (__int64)*v27;
                v27 = (__int64 **)v28;
              }
              while ( v28 );
            }
          }
          if ( v11 )
          {
            v11[8] = 0LL;
            v31 = --*((_DWORD *)v4 + 10);
            if ( v22 != v37 )
            {
              *((_DWORD *)v11 + 18) |= 4u;
              v31 = *((_DWORD *)v4 + 10);
            }
            if ( !v31 )
            {
              v35 = 1;
              ViDeadlockRemoveThread((__int64)v4);
            }
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        ViDeadlockSearchThread(a3);
        ViDeadlockPreprocessOptions(
          &dword_140C12F3C,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v21 = ViDeadlockSearchThread(a3);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v18, v21, &dword_140C12F3C);
      }
      goto LABEL_57;
    }
    ViDeadlockPreprocessOptions(
      byte_140C12F40,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v18, v6, byte_140C12F40);
LABEL_57:
    *(_OWORD *)(v18 + 46) = *(_OWORD *)BackTrace;
    *(_OWORD *)(v18 + 50) = *(_OWORD *)&BackTrace[2];
    *(_OWORD *)(v18 + 54) = *(_OWORD *)&BackTrace[4];
    *(_OWORD *)(v18 + 58) = *(_OWORD *)&BackTrace[6];
    v9 = v35;
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
  if ( v9 )
    return (PVOID)ViDeadlockFree(v4);
  return result;
}
