bool __fastcall lambda_9e1c073be7703093e3ca0af05debe537_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int i; // edi
  __int64 TopWindow; // rax
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  for ( i = 6; ; i &= ~2u )
  {
    TopWindow = FindNextTopWindow::NextTopWindow(a2, a2, i);
    v7 = TopWindow;
    if ( TopWindow )
      break;
    if ( (i & 2) == 0 )
      return *(_QWORD *)a3 != 0LL;
  }
  v8 = (__int64 *)(TopWindow + 200);
  if ( !IsWindowActivateable(*(const struct tagWND **)(TopWindow + 200)) || (v7 = *v8) != 0 )
  {
    *(_QWORD *)&v10 = v7;
    *((_QWORD *)&v10 + 1) = 3LL;
    *a3 = v10;
  }
  return *(_QWORD *)a3 != 0LL;
}
