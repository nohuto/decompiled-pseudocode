/*
 * XREFs of EtwpIncrementTraceFile @ 0x140934C34
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     EtwpGenerateFileName @ 0x14068EAAC (EtwpGenerateFileName.c)
 *     EtwpSynchronizeWithLogger @ 0x14069BD8C (EtwpSynchronizeWithLogger.c)
 *     EtwpReleaseLoggerContext @ 0x1406BC818 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContext @ 0x140712790 (EtwpAcquireLoggerContext.c)
 *     EtwpValidateLoggerInfo @ 0x1407128B4 (EtwpValidateLoggerInfo.c)
 *     EtwpGetLoggerInfoFromContext @ 0x1407129F4 (EtwpGetLoggerInfoFromContext.c)
 */

__int64 __fastcall EtwpIncrementTraceFile(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // edi
  __int64 v8; // rbx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  result = EtwpValidateLoggerInfo(a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(v5, v4, &v9);
    if ( LoggerInfoFromContext >= 0 )
    {
      v8 = v9;
      if ( (*(_DWORD *)(v9 + 12) & 8) != 0 )
      {
        v8 = v9;
        if ( (*(_DWORD *)(v9 + 836) & 1) == 0 )
        {
          EtwpSynchronizeWithLogger(v9, 4u);
          EtwpGenerateFileName(
            (unsigned __int16 *)(v8 + 184),
            (volatile signed __int32 *)(v8 + 312),
            (UNICODE_STRING *)(v8 + 200));
          LoggerInfoFromContext = EtwpSynchronizeWithLogger(v8, 1u);
        }
        if ( LoggerInfoFromContext >= 0 )
          LoggerInfoFromContext = EtwpGetLoggerInfoFromContext((__int64)a2, v8);
      }
      else
      {
        LoggerInfoFromContext = -1073741811;
      }
      EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    }
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)LoggerInfoFromContext;
  }
  return result;
}
