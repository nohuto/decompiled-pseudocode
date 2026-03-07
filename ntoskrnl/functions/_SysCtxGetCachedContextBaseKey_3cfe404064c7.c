__int64 __fastcall SysCtxGetCachedContextBaseKey(_QWORD *a1, int a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  int v4; // edx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rax

  v3 = 0;
  v4 = a2 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          return (unsigned int)-1073741811;
        v7 = a1[6];
      }
      else
      {
        v7 = a1[5];
      }
    }
    else
    {
      v7 = a1[4];
    }
  }
  else
  {
    v7 = a1[3];
  }
  if ( v7 )
    *a3 = v7;
  else
    return (unsigned int)-1073741772;
  return v3;
}
