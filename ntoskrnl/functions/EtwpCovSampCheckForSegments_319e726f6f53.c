__int64 __fastcall EtwpCovSampCheckForSegments(unsigned __int64 *a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned __int64 *v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  wint_t *v9; // rsi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r15
  __int16 *v12; // rbx
  wint_t *v13; // r14
  bool v14; // zf
  __int16 v15; // r13
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]

  v3 = 0;
  v6 = a1;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    v7 = v6[1];
    v8 = a2[1];
    if ( v7 >= v8 )
    {
      v9 = (wint_t *)*v6;
      v10 = *v6 + 2 * (v7 - v8);
      v18 = v10;
      v11 = *a2 + 2 * v8;
      if ( *v6 <= v10 )
        break;
    }
LABEL_12:
    ++v3;
    a2 += 2;
    if ( v3 >= a3 )
      return 0LL;
  }
  while ( 1 )
  {
    v12 = (__int16 *)*a2;
    v13 = v9;
    v14 = *a2 == v11;
    if ( *a2 < v11 )
    {
      do
      {
        if ( *v13 != *v12 )
        {
          v15 = *v12;
          if ( towlower(*v13) != v15 )
            break;
        }
        ++v12;
        ++v13;
      }
      while ( (unsigned __int64)v12 < v11 );
      v10 = v18;
      v14 = v12 == (__int16 *)v11;
    }
    if ( v14 )
      return 1LL;
    if ( (unsigned __int64)++v9 > v10 )
    {
      v6 = a1;
      goto LABEL_12;
    }
  }
}
