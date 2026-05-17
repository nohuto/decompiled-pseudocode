/*
 * XREFs of RtlDeleteCriticalSection @ 0x180010FC0
 * Callers:
 *     RtlDestroyHeap @ 0x180009680 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x18000A8B0 (RtlCreateHeap.c)
 *     RtlDeleteResource @ 0x180010F30 (RtlDeleteResource.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 *     RtlTraceDatabaseDestroy @ 0x180102890 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     RtlpFreeDebugInfo @ 0x180013E00 (RtlpFreeDebugInfo.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwAlertThreadByThreadId @ 0x18009E2D0 (ZwAlertThreadByThreadId.c)
 *     RtlStdReleaseStackTrace @ 0x1801012E0 (RtlStdReleaseStackTrace.c)
 */

__int64 __fastcall RtlDeleteCriticalSection(__int64 *a1)
{
  char *v2; // rcx
  unsigned int v3; // r14d
  __int64 v4; // rsi
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rdx
  signed __int64 v10; // rax
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // rdx
  signed __int64 v14; // rdx
  signed __int64 v15; // rtt
  _QWORD *v16; // r9
  __int64 i; // rcx
  __int64 v18; // rax
  bool v19; // zf
  signed __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  signed __int64 v23; // rax
  _QWORD *v24; // rax

  v2 = (char *)a1[3];
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    v3 = NtClose(v2);
  else
    v3 = 0;
  v4 = *a1;
  if ( (unsigned __int64)(*a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v6 = a1[4] & 0x4000000;
    RtlAcquireSRWLockExclusive(&RtlCriticalSectionLock);
    v7 = v4 + 16;
    v8 = *(_QWORD *)(v4 + 16);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v4 + 24);
      if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
    }
    v10 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, 1LL);
    if ( v10 != 1 )
    {
      do
      {
        v12 = v10 & 6;
        v13 = 3LL;
        if ( v12 != 2 )
          v13 = -1LL;
        v14 = v10 + v13;
        v15 = v10;
        v10 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v14, v10);
      }
      while ( v15 != v10 );
      if ( v12 == 2 )
      {
        while ( (v14 & 1) == 0 )
        {
LABEL_19:
          v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL);
          for ( i = *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8); !i; i = v16[1] )
          {
            v24 = v16;
            v16 = (_QWORD *)*v16;
            v16[2] = v24;
          }
          if ( v16 != (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0uLL) )
            *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = i;
          if ( (*(_DWORD *)(i + 36) & 1) != 0 )
          {
            v18 = *(_QWORD *)(i + 16);
            if ( v18 )
            {
              *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v18;
              *(_QWORD *)(i + 16) = 0LL;
              _InterlockedAnd64(&RtlCriticalSectionLock, 0xFFFFFFFFFFFFFFFBuLL);
              do
              {
LABEL_25:
                v21 = *(_QWORD *)(i + 16);
                v22 = *(_QWORD *)(i + 24);
                _interlockedbittestandset((volatile signed __int32 *)(i + 36), 2u);
                if ( !_interlockedbittestandreset((volatile signed __int32 *)(i + 36), 1u) )
                  ZwAlertThreadByThreadId(v22, v14);
                i = v21;
              }
              while ( v21 );
              goto LABEL_11;
            }
          }
          v20 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, 0LL, v14);
          v19 = v14 == v20;
          v14 = v20;
          if ( v19 )
            goto LABEL_25;
        }
        while ( 1 )
        {
          v23 = _InterlockedCompareExchange64(&RtlCriticalSectionLock, v14 - 4, v14);
          v19 = v14 == v23;
          v14 = v23;
          if ( v19 )
            break;
          if ( (v23 & 1) == 0 )
            goto LABEL_19;
        }
      }
    }
LABEL_11:
    v11 = *(unsigned __int16 *)(v4 + 2) + (*(unsigned __int16 *)(v4 + 44) << 16);
    if ( RtlpStackTraceDatabase )
    {
      if ( (_DWORD)v11 )
      {
        if ( (unsigned int)v11 <= *(_DWORD *)(RtlpStackTraceDatabase + 180) )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(RtlpStackTraceDatabase + 184) - 8 * v11);
          if ( v11 )
          {
            if ( RtlpStackTraceDatabase )
              RtlStdReleaseStackTrace();
          }
        }
      }
    }
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    if ( !v6 )
      RtlpFreeDebugInfo(v4, v11);
  }
  *(_OWORD *)a1 = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  a1[4] = 0LL;
  return v3;
}
