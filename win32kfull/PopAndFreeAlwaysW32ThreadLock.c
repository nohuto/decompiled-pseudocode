__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  *(_QWORD *)(v2 + 16) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
