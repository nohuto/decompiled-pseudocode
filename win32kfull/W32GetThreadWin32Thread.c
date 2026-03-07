__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax

  v1 = 0LL;
  ThreadWin32Thread = PsGetThreadWin32Thread(a1);
  if ( ThreadWin32Thread )
    return *(_QWORD *)ThreadWin32Thread;
  return v1;
}
