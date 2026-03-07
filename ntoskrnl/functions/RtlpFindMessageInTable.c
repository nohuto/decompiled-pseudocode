__int64 __fastcall RtlpFindMessageInTable(int *a1, int a2, unsigned int a3, unsigned __int16 **a4)
{
  __int64 v4; // r11
  int v5; // edx
  _DWORD *v6; // rax
  unsigned __int16 *v7; // r11
  unsigned __int16 *v8; // rcx
  unsigned int v9; // r8d

  v4 = (unsigned int)(a2 - 1);
  v5 = *a1;
  v6 = a1 + 1;
  v7 = (unsigned __int16 *)((char *)a1 + v4);
  while ( v5 )
  {
    --v5;
    if ( a3 >= *v6 && a3 <= v6[1] )
    {
      v8 = (unsigned __int16 *)((char *)a1 + (unsigned int)v6[2]);
      v9 = a3 - *v6;
      if ( !v9 )
      {
LABEL_9:
        *a4 = v8;
        return 0LL;
      }
      while ( 1 )
      {
        --v9;
        v8 = (unsigned __int16 *)((char *)v8 + *v8);
        if ( v8 > v7 )
          return 3221225737LL;
        if ( !v9 )
          goto LABEL_9;
      }
    }
    v6 += 3;
  }
  return 3221225737LL;
}
