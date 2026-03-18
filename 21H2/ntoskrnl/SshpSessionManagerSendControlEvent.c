/*
 * XREFs of SshpSessionManagerSendControlEvent @ 0x140811238
 * Callers:
 *     SshSessionManagerTraceCsExitReason @ 0x14080788C (SshSessionManagerTraceCsExitReason.c)
 *     SshSessionManagerTracePreSleepNotification @ 0x140807CCC (SshSessionManagerTracePreSleepNotification.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140807D78 (SshSessionManagerTracePostSleepNotification.c)
 *     SshSessionManagerTraceCsEnterReason @ 0x14080A488 (SshSessionManagerTraceCsEnterReason.c)
 *     SshpSessionManagerTraceSystemStart @ 0x140829294 (SshpSessionManagerTraceSystemStart.c)
 *     PopDiagTraceAcDcStateChange @ 0x140990D08 (PopDiagTraceAcDcStateChange.c)
 *     PopDiagTraceBatteryCountChange @ 0x1409913FC (PopDiagTraceBatteryCountChange.c)
 *     SshSessionManagerTraceDirtyTransition @ 0x1409A0DC4 (SshSessionManagerTraceDirtyTransition.c)
 *     SshSessionManagerTraceShutdownAction @ 0x1409A0F20 (SshSessionManagerTraceShutdownAction.c)
 *     SshSessionManagerTraceSystemStop @ 0x1409A0FA4 (SshSessionManagerTraceSystemStop.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14022DB00 (RtlGetSystemTimePrecise.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     SSHSupportReleasePushLockExclusive @ 0x14036C0A0 (SSHSupportReleasePushLockExclusive.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SshpAlpcOpenTraceSessionUnsafe @ 0x14081B21C (SshpAlpcOpenTraceSessionUnsafe.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14081BF60 (SshpSessionManagerFlushControlEventBuffer.c)
 */

__int64 __fastcall SshpSessionManagerSendControlEvent(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 SystemTimePrecise; // r12
  int v7; // edi
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebp
  char *v11; // rbx
  char *v12; // rbx
  const void **v13; // rdi
  __int64 v14; // rax
  __int64 v16; // rcx
  int v17; // ebx

  v4 = a2;
  SystemTimePrecise = RtlGetSystemTimePrecise();
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&SshpSessionManagerLock, 0LL);
  v7 = 8;
  if ( (_DWORD)v4 )
  {
    v8 = (_DWORD *)(a3 + 8);
    v9 = (unsigned int)v4;
    do
    {
      v7 += *v8;
      v8 += 4;
      --v9;
    }
    while ( v9 );
  }
  v10 = v7 + 12;
  if ( (unsigned int)(v7 + 12 + dword_140C1C400) <= 0x400 )
  {
    KeResetEvent(&stru_140C1C3E8);
    v11 = (char *)&unk_140C1C404 + (unsigned int)dword_140C1C400;
    *(_DWORD *)v11 = v7;
    *(_QWORD *)(v11 + 4) = a1;
    *(_QWORD *)(v11 + 12) = SystemTimePrecise;
    v12 = v11 + 20;
    if ( (_DWORD)v4 )
    {
      v13 = (const void **)(a3 + 8);
      do
      {
        memmove(v12, *(v13 - 1), *(unsigned int *)v13);
        v14 = *(unsigned int *)v13;
        v13 += 2;
        v12 += v14;
        --v4;
      }
      while ( v4 );
    }
    dword_140C1C400 += v10;
    if ( !byte_140C1C3E0 )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C1C1E8, 0LL);
      v17 = SshpAlpcOpenTraceSessionUnsafe(v16, 0LL, &SshpSessionManagerContext);
      SSHSupportReleasePushLockExclusive((ULONG_PTR)&stru_140C1C1E8);
      if ( v17 )
        byte_140C1C3E0 = 1;
      else
        SshpSessionManagerFlushControlEventBuffer();
    }
  }
  return SSHSupportReleasePushLockExclusive((ULONG_PTR)&SshpSessionManagerLock);
}
