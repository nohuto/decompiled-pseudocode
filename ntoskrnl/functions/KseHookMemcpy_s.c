__int64 __fastcall KseHookMemcpy_s(char *a1, size_t a2, __int64 *a3, size_t a4)
{
  __int64 *v4; // rbx
  size_t i; // rdx
  __int64 v7; // rax
  size_t v8; // r9
  signed __int64 v9; // rcx

  v4 = a3;
  if ( !a4 )
    return 0LL;
  if ( !a1 )
    return 22LL;
  if ( a3 && a2 >= a4 )
  {
    for ( i = a4 >> 3; i; --i )
    {
      v7 = *v4++;
      *(_QWORD *)a1 = v7;
      a1 += 8;
    }
    v8 = a4 & 7;
    if ( (_DWORD)v8 )
    {
      v9 = a1 - (char *)v4;
      do
      {
        *((_BYTE *)v4 + v9) = *(_BYTE *)v4;
        v4 = (__int64 *)((char *)v4 + 1);
        --v8;
      }
      while ( v8 );
    }
    return 0LL;
  }
  memset(a1, 0, a2);
  return v4 != 0LL ? 34 : 22;
}
