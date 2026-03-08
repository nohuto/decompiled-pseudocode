/*
 * XREFs of ?LockFocusWnd@tagQ@@QEAAPEAUtagWND@@PEAU2@W4_LockOptions@@@Z @ 0x1C00BF0A0
 * Callers:
 *     <none>
 * Callees:
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 */

_DWORD *__fastcall tagQ::LockFocusWnd(__int64 a1, __int64 *a2, int a3)
{
  __int64 v4; // r9
  __int64 i; // rcx
  __int64 *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
    v4 = *a2;
  else
    v4 = 0LL;
  for ( i = *(_QWORD *)(a1 + 480); i; i = *(_QWORD *)(i + 1528) )
    *(_QWORD *)(*(_QWORD *)(i + 448) + 32LL) = v4;
  v7[1] = a2;
  v7[0] = (__int64 *)(a1 + 120);
  return HMAssignmentLock(v7, a3);
}
