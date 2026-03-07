__int64 __fastcall bCurrentTlDriverCall(struct PDEVOBJ *a1)
{
  unsigned int v2; // edi
  __int64 ThreadWin32Thread; // rbx
  __int64 v5; // rbx

  v2 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a1)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    return 0LL;
  }
  v5 = *(_QWORD *)a1 + 80LL;
  if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 32LL) == v5 )
    return **(unsigned int **)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280);
  return v2;
}
