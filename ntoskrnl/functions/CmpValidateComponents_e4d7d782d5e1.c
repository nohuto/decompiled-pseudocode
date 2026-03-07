__int64 __fastcall CmpValidateComponents(int a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // r10
  __int64 v4; // rdx
  int v5; // edx
  unsigned int v6; // r9d

  v2 = 0;
  v3 = a2;
  v4 = 0LL;
  if ( a1 )
  {
    while ( *(_WORD *)CmpGetComponentNameAtIndex(v3, v4) <= 0x200u )
    {
      v4 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v4 >= v6 )
        return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
