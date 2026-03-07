__int64 __fastcall GetAppCompatFlags2(unsigned __int16 a1)
{
  unsigned int v1; // ebx
  __int64 ThreadWin32Thread; // rax

  v1 = a1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( v1 >= *(_DWORD *)(ThreadWin32Thread + 632) )
    return *(unsigned int *)(ThreadWin32Thread + 648);
  else
    return 0LL;
}
