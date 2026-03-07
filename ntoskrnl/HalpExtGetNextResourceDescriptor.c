__int64 __fastcall HalpExtGetNextResourceDescriptor(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        __int16 a4,
        __int16 a5,
        int a6)
{
  char *v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // r8
  bool v9; // cf
  __int64 v10; // rax

  v6 = (char *)a2 + *a2;
  if ( a3 )
  {
    v7 = *a3;
  }
  else
  {
    v7 = a2[5];
    a3 = a2 + 6;
  }
  v8 = (unsigned __int64)a3 + v7;
  v9 = v8 < (unsigned __int64)v6;
  if ( v8 >= (unsigned __int64)v6 )
    return v8 & -(__int64)v9;
  while ( 1 )
  {
    v10 = *(unsigned int *)v8;
    if ( (unsigned int)v10 < 0xC )
      break;
    if ( a4 != -1 && a4 != *(_WORD *)(v8 + 4)
      || a5 != -1 && a5 != *(_WORD *)(v8 + 6)
      || a6 != 0xFFFF && a6 != *(_DWORD *)(v8 + 8) )
    {
      v8 += v10;
      if ( v8 < (unsigned __int64)v6 )
        continue;
    }
    v9 = v8 < (unsigned __int64)v6;
    return v8 & -(__int64)v9;
  }
  return 0LL;
}
