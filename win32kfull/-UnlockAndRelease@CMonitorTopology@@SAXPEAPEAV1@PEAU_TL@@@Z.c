void __fastcall CMonitorTopology::UnlockAndRelease(struct CMonitorTopology **a1, struct _TL *a2)
{
  __int64 ThreadWin32Thread; // rax
  void *v5; // rcx

  if ( *a1 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v5 = *a1;
    *(_QWORD *)(ThreadWin32Thread + 16) = *(_QWORD *)a2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
      Win32FreePool(v5);
    *a1 = 0LL;
  }
}
