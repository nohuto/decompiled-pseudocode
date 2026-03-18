/*
 * XREFs of PsMultiResumeThread @ 0x140309C58
 * Callers:
 *     NtResumeThread @ 0x1407C0BB0 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140937834 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1409384E8 (DbgkpWakeTarget.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     NtChangeThreadState @ 0x1409AFF70 (NtChangeThreadState.c)
 *     PspDeleteThreadStateChange @ 0x1409B11D0 (PspDeleteThreadStateChange.c)
 *     PsResumeThread @ 0x1409B6130 (PsResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x14030A0FC (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1408A7DA4 (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsMultiResumeThread(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx
  __int64 v9; // r8

  v6 = KeResumeThread(a1, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 && v6 <= a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    if ( (*(_DWORD *)(v9 + 2172) & 0x8000) == 0 )
      _InterlockedOr((volatile signed __int32 *)(v9 + 2172), 0x8000u);
    if ( (*(_DWORD *)(v9 + 2172) & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}
