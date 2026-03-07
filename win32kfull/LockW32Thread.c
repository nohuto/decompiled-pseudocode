__int64 __fastcall LockW32Thread(__int64 a1, _QWORD *a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *a2 = *(_QWORD *)(ThreadWin32Thread + 16);
  *(_QWORD *)(ThreadWin32Thread + 16) = a2;
  result = DereferenceW32Thread;
  a2[2] = DereferenceW32Thread;
  a2[1] = a1;
  if ( a1 )
    return ReferenceW32Thread(a1);
  return result;
}
