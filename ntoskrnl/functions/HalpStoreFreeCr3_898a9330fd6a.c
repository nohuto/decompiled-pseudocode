__int64 __fastcall HalpStoreFreeCr3(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx
  _QWORD *v3; // r8

  result = 0LL;
  v2 = 0;
  v3 = HiberFreeCR3Pages;
  while ( *v3 )
  {
    ++v2;
    ++v3;
    if ( v2 >= 0x10 )
      goto LABEL_6;
  }
  HiberFreeCR3Pages[v2] = a1;
LABEL_6:
  if ( v2 == 16 )
    return 3221225626LL;
  return result;
}
