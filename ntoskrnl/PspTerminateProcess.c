/*
 * XREFs of PspTerminateProcess @ 0x1407DC198
 * Callers:
 *     NtTerminateProcess @ 0x1407DC2F0 (NtTerminateProcess.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 *     PspTerminatePicoProcess @ 0x1409B2C20 (PspTerminatePicoProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeSetProcessSchedulingGroup @ 0x1403556A4 (KeSetProcessSchedulingGroup.c)
 *     KeForceResumeProcess @ 0x140355998 (KeForceResumeProcess.c)
 *     EtwTraceProcessTerminate @ 0x140355D5C (EtwTraceProcessTerminate.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PspRundownSingleProcess @ 0x1406F8160 (PspRundownSingleProcess.c)
 *     PspTerminateAllThreads @ 0x1407DB73C (PspTerminateAllThreads.c)
 */

__int64 __fastcall PspTerminateProcess(PRKPROCESS PROCESS, __int64 a2, unsigned int a3, unsigned int a4)
{
  signed __int32 v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edi

  _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
  v9 = _InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 8u);
  if ( (v9 & 8) != 0 )
  {
    v10 = a4 | 2;
  }
  else
  {
    if ( (PerfGlobalGroupMask[0] & 1) != 0 )
      EtwTraceProcessTerminate((__int64)PROCESS);
    KeSetProcessSchedulingGroup((__int64)PROCESS, 0LL);
    v10 = a4 | 4;
    if ( (v9 & 0x40000000) == 0 )
      v10 = a4;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PROCESS[1], 0LL);
    if ( LODWORD(PROCESS[1].ActiveProcessors.StaticBitmap[8])
      && (a3 != -1073741749 || *(_DWORD *)&PROCESS[1].Spare2[11] == 259) )
    {
      *(_DWORD *)&PROCESS[1].Spare2[11] = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PROCESS[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PROCESS[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&PROCESS[1]);
  }
  if ( (PROCESS[1].DirectoryTableBase & 0x400) == 0 )
  {
    v11 = PspTerminateAllThreads(PROCESS, a2, a3, v10);
LABEL_14:
    v12 = v11;
    goto LABEL_15;
  }
  if ( *((_QWORD *)&xmmword_140C37D40 + 1) && (v10 & 8) == 0 )
  {
    v11 = (*((__int64 (__fastcall **)(PRKPROCESS, _QWORD))&xmmword_140C37D40 + 1))(PROCESS, a3);
    goto LABEL_14;
  }
  v12 = 290;
  PspRundownSingleProcess(PROCESS, 0);
LABEL_15:
  if ( (v9 & 8) == 0 )
    KeForceResumeProcess((__int64)PROCESS);
  return v12;
}
