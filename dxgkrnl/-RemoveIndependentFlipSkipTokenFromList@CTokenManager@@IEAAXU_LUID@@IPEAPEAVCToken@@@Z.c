void __fastcall CTokenManager::RemoveIndependentFlipSkipTokenFromList(
        CTokenManager *this,
        struct _LUID a2,
        int a3,
        struct CToken **a4)
{
  char *v4; // r14
  char *v5; // rdi
  DWORD LowPart; // ebx
  struct CToken *v9; // rsi
  __int64 v10; // rcx
  char **v11; // rax
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  *a4 = 0LL;
  v4 = (char *)this + 328;
  v5 = (char *)*((_QWORD *)this + 41);
  LowPart = a2.LowPart;
  while ( v5 != v4 )
  {
    v9 = (struct CToken *)(v5 - 8);
    if ( *(_QWORD *)(*((_QWORD *)v5 + 3) + 24LL) == __PAIR64__(HighPart, LowPart)
      && (*(unsigned int (__fastcall **)(_QWORD *))(*(_QWORD *)v9 + 112LL))((_QWORD *)v5 - 1) == a3 )
    {
      v10 = *(_QWORD *)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v11 = (char **)*((_QWORD *)v5 + 1), *v11 != v5) )
        __fastfail(3u);
      *v11 = (char *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      *a4 = v9;
      return;
    }
    v5 = *(char **)v5;
  }
}
