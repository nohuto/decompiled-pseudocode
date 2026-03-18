/*
 * XREFs of ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1C003C7B0
 * Callers:
 *     zzzDestroyQueue @ 0x1C0038C50 (zzzDestroyQueue.c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C0038F7C (HMAssignmentUnlockWorker.c)
 */

struct tagWND *__fastcall tagQ::UnlockFocusWnd(tagQ *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 59); i; i = *(_QWORD *)(i + 1488) )
    *(_QWORD *)(*(_QWORD *)(i + 448) + 32LL) = 0LL;
  return (struct tagWND *)HMAssignmentUnlockWorker((__int64 *)this + 14, 0LL, a3, a4);
}
