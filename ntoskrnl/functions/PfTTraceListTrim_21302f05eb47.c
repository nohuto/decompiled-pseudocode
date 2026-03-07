__int64 *__fastcall PfTTraceListTrim(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r9d
  int *v4; // r11
  int *v6; // r10
  __int64 *v7; // rdx
  __int64 *result; // rax
  __int64 v9; // rcx
  int v10; // ecx
  __int64 **v11; // rcx

  v3 = dword_140C64FD8;
  v4 = &dword_140C650E4;
  v6 = &dword_140C64FE0;
  if ( a1 == 1 )
    v3 = dword_140C64FE0;
  v7 = &qword_140C64FC8;
  if ( a1 != 1 )
  {
    v4 = (int *)&unk_140C650E0;
    v6 = &dword_140C64FD8;
  }
  result = &qword_140C64FB8;
  if ( a1 != 1 )
    v7 = &qword_140C64FB8;
  if ( v3 > a2 )
  {
    do
    {
      result = (__int64 *)*v7;
      if ( (__int64 *)*v7 == v7 )
        break;
      if ( (__int64 *)result[1] == v7 )
      {
        v9 = *result;
        if ( *(__int64 **)(*result + 8) == result )
        {
          *v7 = v9;
          *(_QWORD *)(v9 + 8) = v7;
          v10 = *((_DWORD *)result + 7) ? *((_DWORD *)result + 12) : *((_DWORD *)result + 9);
          --*v6;
          *v4 += v10;
          v11 = *(__int64 ***)(a3 + 8);
          if ( *v11 == (__int64 *)a3 )
            continue;
        }
      }
      __fastfail(3u);
      *result = a3;
      result[1] = (__int64)v11;
      *v11 = result;
      *(_QWORD *)(a3 + 8) = result;
    }
    while ( *v6 > a2 );
  }
  return result;
}
