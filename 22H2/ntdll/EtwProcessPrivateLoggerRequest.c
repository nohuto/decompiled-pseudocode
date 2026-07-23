/*
 * XREFs of EtwProcessPrivateLoggerRequest @ 0x180049AF0
 * Callers:
 *     EtwpProcessNotification @ 0x1800457F0 (EtwpProcessNotification.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     EtwpStartUmLogger @ 0x1800482B0 (EtwpStartUmLogger.c)
 *     EtwpStopUmLogger @ 0x18004BEF0 (EtwpStopUmLogger.c)
 *     EtwpQueryUmLogger @ 0x18004F944 (EtwpQueryUmLogger.c)
 *     EtwpFlushUmLogger @ 0x18004FA7C (EtwpFlushUmLogger.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     EtwpIncrementUmLoggerFile @ 0x180110EC0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x180111380 (EtwpUpdateUmLogger.c)
 */

__int64 __fastcall EtwProcessPrivateLoggerRequest(char *a1)
{
  __int128 v2; // xmm6
  int *v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rax
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  ULONG started; // eax
  int v12; // ebx
  int v13; // r14d
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // [rsp+50h] [rbp+20h] BYREF
  int v20; // [rsp+58h] [rbp+28h] BYREF

  if ( *((_DWORD *)a1 + 1) < 0xF8u )
    return 4209LL;
  v2 = *(_OWORD *)(a1 + 56);
  v3 = (int *)(a1 + 72);
  v4 = *((_DWORD *)a1 + 18);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 5);
  if ( v4 < 0xB0 || (*((_DWORD *)a1 + 29) & 0x20000) == 0 )
    goto LABEL_24;
  v5 = *((_QWORD *)a1 + 12) - *(_QWORD *)&SystemTraceControlGuid.Data1;
  if ( !v5 )
    v5 = *((_QWORD *)a1 + 13) - *(_QWORD *)SystemTraceControlGuid.Data4;
  if ( !v5 )
  {
LABEL_24:
    v12 = 13;
    goto LABEL_21;
  }
  v6 = *((_DWORD *)a1 + 19);
  v20 = 0;
  v19 = 0;
  RtlAcquireSRWLockExclusive(&EtwpPrivSessionLock);
  v10 = v6 - 1;
  if ( !v10 )
  {
    started = EtwpStartUmLogger(v8, &v20, &v19, (__int64)v3);
LABEL_9:
    v12 = started;
    goto LABEL_10;
  }
  v15 = v10 - 1;
  if ( !v15 )
  {
    started = EtwpStopUmLogger(v8, v7, v9, v3);
    goto LABEL_9;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    started = EtwpQueryUmLogger(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    started = EtwpUpdateUmLogger(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    started = EtwpFlushUmLogger(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  if ( v18 == 1 )
  {
    started = EtwpIncrementUmLoggerFile(v4, &v20, &v19, v3);
    goto LABEL_9;
  }
  v12 = 87;
LABEL_10:
  RtlReleaseSRWLockExclusive(&EtwpPrivSessionLock);
  if ( v12 )
  {
LABEL_21:
    v13 = 76;
    goto LABEL_12;
  }
  v13 = *v3 + 72;
LABEL_12:
  memset(a1, 0, 0x48uLL);
  *((_DWORD *)a1 + 1) = v13;
  *(_DWORD *)a1 = 4;
  *(_OWORD *)(a1 + 40) = v2;
  *((_DWORD *)a1 + 8) = NtCurrentTeb()->ClientId.UniqueProcess;
  if ( v12 )
    *v3 = v12;
  return 0LL;
}
