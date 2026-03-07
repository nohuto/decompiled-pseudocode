__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStWorker(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // esi
  int v4; // ecx
  int v5; // edi
  struct _KTHREAD *CurrentThread; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ecx
  __int64 result; // rax
  __int64 UnbiasedInterruptTime; // rax
  struct _KTHREAD *v11; // rcx
  bool v12; // zf
  char v13; // al
  struct _KTHREAD *v14; // rcx
  _DWORD *v15; // rdi
  struct _KTHREAD *v16; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  int v18; // [rsp+90h] [rbp+38h] BYREF
  int v19; // [rsp+98h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+A0h] [rbp+48h] BYREF
  LARGE_INTEGER Interval; // [rsp+A8h] [rbp+50h] BYREF

  v1 = *(_QWORD *)a1;
  v19 = 0;
  v3 = 0;
  IoSetThreadHardErrorMode(0);
  BugCheckParameter1 = (ULONG_PTR)KeGetCurrentThread();
  KeSetActualBasePriorityThread(BugCheckParameter1);
  v4 = 0;
  v5 = 0;
  if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
  {
    SmSetThreadPagePriority(&BugCheckParameter1, 0LL);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiChargeResident(
                         *(void **)(qword_140C67048 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25]),
                         0x1AuLL,
                         1024LL) )
    {
      --CurrentThread->SpecialApcDisable;
      LOBYTE(CurrentThread[1].Queue) |= 4u;
    }
    else
    {
      v3 = -1073741670;
    }
    v4 = v3;
    v5 = v3;
    *(_DWORD *)(BugCheckParameter1 + 1380) |= 2u;
    v3 = v3 >= 0;
  }
  *(_DWORD *)(a1 + 32) = v4;
  KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
  if ( v5 >= 0 )
  {
    Object[0] = (PVOID)(v1 + 6128);
    Object[1] = (PVOID)(v1 + 6152);
    while ( 1 )
    {
LABEL_7:
      v7 = KeWaitForMultipleObjects(
             2u,
             Object,
             WaitAny,
             Executive,
             0,
             0,
             (PLARGE_INTEGER)((v1 + 6600) & -(__int64)(*(_QWORD *)(v1 + 6600) != 0LL)),
             0LL);
      v18 = v7;
      v8 = v7;
      if ( v7 < 2 )
        goto LABEL_8;
      if ( v7 == 258 )
      {
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
        ST_STORE<SM_TRAITS>::StDrainReadContextList((union _SLIST_HEADER *)v1);
        *(_QWORD *)(v1 + 5928) += *(_QWORD *)(v1 + 5920);
        UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
        ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v1 + 5744, UnbiasedInterruptTime);
        if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
          KeAbPostRelease(v1 + 6024);
          v11 = KeGetCurrentThread();
          v12 = v11->SpecialApcDisable++ == -1;
          if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != &v11->152 )
            KiCheckForKernelApcDelivery();
        }
        v8 = 0;
        v18 = 0;
LABEL_8:
        if ( !v8 )
        {
          KeResetEvent((PRKEVENT)Object[0]);
          while ( 1 )
          {
            while ( 1 )
            {
              v15 = (_DWORD *)SMKM_STORE<SM_TRAITS>::SmStWorkItemGet(v1, &v19);
              if ( !v15 )
                goto LABEL_7;
              SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(v1);
              v13 = *(_BYTE *)(v1 + 6021);
              if ( (v13 & 1) == 0 || v19 )
                break;
              ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(v1, v15);
LABEL_28:
              if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
                KeAbPostRelease(v1 + 6024);
                v14 = KeGetCurrentThread();
                v12 = v14->SpecialApcDisable++ == -1;
                if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
                  KiCheckForKernelApcDelivery();
              }
            }
            if ( (v13 & 2) == 0 || (*v15 & 7) != 0 )
            {
              v18 = ST_STORE<SM_TRAITS>::StWorkItemProcess(v1, v15);
              if ( v18 == 259 )
                goto LABEL_28;
            }
            else
            {
              v18 = -1073741058;
            }
            if ( (*(_BYTE *)(v1 + 6021) & 4) != 0 )
            {
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 6024));
              KeAbPostRelease(v1 + 6024);
              v16 = KeGetCurrentThread();
              v12 = v16->SpecialApcDisable++ == -1;
              if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
                KiCheckForKernelApcDelivery();
            }
            SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFree(*(_QWORD *)(v1 + 6728), v1, v15, &v18);
          }
        }
        if ( v8 == 1 )
          break;
      }
    }
  }
  if ( v3 )
    MmSetHardFaultBehavior(KeGetCurrentThread(), 0LL);
  Interval.QuadPart = -150000LL;
  while ( 1 )
  {
    result = *(unsigned int *)(v1 + 6740);
    if ( !(_DWORD)result )
      break;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  return result;
}
