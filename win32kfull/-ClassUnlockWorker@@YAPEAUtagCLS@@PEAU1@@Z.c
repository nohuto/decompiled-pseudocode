struct tagCLS *__fastcall ClassUnlockWorker(struct tagCLS *a1)
{
  __int64 v1; // rax
  struct tagCLS *i; // rdx
  unsigned __int64 CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v1 = *((_QWORD *)a1 + 7);
  if ( a1 == (struct tagCLS *)v1 )
    return a1;
  --*(_DWORD *)(v1 + 72);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  for ( i = *(struct tagCLS **)(*((_QWORD *)a1 + 7) + 64LL); i != a1; i = *(struct tagCLS **)i )
    ;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  DestroyClass((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  return 0LL;
}
