/*
 * XREFs of VfDeadlockReleaseResource @ 0x140AD4ECC
 * Callers:
 *     ViDeadlockExReleaseFastMutexUnsafe_Entry @ 0x140AD60D0 (ViDeadlockExReleaseFastMutexUnsafe_Entry.c)
 *     ViDeadlockExReleaseFastMutex_Entry @ 0x140AD6100 (ViDeadlockExReleaseFastMutex_Entry.c)
 *     ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry @ 0x140AD63C0 (ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry.c)
 *     ViDeadlockKeReleaseMutant_Entry @ 0x140AD6400 (ViDeadlockKeReleaseMutant_Entry.c)
 *     ViDeadlockKeReleaseMutex_Entry @ 0x140AD6430 (ViDeadlockKeReleaseMutex_Entry.c)
 *     ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry @ 0x140AD6460 (ViDeadlockKeReleaseSpinLockFromDpcLevel_Entry.c)
 *     ViDeadlockKeReleaseSpinLock_Entry @ 0x140AD6490 (ViDeadlockKeReleaseSpinLock_Entry.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfReportIssueWithOptions @ 0x1405CD8E0 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1405CF698 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405CF710 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x140ABD79A (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x140AD5DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD5E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140AD6280 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x140AD6830 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x140AD6C20 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x140AD6D80 (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x140AD6E28 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x140AD6FA0 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockReleaseResource(LONG *a1, int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // rdi
  int v8; // r12d
  PVOID result; // rax
  __int64 *v10; // r15
  __int64 *v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r10d
  unsigned __int8 v14; // si
  __int64 v15; // rbx
  int *v16; // rax
  int *v17; // rsi
  int v18; // eax
  __int16 v19; // cx
  ULONG_PTR v20; // rax
  __int64 v21; // r12
  __int64 *v22; // rdi
  __int16 v23; // cx
  _DWORD *v24; // rax
  unsigned int v25; // eax
  __int64 **v26; // rcx
  __int64 *v27; // rax
  __int64 **v28; // rcx
  __int64 *v29; // rax
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  unsigned __int8 v32; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[8]; // [rsp+50h] [rbp-88h] BYREF

  v4 = a2;
  Entry = 0LL;
  memset(BackTrace, 0, sizeof(BackTrace));
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
  if ( (_WORD)v12 )
  {
    if ( (unsigned __int16)v12 >= 8u )
      goto LABEL_9;
  }
  else
  {
    BackTrace[0] = a4;
    v12 = 1LL;
  }
  BackTrace[v12] = 0LL;
LABEL_9:
  v32 = ViRaiseIrqlToDpcLevel();
  v14 = v32;
  ViDeadlockDetectionLock(v13);
  v15 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v16 = (int *)ViDeadlockSearchResource(a1, &Entry);
    v17 = v16;
    if ( !v16 )
    {
LABEL_57:
      v14 = v32;
      goto LABEL_58;
    }
    v18 = *v16;
    if ( v18 == (_DWORD)v4 )
      goto LABEL_15;
    if ( v18 == 7 )
    {
      if ( (unsigned int)(v4 - 5) <= 1 )
      {
        *v17 = v4;
        v18 = v4;
        goto LABEL_15;
      }
    }
    else if ( v18 == 1 && (_DWORD)v4 == 2 )
    {
      if ( *((_WORD *)v17 + 3) > 1u )
        *((_WORD *)v17 + 3) = 1;
LABEL_15:
      v19 = *((_WORD *)v17 + 3);
      if ( v19 )
      {
        v11 = (__int64 *)*((_QWORD *)v17 + 2);
        v21 = *v11;
        if ( (unsigned int)(v18 - 5) <= 1 )
          v22 = (__int64 *)v11[1];
        else
          v22 = (__int64 *)v11[2];
        v23 = v19 - 1;
        *((_WORD *)v17 + 3) = v23;
        if ( v23 )
        {
          v8 = 0;
        }
        else
        {
          v24 = ViDeadlockGlobals;
          *((_QWORD *)v17 + 2) = 0LL;
          ++v24[8210];
          if ( (int *)v22[7] == v17 )
          {
            *((_DWORD *)v22 + 18) &= ~1u;
            v10 = v22;
          }
          else
          {
            ++v24[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v22[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v17] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v22[7] + 8),
                v11,
                a1);
              ViDeadlockPreprocessOptions(
                byte_140C0DD5C,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v22[7] + 8),
                v11);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v22[7] + 8),
                (ULONG_PTR)v11,
                byte_140C0DD5C);
            }
            while ( (int *)v22[7] != v17 )
            {
              v22 = (__int64 *)*v22;
              if ( !v22 )
                goto LABEL_39;
            }
            v10 = v22;
            v25 = v22[9] & 0xFFFFFFFE;
            *((_DWORD *)v22 + 18) = v25;
            if ( (v25 & 4) == 0 )
              ++*((_DWORD *)ViDeadlockGlobals + 8209);
            *((_DWORD *)v22 + 18) |= 4u;
          }
LABEL_39:
          if ( (unsigned int)(*v17 - 5) <= 1 )
          {
            v28 = (__int64 **)v11[1];
            if ( v28 )
            {
              do
              {
                if ( ((_DWORD)v28[9] & 1) != 0 && v28[8] == v11 )
                  break;
                v29 = *v28;
                v11[1] = (__int64)*v28;
                v28 = (__int64 **)v29;
              }
              while ( v29 );
            }
          }
          else
          {
            v26 = (__int64 **)v11[2];
            if ( v26 )
            {
              do
              {
                if ( ((_DWORD)v26[9] & 1) != 0 && v26[8] == v11 )
                  break;
                v27 = *v26;
                v11[2] = (__int64)*v26;
                v26 = (__int64 **)v27;
              }
              while ( v27 );
            }
          }
          if ( !v10 )
            goto LABEL_55;
          v10[8] = 0LL;
          --*((_DWORD *)v11 + 10);
          if ( v21 != a3 )
            *((_DWORD *)v10 + 18) |= 4u;
          if ( *((_DWORD *)v11 + 10) )
          {
LABEL_55:
            v8 = 0;
          }
          else
          {
            v8 = 1;
            ViDeadlockRemoveThread((__int64)v11);
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        ViDeadlockSearchThread(a3);
        ViDeadlockPreprocessOptions(
          &dword_140C0DD70,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v20 = ViDeadlockSearchThread(a3);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v17, v20, &dword_140C0DD70);
      }
      goto LABEL_56;
    }
    ViDeadlockPreprocessOptions(
      byte_140C0DD6C,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v17, v4, byte_140C0DD6C);
LABEL_56:
    *(_OWORD *)(v17 + 46) = *(_OWORD *)BackTrace;
    *(_OWORD *)(v17 + 50) = *(_OWORD *)&BackTrace[2];
    *(_OWORD *)(v17 + 54) = *(_OWORD *)&BackTrace[4];
    *(_OWORD *)(v17 + 58) = *(_OWORD *)&BackTrace[6];
    goto LABEL_57;
  }
LABEL_58:
  if ( MEMORY[0xFFFFF78000000320] - v15 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v15;
  ViDeadlockDetectionUnlock(1LL);
  result = (PVOID)ViLowerIrql(v14);
  v30 = Entry;
  if ( Entry )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      result = (PVOID)ViDeadlockFree(v30);
      v30 = v31;
    }
    while ( v31 );
  }
  if ( v8 )
    return (PVOID)ViDeadlockFree(v11);
  return result;
}
