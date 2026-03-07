__int64 __fastcall HalpGetNumberOfSGElementsDmaThin(__int64 *a1, int a2, unsigned int a3, _DWORD *a4)
{
  int v4; // r10d
  unsigned int v6; // edi
  __int64 v8; // r11
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // r8d
  __int64 *i; // r9
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // r8d
  __int64 result; // rax

  v4 = 0;
  v6 = a3;
  if ( a3 )
  {
    v8 = 0LL;
    while ( a1 )
    {
      v9 = v6;
      if ( *((_DWORD *)a1 + 10) - a2 <= v6 )
        v9 = *((_DWORD *)a1 + 10) - a2;
      v10 = *((_DWORD *)a1 + 11) + a2;
      v6 -= v9;
      v11 = v10 & 0xFFF;
      for ( i = &a1[((unsigned __int64)v10 >> 12) + 6]; v9; v11 = 0 )
      {
        v13 = v11 + (*i << 12);
        v14 = 4096 - v11;
        v15 = v9;
        if ( v14 <= v9 )
          v15 = v14;
        if ( v13 != v8 + 1 || !v4 )
          ++v4;
        v9 -= v15;
        v8 = v15 + v13 - 1;
        ++i;
      }
      a1 = (__int64 *)*a1;
      a2 = 0;
      if ( !v6 )
      {
        result = 0LL;
        goto LABEL_14;
      }
    }
    result = 3221225507LL;
LABEL_14:
    *a4 = v4;
  }
  else
  {
    *a4 = 0;
    return 3221225713LL;
  }
  return result;
}
