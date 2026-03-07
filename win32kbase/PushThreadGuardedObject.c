__int64 __fastcall PushThreadGuardedObject(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v3 = 0;
  if ( a1 )
  {
    KeEnterCriticalRegion();
    v7 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v7 = *ThreadWin32Thread;
    a1[2] = a2;
    a1[3] = a3;
    if ( v7 )
    {
      v9 = (_QWORD *)(v7 + 88);
      v10 = *(_QWORD *)(v7 + 88);
      if ( *(_QWORD *)(v10 + 8) != v7 + 88 )
        __fastfail(3u);
      *a1 = v10;
      v3 = 1;
      a1[1] = v9;
      *(_QWORD *)(v10 + 8) = a1;
      *v9 = a1;
    }
    else
    {
      a1[1] = a1;
      *a1 = a1;
    }
    KeLeaveCriticalRegion();
  }
  return v3;
}
