NTSTATUS __fastcall EtwpLogger(__int64 a1)
{
  __int64 v1; // rbx
  struct _LIST_ENTRY *v2; // r14
  struct _KEVENT *v3; // rsi
  struct _KEVENT *v4; // rbp
  volatile signed __int32 *v5; // r15
  unsigned int v6; // r12d
  __int64 v7; // rdx
  int v8; // r13d
  int Logfile; // edi
  int *v10; // r14
  int active; // eax
  int v12; // esi
  int v13; // eax
  NTSTATUS v14; // edi
  bool v16; // si
  int v17; // eax
  int v18; // edx
  int v19; // r8d
  int v20; // ebp
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rcx
  PVOID Object[2]; // [rsp+40h] [rbp-38h] BYREF
  struct _LIST_ENTRY *v26; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v1 + 32) = KeGetCurrentThread();
  v2 = PsAttachSiloToCurrentThread(*(struct _LIST_ENTRY **)a1);
  v26 = v2;
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 15);
  v3 = (struct _KEVENT *)(v1 + 456);
  KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
  v4 = (struct _KEVENT *)(v1 + 480);
  Object[1] = (PVOID)(v1 + 504);
  v5 = (volatile signed __int32 *)(v1 + 816);
  Object[0] = (PVOID)(v1 + 480);
  if ( *(_DWORD *)(v1 + 320) )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( KeWaitForMultipleObjects((*(_DWORD *)(v1 + 208) != 0) + 1, Object, WaitAny, Executive, 0, 0, 0LL, 0LL) == 1 )
      {
        if ( (*(_DWORD *)(v1 + 824) & 0x400) != 0 )
          _interlockedbittestandreset((volatile signed __int32 *)(v1 + 824), 0xAu);
        KeResetEvent(v4);
        v6 = 1;
      }
      if ( (unsigned __int8)EtwpBootPhase > 3u )
        _InterlockedOr(v5, 4u);
      EtwpAdjustFreeBuffers(v1);
      v8 = *(_DWORD *)(v1 + 824) & 4;
      if ( v8 )
      {
        Logfile = 0;
        if ( *(_DWORD *)(v1 + 208) )
          EtwpResetFlushTimer(v1, 1);
        v6 = 1;
      }
      else
      {
        Logfile = 0;
      }
      if ( (*v5 & 4) != 0 )
        break;
      EtwpFlushActiveBuffers(v1, v6);
