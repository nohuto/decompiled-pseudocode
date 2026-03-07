__int64 __fastcall PushW32ThreadLock(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 result; // rax

  v6 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v6 = *ThreadWin32Thread;
  result = *(_QWORD *)(v6 + 16);
  *a2 = result;
  *(_QWORD *)(v6 + 16) = a2;
  a2[1] = a1;
  a2[2] = a3;
  return result;
}
