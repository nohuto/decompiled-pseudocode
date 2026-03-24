/*
 * XREFs of _GetQueueStatus @ 0x1C015C33C
 * Callers:
 *     NtUserGetThreadState @ 0x1C00F6EF0 (NtUserGetThreadState.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ??0?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00C0B9C (--0-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ??1?$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ @ 0x1C00C0DC8 (--1-$CLockExclusiveUMCBAInUserCrit@VDLT_THREADINFO@@@@QEAA@XZ.c)
 *     xxxDrainQueueCompletions @ 0x1C00D5E04 (xxxDrainQueueCompletions.c)
 */

__int64 __fastcall GetQueueStatus(__int16 a1)
{
  _QWORD *ThreadWin32Thread; // rbx
  __int64 v3; // rcx
  int v4; // esi
  int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // edi
  tagDomLock *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  ThreadWin32Thread = (_QWORD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(
    v10,
    (tagDomLock *)(ThreadWin32Thread + 49));
  if ( ThreadWin32Thread[183] && (a1 & 8) != 0 )
    xxxDrainQueueCompletions(1LL);
  v3 = ThreadWin32Thread[56];
  v4 = a1 & 0x5DFF;
  v5 = *(unsigned __int16 *)(v3 + 4);
  *(_WORD *)(v3 + 4) = v5 & ~(a1 & 0x5DFF);
  v6 = ThreadWin32Thread[56];
  v7 = *(unsigned __int16 *)(v6 + 8);
  v8 = *(unsigned __int16 *)(v6 + 6);
  CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>::~CLockExclusiveUMCBAInUserCrit<DLT_THREADINFO>(v10);
  return v4 & v5 | ((v4 & (v8 | v7)) << 16);
}
