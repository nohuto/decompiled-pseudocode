_QWORD *__fastcall xxxSetClassLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // r9d
  _QWORD *i; // rdx

  v5 = a3;
  v6 = a2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != v9 )
  {
    v10 = 5;
LABEL_16:
    UserSetLastError(v10);
    return 0LL;
  }
  if ( (int)v6 < 0 )
  {
    if ( (int)v6 >= -34 && byte_1C031A98A[v6] <= 4u )
      return xxxSetClassData(a1, v6, v5, a4);
    goto LABEL_15;
  }
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL);
  if ( (int)v6 + 4 < (unsigned int)v6 || (v13 = *(_QWORD *)(v12 + 8), (unsigned int)(v6 + 4) > *(_DWORD *)(v13 + 12)) )
  {
LABEL_15:
    v10 = 1413;
    goto LABEL_16;
  }
  v14 = *(_DWORD *)(v6 + v13 + 88);
  *(_DWORD *)(v6 + v13 + 88) = v5;
  for ( i = *(_QWORD **)(v12 + 64); i; i = (_QWORD *)*i )
    *(_DWORD *)(i[1] + v6 + 88) = v5;
  return (_QWORD *)v14;
}
