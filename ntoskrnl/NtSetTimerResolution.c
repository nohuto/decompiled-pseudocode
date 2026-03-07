__int64 __fastcall NtSetTimerResolution(__int64 a1, char a2, int *a3)
{
  unsigned int v5; // esi
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  unsigned int v8; // r13d
  int updated; // r15d
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v11; // ett
  unsigned int v12; // edx
  char v13; // cl
  void *v14; // r14
  void *v15; // rdi
  bool v17; // r14
  signed __int32 v18; // ett
  __int16 v19; // di
  __int64 v20; // rcx
  unsigned __int64 LastRebalanceQpc; // rax
  bool v22; // zf
  unsigned int v23; // [rsp+70h] [rbp+8h]
  char v25; // [rsp+88h] [rbp+20h]

  v23 = a1;
  v5 = a1;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a3;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v25 = 0;
  v8 = 0;
  LOBYTE(a1) = 1;
  ExAcquireTimeRefreshLock(a1);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( a2 )
  {
    v17 = 1;
    do
    {
      v18 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v18 != DirectoryTableBase_high );
    v19 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v19 & 0x1000) != 0 )
      v17 = v5 <= LODWORD(Process[1].PerProcessorCycleTimes);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[1].LastRebalanceQpc || v5 < HIDWORD(Process[1].PerProcessorCycleTimes) )
      v25 = 1;
    LODWORD(Process[1].PerProcessorCycleTimes) = v5;
    PoTraceSystemTimerResolution(0, (__int64)Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0 )
    {
      updated = KePseudoHrTimeIncrement;
      goto LABEL_10;
    }
    v12 = v5;
    v13 = v17;
  }
  else
  {
    do
    {
      v11 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high & 0xFFFFEFFF,
                                  DirectoryTableBase_high);
    }
    while ( v11 != DirectoryTableBase_high );
    if ( (DirectoryTableBase_high & 0x1000) == 0 )
    {
      v8 = -1073741243;
      goto LABEL_10;
    }
    --ExpTimerResolutionCount;
    LODWORD(Process[1].PerProcessorCycleTimes) = 0;
    PoTraceSystemTimerResolution(0, (__int64)Process);
    v12 = 0;
    v13 = 0;
  }
  updated = ExpUpdateTimerResolution(v13, v12, 0LL);
LABEL_10:
  ExReleaseResourceLite(&ExpTimeRefreshLock);
  KeLeaveCriticalRegion();
  v14 = 0LL;
  v15 = 0LL;
  if ( v25 )
  {
    v15 = (void *)PoDiagCaptureUsermodeStack();
    if ( v15 )
    {
      LOBYTE(v20) = 1;
      ExAcquireTimeRefreshLock(v20);
      LastRebalanceQpc = Process[1].LastRebalanceQpc;
      v22 = LastRebalanceQpc == 0;
      if ( LastRebalanceQpc )
      {
        if ( v23 >= HIDWORD(Process[1].PerProcessorCycleTimes) )
        {
LABEL_33:
          ExReleaseResourceLite(&ExpTimeRefreshLock);
          KeLeaveCriticalRegion();
          goto LABEL_11;
        }
        v22 = LastRebalanceQpc == 0;
      }
      if ( !v22 )
        v14 = (void *)Process[1].LastRebalanceQpc;
      HIDWORD(Process[1].PerProcessorCycleTimes) = v23;
      Process[1].LastRebalanceQpc = (unsigned __int64)v15;
      v15 = 0LL;
      goto LABEL_33;
    }
  }
LABEL_11:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x50455654u);
  if ( v15 )
    ExFreePoolWithTag(v15, 0x50455654u);
  *a3 = updated;
  return v8;
}
