__int64 __fastcall WriteAbsolute8(unsigned __int8 *Src, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  __int64 v4; // r14
  unsigned int v5; // esi
  __int64 result; // rax
  unsigned __int8 *v7; // rdi
  unsigned __int8 *v8; // rdi
  unsigned __int8 *v9; // rdi

  v4 = a3;
  if ( a3 == 1 )
  {
    v5 = 2;
  }
  else if ( a3 == 2 )
  {
    v5 = 4;
  }
  else
  {
    v5 = a3 + 3;
    if ( (a3 & 1) == 0 )
      v5 = a3 + 2;
  }
  if ( !a2 )
    return v5;
  if ( &a2[v5] > a4 )
    return 0LL;
  v7 = a2 + 1;
  if ( a3 == 1 )
  {
    *a2 = 1;
    *v7 = *Src;
    return 2LL;
  }
  else if ( a3 == 2 )
  {
    *a2 = 1;
    *v7 = *Src;
    a2[2] = 1;
    a2[3] = Src[1];
    return 4LL;
  }
  else
  {
    *a2 = 0;
    *v7 = a3;
    v8 = a2 + 2;
    memmove(a2 + 2, Src, a3);
    v9 = &v8[v4];
    result = v5;
    if ( (v4 & 1) != 0 )
      *v9 = 0;
  }
  return result;
}
