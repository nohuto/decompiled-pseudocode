__int64 __fastcall EtwpFlushTrace(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  int LoggerInfoFromContext; // ebx
  __int64 v8; // rdi
  int v9; // r15d
  ACCESS_MASK v10; // r8d
  unsigned __int16 *v11; // rbp
  int v12; // eax
  __int64 v13; // rcx
  UNICODE_STRING v14; // xmm0
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0LL;
  UnicodeString = 0LL;
  result = EtwpValidateLoggerInfo((_DWORD *)a2);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    LoggerInfoFromContext = EtwpAcquireLoggerContext(a1, v5, &v19);
    if ( LoggerInfoFromContext < 0 )
    {
LABEL_15:
      RtlFreeUnicodeString(&UnicodeString);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      return (unsigned int)LoggerInfoFromContext;
    }
    v8 = v19;
    v9 = *(_DWORD *)(v19 + 12);
    v10 = ((v9 & 0x100 | 0x400u) >> 3) | 0x40;
    if ( !*(_QWORD *)(v19 + 800) )
      v10 = (*(_DWORD *)(v19 + 12) & 0x100 | 0x400u) >> 3;
    if ( (v9 & 0x400) != 0 )
    {
      if ( !*(_QWORD *)(a2 + 136) || (v11 = (unsigned __int16 *)(a2 + 128), !*(_WORD *)(a2 + 128)) )
      {
        LoggerInfoFromContext = -1073741809;
        goto LABEL_14;
      }
      v10 |= 0x40u;
    }
    else
    {
      v11 = (unsigned __int16 *)(a2 + 128);
    }
    LoggerInfoFromContext = EtwpCheckLoggerControlAccess(v10, v19);
    if ( LoggerInfoFromContext >= 0 )
    {
      if ( (v9 & 0x400) != 0 )
      {
        LoggerInfoFromContext = EtwpCaptureString(v11, &UnicodeString);
        if ( LoggerInfoFromContext >= 0 )
        {
          v14 = UnicodeString;
          UnicodeString.Buffer = 0LL;
          *(UNICODE_STRING *)(v8 + 184) = v14;
          _InterlockedOr((volatile signed __int32 *)(v8 + 824), 1u);
          v15 = *(_DWORD *)(v8 + 12);
          v8 = v19;
          if ( (v15 & 0x2000000) != 0 )
          {
            v16 = 32LL * *(unsigned __int8 *)(v19 + 818) + a1 + 4284;
            if ( v16 )
            {
              v17 = *(_DWORD *)(v16 + 4);
              if ( (v17 & 4) != 0 && (v17 & 0x100) != 0 )
                EtwpCCSwapStop(*(unsigned int *)(v19 + 200), 0LL);
            }
          }
          v12 = EtwpBufferingModeFlush(v8);
          goto LABEL_11;
        }
      }
      else
      {
        if ( (v9 & 0x40000) == 0 )
        {
          v12 = EtwpSynchronizeWithLogger(v8, 4LL);
LABEL_11:
          LoggerInfoFromContext = v12;
          if ( v12 >= 0 )
          {
            LoggerInfoFromContext = EtwpGetLoggerInfoFromContext(a2, v8);
            if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_FLUSH_TRACE) )
              EtwpEventWriteTemplateSession(v13, &ETW_EVENT_FLUSH_TRACE, v8);
          }
          goto LABEL_14;
        }
        LoggerInfoFromContext = -1073741637;
      }
    }
LABEL_14:
    EtwpReleaseLoggerContext((unsigned int *)v8, 1);
    goto LABEL_15;
  }
  return result;
}
