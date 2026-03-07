__int64 __fastcall PfpRpControlRequestVerify(_DWORD *a1)
{
  int v1; // r9d
  __int64 result; // rax
  bool v3; // zf
  unsigned int v4; // r9d
  _DWORD *v6; // rcx
  int v7; // r8d
  unsigned int v8; // r8d
  _QWORD *v9; // rcx
  int v10; // edx

  v1 = a1[2];
  result = 0LL;
  v3 = a1[1] + v1 == 0;
  v4 = a1[1] + v1;
  v6 = a1 + 6;
  v7 = 0;
  if ( v3 )
  {
LABEL_2:
    v8 = a1[3] + a1[4];
    v9 = (_QWORD *)(((unsigned __int64)v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v10 = 0;
    if ( v8 )
    {
      while ( *v9 )
      {
        ++v9;
        if ( ++v10 >= v8 )
          return result;
      }
      return 2000LL;
    }
  }
  else
  {
    while ( *v6 )
    {
      v6 += 2;
      if ( ++v7 >= v4 )
        goto LABEL_2;
    }
    return 1000LL;
  }
  return result;
}
