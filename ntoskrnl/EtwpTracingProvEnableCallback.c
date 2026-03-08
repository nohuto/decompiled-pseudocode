/*
 * XREFs of EtwpTracingProvEnableCallback @ 0x140861AF0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     EtwpReleaseLoggerContext @ 0x14069349C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140693AFC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetNextGuidEntry @ 0x140693F10 (EtwpGetNextGuidEntry.c)
 *     EtwpEventWriteEnableInfo @ 0x1409E0734 (EtwpEventWriteEnableInfo.c)
 *     EtwpEventWriteGuidEntry @ 0x1409E082C (EtwpEventWriteGuidEntry.c)
 *     EtwpEventWriteRegEntry @ 0x1409E0A5C (EtwpEventWriteRegEntry.c)
 *     EtwpEventWriteTemplateSession @ 0x1409E0E14 (EtwpEventWriteTemplateSession.c)
 */

void __fastcall EtwpTracingProvEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // rcx
  char v5; // bp
  unsigned int i; // ebx
  signed __int64 *j; // rdx
  unsigned int *v8; // rax
  __int64 v9; // rcx
  unsigned int *v10; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rcx
  unsigned int v13; // edi
  _DWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  signed __int64 *NextGuidEntry; // rax
  signed __int64 *v18; // rbx
  signed __int64 *k; // rdx
  signed __int64 v20; // rax
  struct _KTHREAD *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // edi
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // r8
  signed __int64 *m; // rdi
  __int64 v28; // rcx
  signed __int64 *v29; // rax
  signed __int64 *v30; // rbx

  if ( ControlCode == 2 )
  {
    v4 = EtwpHostSiloState;
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(EtwpHostSiloState + 16); ++i )
    {
      v8 = EtwpAcquireLoggerContextByLoggerId(v4, i, 0);
      v10 = v8;
      if ( v8 )
      {
        EtwpEventWriteTemplateSession(v9, ETW_EVENT_SESSION_INFO, v8);
        EtwpReleaseLoggerContext(v10, 0);
      }
      v4 = EtwpHostSiloState;
    }
    for ( j = 0LL; ; j = v18 )
    {
      NextGuidEntry = EtwpGetNextGuidEntry(v4, j, 2);
      v18 = NextGuidEntry;
      if ( !NextGuidEntry )
        break;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(NextGuidEntry + 51), 0LL);
      v18[52] = (signed __int64)KeGetCurrentThread();
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GROUP_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v12, &ETW_EVENT_GROUP_ENTRY_INFO, v18);
      v13 = 0;
      v14 = v18 + 16;
      do
      {
        if ( *v14 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v16) = v13;
          EtwpEventWriteEnableInfo(v15, v18, v16);
        }
        ++v13;
        v14 += 8;
      }
      while ( v13 < 8 );
      v18[52] = 0LL;
      ExReleasePushLockEx(v18 + 51, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      v4 = EtwpHostSiloState;
    }
    for ( k = 0LL; ; k = v30 )
    {
      v29 = EtwpGetNextGuidEntry(EtwpHostSiloState, k, 0);
      v30 = v29;
      if ( !v29 )
        break;
      v20 = v29[5] - *(_QWORD *)&EventTracingProvGuid.Data1;
      if ( !v20 )
        v20 = v30[6] - *(_QWORD *)EventTracingProvGuid.Data4;
      if ( v20 )
      {
        v21 = KeGetCurrentThread();
        --v21->KernelApcDisable;
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v30 + 51), 0LL);
        v5 = 1;
        v30[52] = (signed __int64)KeGetCurrentThread();
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_GUID_ENTRY_INFO) )
        EtwpEventWriteGuidEntry(v22, &ETW_EVENT_GUID_ENTRY_INFO, v30);
      v23 = 0;
      v24 = v30 + 16;
      do
      {
        if ( *v24 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO) )
        {
          LOBYTE(v26) = v23;
          EtwpEventWriteEnableInfo(v25, v30, v26);
        }
        ++v23;
        v24 += 8;
      }
      while ( v23 < 8 );
      for ( m = (signed __int64 *)v30[7]; m != v30 + 7; m = (signed __int64 *)*m )
      {
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_REG_ENTRY_INFO) )
          EtwpEventWriteRegEntry(v28, m);
      }
      if ( v5 )
      {
        v30[52] = 0LL;
        ExReleasePushLockEx(v30 + 51, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v5 = 0;
      }
    }
  }
}
