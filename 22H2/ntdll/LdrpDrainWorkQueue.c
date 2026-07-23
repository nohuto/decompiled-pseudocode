/*
 * XREFs of LdrpDrainWorkQueue @ 0x18005FEC4
 * Callers:
 *     LdrUnloadDll @ 0x18000FBF0 (LdrUnloadDll.c)
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180017738 (LdrpInitializeThread.c)
 *     LdrpFindLoadedDll @ 0x18001DB20 (LdrpFindLoadedDll.c)
 *     LdrpLoadDllInternal @ 0x18001FA14 (LdrpLoadDllInternal.c)
 *     LdrpFastpthReloadedDll @ 0x18001FC80 (LdrpFastpthReloadedDll.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrEnumerateLoadedModules @ 0x18005EDC0 (LdrEnumerateLoadedModules.c)
 *     RtlExitUserProcess @ 0x18005EED0 (RtlExitUserProcess.c)
 *     LdrpInitializeImportRedirection @ 0x1800824E4 (LdrpInitializeImportRedirection.c)
 *     RtlPrepareForProcessCloning @ 0x18009BB80 (RtlPrepareForProcessCloning.c)
 *     LdrInitShimEngineDynamic @ 0x1800D0440 (LdrInitShimEngineDynamic.c)
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 *     RtlCloneUserProcess @ 0x1800D6340 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x1800600EC (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x1800602E4 (LdrpUpdateStatistics.c)
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 */

struct _TEB *__fastcall LdrpDrainWorkQueue(int a1)
{
  HANDLE v1; // r14
  char v2; // si
  char v4; // bp
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  struct _TEB *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v1 = LdrpWorkCompleteEvent;
  v2 = 0;
  if ( !a1 )
    v1 = LdrpLoadCompleteEvent;
  while ( 1 )
  {
    while ( 1 )
    {
      RtlEnterCriticalSection(&LdrpWorkQueueLock);
      v4 = LdrpDetourExist;
      if ( !LdrpDetourExist || a1 == 1 )
      {
        v5 = (__int64 *)LdrpWorkQueue;
        if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
          || (v6 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
        {
          __fastfail(3u);
        }
        LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
        *(_QWORD *)(v6 + 8) = &LdrpWorkQueue;
        if ( &LdrpWorkQueue == v5 )
        {
          if ( LdrpWorkInProgress == a1 )
          {
            LdrpWorkInProgress = 1;
            v2 = 1;
          }
        }
        else
        {
          if ( !v4 )
            ++LdrpWorkInProgress;
          LdrpUpdateStatistics();
        }
      }
      else
      {
        if ( LdrpWorkInProgress == a1 )
        {
          LdrpWorkInProgress = 1;
          v2 = 1;
        }
        v5 = &LdrpWorkQueue;
      }
      RtlLeaveCriticalSection(&LdrpWorkQueueLock);
      if ( v2 )
        break;
      if ( &LdrpWorkQueue == v5 )
      {
        NtWaitForSingleObject(v1, 0, 0LL);
      }
      else
      {
        LOBYTE(v7) = v4;
        LdrpProcessWork(v5 - 8, v7);
      }
    }
    if ( !a1 || (__int64 *)LdrpRetryQueue == &LdrpRetryQueue )
      break;
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v9 = LdrpRetryQueue;
    *(_QWORD *)(LdrpRetryQueue + 8) = &LdrpWorkQueue;
    LdrpWorkQueue = v9;
    v10 = qword_18016C3A8;
    *(_QWORD *)qword_18016C3A8 = &LdrpWorkQueue;
    qword_18016C3F8 = v10;
    qword_18016C3A8 = (__int64)&LdrpRetryQueue;
    LdrpRetryQueue = (__int64)&LdrpRetryQueue;
    LdrpRetryingModuleIndex = 0LL;
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    v2 = 0;
  }
  result = NtCurrentTeb();
  result->SameTebFlags |= 0x1000u;
  return result;
}