LABEL_31:
      if ( !*(_DWORD *)(v1 + 320) )
      {
        v2 = v26;
        goto LABEL_33;
      }
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x80u) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFF7F);
      if ( *(_QWORD *)(v1 + 800) )
      {
        LOBYTE(v7) = 1;
        EtwpFinalizeHeader(v1, v7);
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x100) != 0 )
      _InterlockedOr(v5, 8u);
    else
      _InterlockedAnd(v5, 0xFFFFFFF7);
    if ( (*v5 & 8) != 0 )
    {
      Logfile = EtwpRealtimeCreateLogfile(v1);
      if ( Logfile < 0 && (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      {
        v10 = (int *)(v1 + 40);
LABEL_60:
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SESSION_END_FAILED) )
          EtwpEventWriteTemplateSessionEnd(
            v1 + 152,
            v18,
            v19,
            v1 + 136,
            v1 + 152,
            Logfile,
            *(_DWORD *)(v1 + 12),
            *(_DWORD *)(v1 + 44));
        *v10 = Logfile;
        EtwpStopLoggerInstance(v1);
        goto LABEL_31;
      }
      EtwpRealtimeUpdateConsumers(v1);
      EtwpRealtimeFlushSavedBuffers(v1);
      Logfile = 0;
      if ( *(_DWORD *)(v1 + 344) && *(_DWORD *)(v1 + 424) )
        EtwpRequestFlushTimer(v1, 0);
    }
    if ( (*(_DWORD *)(v1 + 824) & 0x40) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFBF);
      EtwpRealtimeNotifyConsumers(v1);
    }
    if ( (*(_DWORD *)(v1 + 824) & 8) != 0 )
    {
      EtwpRealtimeDisconnectAllConsumers(v1);
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFF7);
      v10 = (int *)(v1 + 40);
      *(_DWORD *)(v1 + 40) = 0;
      KeSetEvent(v3, 0, 0);
    }
    else
    {
      v10 = (int *)(v1 + 40);
    }
    if ( (*(_DWORD *)(v1 + 824) & 3) != 0 )
    {
      v16 = 1;
      if ( (*(_DWORD *)(v1 + 824) & 2) != 0 )
        v16 = *(_QWORD *)(v1 + 800) == 0LL;
      LOBYTE(v7) = 1;
      v17 = EtwpCreateLogFile(v1, v7, 0LL);
      *v10 = v17;
      Logfile = v17;
      if ( v17 < 0 )
      {
        v20 = *(_DWORD *)(v1 + 12);
        if ( (v20 & 8) != 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED) )
          EtwpEventWriteTemplateAdmin(
            v21,
            (unsigned int)&ETW_EVENT_SWITCH_TO_NEW_FILE_FAILED,
            v22,
            v1 + 136,
            v1 + 152,
            Logfile,
            v20);
        v4 = (struct _KEVENT *)(v1 + 480);
      }
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
      if ( Logfile < 0 && v16 )
      {
        v3 = (struct _KEVENT *)(v1 + 456);
        goto LABEL_60;
      }
      Logfile = 0;
    }
    active = EtwpFlushActiveBuffers(v1, v6);
    v12 = active;
    if ( (*(_DWORD *)(v1 + 824) & 1) != 0 && active >= 0 && !v6 )
      v12 = EtwpFlushActiveBuffers(v1, 1LL);
    if ( (*(_DWORD *)(v1 + 824) & 0x1000) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFEFFF);
      if ( *(_QWORD *)(v1 + 800) )
      {
        v23 = EtwpFinalizeHeader(v1, 0LL);
        v12 = v23;
        if ( v23 >= 0 )
        {
          ZwClose(*(HANDLE *)(v1 + 800));
          *(_QWORD *)(v1 + 800) = 0LL;
        }
        else
        {
          *v10 = v23;
        }
      }
    }
    if ( (*(_DWORD *)(v1 + 12) & 0x40) == 0 )
      Logfile = v12;
    v3 = (struct _KEVENT *)(v1 + 456);
    if ( v8 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v1 + 824), 0xFFFFFFFB);
      *v10 = Logfile;
      KeSetEvent((PRKEVENT)(v1 + 456), 0, 0);
    }
    if ( Logfile >= 0 )
      goto LABEL_31;
    goto LABEL_60;
  }
LABEL_33:
  while ( 1 )
  {
    v13 = EtwpFlushActiveBuffers(v1, 1LL);
    v14 = v13;
    if ( v13 < 0 )
      break;
    if ( v13 == 259 )
    {
      if ( (*v5 & 8) == 0 || (v14 = 0, *(_QWORD *)(v1 + 360)) )
        v14 = -1073741823;
      break;
    }
    if ( *(int *)(v1 + 232) <= 0 || *(_DWORD *)(v1 + 232) <= *(_DWORD *)(v1 + 228) )
      break;
    KeWaitForSingleObject(v4, Executive, 0, 0, (PLARGE_INTEGER)&EtwpOneSecond);
  }
  if ( *(_QWORD *)(v1 + 800) )
  {
    EtwpFinalizeHeader(v1, 0LL);
    ZwClose(*(HANDLE *)(v1 + 800));
    *(_QWORD *)(v1 + 800) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 360) )
  {
    EtwpRealtimeSaveState(v1);
    ZwClose(*(HANDLE *)(v1 + 360));
    *(_QWORD *)(v1 + 360) = 0LL;
  }
  *(_DWORD *)(v1 + 40) = v14;
  KeSetEvent(v3, 0, 0);
  if ( v14 < 0 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_STOP_TRACE) )
    EtwpEventWriteTemplateSession(v24, &ETW_EVENT_STOP_TRACE, v1);
  EtwpFreeLoggerContext((PVOID)v1);
  PsDetachSiloFromCurrentThread(v2);
  return PsTerminateSystemThread(v14);
}
