/*
 * XREFs of PsMultiResumeThread @ 0x1402EEA18
 * Callers:
 *     NtResumeThread @ 0x1406B8B70 (NtResumeThread.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpWakeTarget @ 0x1409289DC (DbgkpWakeTarget.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     NtChangeThreadState @ 0x1409AEE00 (NtChangeThreadState.c)
 *     PspDeleteThreadStateChange @ 0x1409AF6F0 (PspDeleteThreadStateChange.c)
 *     PsResumeThread @ 0x1409B2ED0 (PsResumeThread.c)
 * Callees:
 *     KeResumeThread @ 0x1402EEAA8 (KeResumeThread.c)
 *     EtwTiLogSuspendResumeThread @ 0x1409E668C (EtwTiLogSuspendResumeThread.c)
 */

__int64 __fastcall PsMultiResumeThread(__int64 a1, unsigned int *a2, unsigned int a3)
{
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // ecx

  v6 = KeResumeThread(a1, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  if ( v6 && v6 <= a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    v10 = *(_DWORD *)(v9 + 2172);
    if ( (v10 & 0x8000) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v9 + 2172), 0x8000u);
      v10 = *(_DWORD *)(v9 + 2172);
    }
    if ( (v10 & 0x100000) != 0 )
      EtwTiLogSuspendResumeThread(0LL, CurrentThread, a1, 0LL);
  }
  if ( a2 )
    *a2 = v8;
  return 0LL;
}
