/*
 * XREFs of PspBoostJobIoPriorityCallback @ 0x14060A390
 * Callers:
 *     <none>
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     IoBoostThreadIoPriority @ 0x140363380 (IoBoostThreadIoPriority.c)
 *     PspGetNextJobProcess @ 0x14060A4F0 (PspGetNextJobProcess.c)
 *     PsGetNextProcessThread @ 0x1407216D0 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspBoostJobIoPriorityCallback(__int64 a1)
{
  __int64 v1; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r9
  __int64 v4; // rbx
  KSPIN_LOCK *i; // rdx
  __int64 NextProcessThread; // rax
  KSPIN_LOCK *v8; // rdi
  int IoPriorityThread; // eax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*(_DWORD *)(a1 + 860) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    while ( 1 )
    {
      v4 = ((__int64 (__fastcall *)(__int64, struct _KTHREAD *, __int128 *, __int64))PspGetNextJobProcess)(
             a1,
             CurrentThread,
             &v10,
             v3);
      if ( !v4 )
        break;
      for ( i = 0LL; ; i = v8 )
      {
        NextProcessThread = PsGetNextProcessThread(v4, i);
        v8 = (KSPIN_LOCK *)NextProcessThread;
        if ( !NextProcessThread )
          break;
        IoPriorityThread = PsGetIoPriorityThread(NextProcessThread);
        IoBoostThreadIoPriority(v8, IoPriorityThread, 0);
      }
      v3 = v4;
      a1 = v1;
    }
  }
  return 0LL;
}
