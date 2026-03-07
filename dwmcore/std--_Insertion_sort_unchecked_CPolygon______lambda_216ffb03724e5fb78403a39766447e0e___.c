char *__fastcall std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        char *Src,
        char *a2)
{
  char *v4; // r15
  char *v5; // rbx
  size_t v6; // rbp
  char *v7; // rdx
  __int64 v8; // r14
  char *i; // rcx

  if ( Src != a2 )
  {
    v4 = Src + 8;
    v5 = Src + 8;
    if ( Src + 8 != a2 )
    {
      v6 = 8LL;
      do
      {
        v7 = v5;
        v8 = *(_QWORD *)v5;
        if ( *(_DWORD *)(*(_QWORD *)v5 + 264LL) >= *(_DWORD *)(*(_QWORD *)Src + 264LL) )
        {
          for ( i = v5; ; v7 = i )
          {
            i -= 8;
            if ( *(_DWORD *)(v8 + 264) >= *(_DWORD *)(*(_QWORD *)i + 264LL) )
              break;
            *(_QWORD *)v7 = *(_QWORD *)i;
          }
          *(_QWORD *)v7 = v8;
        }
        else
        {
          memmove_0(v4, Src, v6);
          *(_QWORD *)Src = v8;
        }
        v5 += 8;
        v6 += 8LL;
      }
      while ( v5 != a2 );
    }
  }
  return a2;
}
