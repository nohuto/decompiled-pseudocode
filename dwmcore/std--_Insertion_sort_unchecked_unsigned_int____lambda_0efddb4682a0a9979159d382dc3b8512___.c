char *__fastcall std::_Insertion_sort_unchecked_unsigned_int____lambda_0efddb4682a0a9979159d382dc3b8512___(
        char *Src,
        char *a2,
        __int64 a3)
{
  char *v6; // r15
  char *v7; // rdi
  size_t v8; // rbp
  char *v9; // rdx
  __int64 v10; // r12
  char *i; // rcx
  __int64 v12; // r8

  if ( Src != a2 )
  {
    v6 = Src + 4;
    v7 = Src + 4;
    if ( Src + 4 != a2 )
    {
      v8 = 4LL;
      do
      {
        v9 = v7;
        v10 = *(unsigned int *)v7;
        if ( *(float *)(*(_QWORD *)(a3 + 1064) + 4LL * *(unsigned int *)Src) <= *(float *)(*(_QWORD *)(a3 + 1064)
                                                                                         + 4 * v10) )
        {
          for ( i = v7; ; v9 = i )
          {
            i -= 4;
            v12 = *(unsigned int *)i;
            if ( *(float *)(*(_QWORD *)(a3 + 1064) + 4 * v12) <= *(float *)(*(_QWORD *)(a3 + 1064) + 4 * v10) )
              break;
            *(_DWORD *)v9 = v12;
          }
          *(_DWORD *)v9 = v10;
        }
        else
        {
          memmove_0(v6, Src, v8);
          *(_DWORD *)Src = v10;
        }
        v7 += 4;
        v8 += 4LL;
      }
      while ( v7 != a2 );
    }
  }
  return a2;
}
