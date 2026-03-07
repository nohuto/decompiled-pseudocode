void __fastcall CProcessAttributionManager::NotifyOnDeadObserver(
        CProcessAttributionManager *this,
        struct CProcessAttributionObserver *a2)
{
  struct CProcessAttributionObserver **v2; // rdi
  struct CProcessAttributionObserver **v4; // rdx
  struct CProcessAttributionObserver **i; // rax
  size_t v7; // rbx
  __int64 v8; // rdx
  __int64 j; // rcx
  __int64 *v10; // rsi
  __int64 *k; // rdi
  __int64 *m; // rbx
  size_t v13; // rbx

  v2 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 3);
  v4 = (struct CProcessAttributionObserver **)*((_QWORD *)this + 4);
  while ( v2 != v4 && *v2 != a2 )
    ++v2;
  if ( v2 != v4 )
  {
    for ( i = v2 + 1; i != v4; ++i )
    {
      if ( *i != a2 )
        *v2++ = *i;
    }
    if ( v2 != v4 )
    {
      v7 = *((_QWORD *)this + 4) - (_QWORD)v4;
      memmove_0(v2, v4, v7);
      *((_QWORD *)this + 4) = (char *)v2 + v7;
    }
  }
  v8 = *((_QWORD *)this + 1);
  for ( j = *(_QWORD *)this; j != v8; j += 8LL )
    --*(_DWORD *)(*(_QWORD *)j + 160LL);
  v10 = (__int64 *)*((_QWORD *)this + 1);
  for ( k = *(__int64 **)this; k != v10 && !lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()(j, *k); ++k )
    ;
  if ( k != v10 )
  {
    for ( m = k + 1; m != v10; ++m )
    {
      if ( !lambda_73f2a4da0cca98f221385d01cc2cbc64_::operator()(j, *m) )
        *k++ = *m;
    }
    if ( k != v10 )
    {
      v13 = *((_QWORD *)this + 1) - (_QWORD)v10;
      memmove_0(k, v10, v13);
      *((_QWORD *)this + 1) = (char *)k + v13;
    }
  }
}
