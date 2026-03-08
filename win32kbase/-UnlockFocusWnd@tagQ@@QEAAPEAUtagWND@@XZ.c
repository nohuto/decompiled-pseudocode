/*
 * XREFs of ?UnlockFocusWnd@tagQ@@QEAAPEAUtagWND@@XZ @ 0x1C00728D0
 * Callers:
 *     zzzDestroyQueue @ 0x1C01553C0 (zzzDestroyQueue.c)
 * Callees:
 *     HMAssignmentUnlockWorker @ 0x1C007294C (HMAssignmentUnlockWorker.c)
 */

struct tagWND *__fastcall tagQ::UnlockFocusWnd(tagQ *this)
{
  __int64 i; // rdx

  for ( i = *((_QWORD *)this + 60); i; i = *(_QWORD *)(i + 1528) )
    *(_QWORD *)(*(_QWORD *)(i + 448) + 32LL) = 0LL;
  return (struct tagWND *)HMAssignmentUnlockWorker((char *)this + 120);
}
