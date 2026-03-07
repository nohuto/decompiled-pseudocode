__int64 __fastcall EtwpStopTrace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v6; // r14
  __int64 result; // rax
  __int16 v8; // dx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  struct _KEVENT *v11; // rbx
  __int64 Lock; // rdi
  struct _LIST_ENTRY *Flink; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  LARGE_INTEGER Timeout; // [rsp+30h] [rbp-38h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  P = 0LL;
  Timeout.QuadPart = -2000000000LL;
  v6 = a3;
  result = EtwpValidateLoggerInfo(a2, 0xFFFFFFFFLL, a3, a4);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread->KernelApcDisable += v8;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, a2, &P);
    if ( LoggerInfoFromContext >= 0 )
    {
      v11 = (struct _KEVENT *)P;
      if ( !v6 )
      {
        if ( (*((_DWORD *)P + 3) & 0x40) != 0 )
        {
          EtwpReleaseLoggerContext((unsigned int *)P, 1);
          LoggerInfoFromContext = -1073741535;
          goto LABEL_22;
        }
        LoggerInfoFromContext = EtwpCheckLoggerControlAccess(0x80u, (__int64)P);
        if ( LoggerInfoFromContext < 0 )
        {
          EtwpReleaseLoggerContext((unsigned int *)v11, 1);
          goto LABEL_22;
        }
      }
      Lock = (unsigned int)v11->Header.Lock;
      if ( (HIDWORD(v11->Header.WaitListHead.Flink) & 0x400) == 0 )
      {
        Flink = v11[1].Header.WaitListHead.Flink;
        ObReferenceObjectByPointer(Flink, 0x100000u, (POBJECT_TYPE)PsThreadType, 0);
        KeResetEvent(v11 + 19);
        v14 = (unsigned int)Lock;
        if ( ExAcquireRundownProtectionCacheAwareEx(
               *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * Lock),
               1u) )
        {
          LoggerInfoFromContext = EtwpStopLoggerInstance(v11);
          if ( LoggerInfoFromContext < 0 )
            ExReleaseRundownProtectionCacheAwareEx(
              *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v14),
              1u);
        }
        else
        {
          LoggerInfoFromContext = -2147483611;
        }
        EtwpReleaseLoggerContext((unsigned int *)v11, 1);
        if ( LoggerInfoFromContext >= 0 )
        {
          if ( SLODWORD(v11[1].Header.WaitListHead.Blink) >= 0 )
          {
            while ( KeWaitForSingleObject(&v11[19], Executive, 0, 0, &Timeout) == 258 )
              ;
          }
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
          if ( LoggerInfoFromContext >= 0 )
          {
            LoggerInfoFromContext = (int)v11[1].Header.WaitListHead.Blink;
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
              EtwpEventWriteTemplateSession(v15, &ETW_EVENT_STOP_TRACE, v11);
          }
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 448) + 8 * v14), 1u);
        }
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        if ( LoggerInfoFromContext >= 0 )
          KeWaitForSingleObject(Flink, Executive, 0, 0, 0LL);
        ObfDereferenceObject(Flink);
        return (unsigned int)LoggerInfoFromContext;
      }
      LoggerInfoFromContext = EtwpStopLoggerInstance(v11);
      EtwpReleaseLoggerContext((unsigned int *)v11, 1);
      if ( LoggerInfoFromContext >= 0 )
      {
        LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v11);
        EtwpFreeLoggerContext((char *)v11);
      }
    }
LABEL_22:
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
