struct tagWND *__fastcall _FindWindowEx(struct tagWND *a1, struct tagWND *a2, __int16 a3, const unsigned __int16 *a4)
{
  struct tagWND *v7; // rdi
  int v8; // r14d
  struct tagTHREADINFO *v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdi
  const wchar_t *v12; // rdx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rax

  v7 = a1;
  v8 = 0;
  if ( !a1 )
  {
    v7 = 0LL;
    v9 = PtiCurrentShared(0LL);
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 58);
      if ( v10 )
        v7 = *(struct tagWND **)(v10 + 24);
    }
    if ( !a2 )
      v8 = 1;
  }
  while ( !a2 )
  {
    v11 = (_QWORD *)*((_QWORD *)v7 + 14);
LABEL_9:
    while ( v11 )
    {
      if ( !a3 || (a1 = *(struct tagWND **)(v11[17] + 8LL), a3 == *((_WORD *)a1 + 1)) )
      {
        if ( !a4 )
          break;
        v12 = *(_DWORD *)(v11[5] + 184LL) ? (const wchar_t *)v11[23] : szNull;
        if ( !_wcsicmp(a4, v12) )
          break;
      }
      v11 = (_QWORD *)v11[11];
    }
    if ( v11 || !v8 )
      return (struct tagWND *)v11;
    v8 = 0;
    v7 = 0LL;
    v14 = PtiCurrentShared((__int64)a1);
    if ( v14 )
    {
      v15 = *((_QWORD *)v14 + 57);
      if ( v15 )
        v7 = *(struct tagWND **)(v15 + 104);
    }
    a2 = 0LL;
  }
  if ( *((struct tagWND **)a2 + 13) == v7 )
  {
    v11 = (_QWORD *)*((_QWORD *)a2 + 11);
    goto LABEL_9;
  }
  return 0LL;
}
