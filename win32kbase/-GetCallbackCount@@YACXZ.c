signed __int8 GetCallbackCount(void)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
    return *(_BYTE *)(ThreadWin32Thread + 1296);
  else
    return -1;
}
