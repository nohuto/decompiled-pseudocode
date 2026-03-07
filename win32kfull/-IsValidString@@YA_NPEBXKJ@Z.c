char __fastcall IsValidString(char *a1, unsigned int a2, int a3)
{
  unsigned int v3; // edx
  char *i; // rax

  if ( a3 < 0 )
    return 0;
  if ( a3 >= (unsigned __int64)a2 )
    return 0;
  if ( (a3 & 1) != 0 )
    return 0;
  v3 = a2 - 1;
  if ( a3 >= v3 )
    return 0;
  for ( i = &a1[a3]; *(_WORD *)i; i += 2 )
  {
    a3 += 2;
    if ( a3 >= v3 )
      return 0;
  }
  return 1;
}
