/*
 * XREFs of NtSetTimerResolution @ 0x140709FF0
 * Callers:
 *     <none>
 * Callees:
 *     ExpInsertTimerResolutionEntry @ 0x14032C52C (ExpInsertTimerResolutionEntry.c)
 *     ExpUpdateTimerResolution @ 0x14035DEFC (ExpUpdateTimerResolution.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406A5F7C (PoDiagCaptureUsermodeStack.c)
 *     ExReleaseTimeRefreshLock @ 0x1407095C0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1407095E4 (ExAcquireTimeRefreshLock.c)
 *     PoTraceSystemTimerResolution @ 0x14070A204 (PoTraceSystemTimerResolution.c)
 *     PoDiagFreeUsermodeStack @ 0x140733784 (PoDiagFreeUsermodeStack.c)
 */

NTSTATUS __cdecl NtSetTimerResolution(ULONG DesiredTime, BOOLEAN SetResolution, PULONG ActualTime)
{
  __int64 v6; // r8
  _KPROCESS *Process; // rbx
  NTSTATUS v8; // r15d
  ULONG updated; // r14d
  signed __int32 DirectoryTableBase_high; // eax
  signed __int32 v11; // ett
  ULONG v12; // edx
  char v13; // cl
  bool v14; // si
  signed __int32 v15; // ett
  __int16 v16; // di
  unsigned __int64 v17; // rsi
  PVOID *v18; // rdi
  unsigned __int64 v19; // rax
  bool v20; // zf
  char v22; // [rsp+78h] [rbp+20h]

  if ( KeGetCurrentThread()->PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ActualTime < 0x7FFFFFFF0000LL )
      v6 = (__int64)ActualTime;
    *(_DWORD *)v6 = *(_DWORD *)v6;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v22 = 0;
  v8 = 0;
  ExAcquireTimeRefreshLock(1u);
  updated = KeTimeIncrement;
  _m_prefetchw((char *)&Process[1].DirectoryTableBase + 4);
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( SetResolution )
  {
    v14 = 1;
    do
    {
      v15 = DirectoryTableBase_high;
      DirectoryTableBase_high = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                  DirectoryTableBase_high | 0x80001000,
                                  DirectoryTableBase_high);
    }
    while ( v15 != DirectoryTableBase_high );
    v16 = DirectoryTableBase_high;
    if ( DirectoryTableBase_high >= 0 )
      ExpInsertTimerResolutionEntry((__int64)Process);
    if ( (v16 & 0x1000) != 0 )
      v14 = DesiredTime <= LODWORD(Process[1].EndPadding[1]);
    else
      ++ExpTimerResolutionCount;
    if ( !Process[1].EndPadding[0] || DesiredTime < HIDWORD(Process[1].EndPadding[1]) )
      v22 = 1;
    LODWORD(Process[1].EndPadding[1]) = DesiredTime;
    PoTraceSystemTimerResolution(0LL, Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0 )
    {
      updated = KeTimeIncrement;
      goto LABEL_24;
    }
    v12 = DesiredTime;
    v13 = v14;
    goto LABEL_22;
  }
  do
  {
    v11 = DirectoryTableBase_high;
    DirectoryTableBase_high = _InterlockedCompareExchange(
                                (volatile signed __int32 *)&Process[1].DirectoryTableBase + 1,
                                DirectoryTableBase_high & 0xFFFFEFFF,
                                DirectoryTableBase_high);
  }
  while ( v11 != DirectoryTableBase_high );
  if ( (DirectoryTableBase_high & 0x1000) != 0 )
  {
    --ExpTimerResolutionCount;
    LODWORD(Process[1].EndPadding[1]) = 0;
    PoTraceSystemTimerResolution(0LL, Process);
    v12 = 0;
    v13 = 0;
LABEL_22:
    updated = ExpUpdateTimerResolution(v13, v12, 0LL);
    goto LABEL_24;
  }
  v8 = -1073741243;
LABEL_24:
  ExReleaseTimeRefreshLock();
  v17 = 0LL;
  v18 = 0LL;
  if ( v22 )
  {
    v18 = PoDiagCaptureUsermodeStack();
    if ( v18 )
    {
      ExAcquireTimeRefreshLock(1u);
      v19 = Process[1].EndPadding[0];
      v20 = v19 == 0;
      if ( v19 )
      {
        if ( DesiredTime >= HIDWORD(Process[1].EndPadding[1]) )
        {
LABEL_32:
          ExReleaseTimeRefreshLock();
          goto LABEL_33;
        }
        v20 = v19 == 0;
      }
      if ( !v20 )
        v17 = Process[1].EndPadding[0];
      HIDWORD(Process[1].EndPadding[1]) = DesiredTime;
      Process[1].EndPadding[0] = (unsigned __int64)v18;
      v18 = 0LL;
      goto LABEL_32;
    }
  }
LABEL_33:
  if ( v17 )
    PoDiagFreeUsermodeStack(v17);
  if ( v18 )
    PoDiagFreeUsermodeStack(v18);
  *ActualTime = updated;
  return v8;
}
