/*
 * XREFs of GetTargetPti @ 0x1C0128D00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     LockThreadByClientId @ 0x1C00839E4 (LockThreadByClientId.c)
 */

__int64 __fastcall GetTargetPti(int a1, unsigned int a2)
{
  __int64 ThreadWin32Thread; // rbx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF

  ThreadWin32Thread = 0LL;
  if ( a1 )
    return W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  Object = 0LL;
  if ( (int)LockThreadByClientId((void *)a2, (PETHREAD *)&Object) >= 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Object);
    ObfDereferenceObject(Object);
  }
  return ThreadWin32Thread;
}
