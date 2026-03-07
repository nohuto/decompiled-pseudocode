bool __fastcall IsValidAXESLISTW(char *a1, unsigned int a2, int a3)
{
  bool result; // al
  __int64 v4; // rax
  char *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rax

  result = 1;
  if ( a3 )
  {
    if ( a3 <= 0 )
      return 0;
    if ( a3 >= a2 )
      return 0;
    v4 = a2 - a3;
    v5 = &a1[a3];
    v6 = (unsigned int)v4;
    if ( ((unsigned __int8)v5 & 3) != 0 )
      return 0;
    if ( v5 + 8 > &v5[v4] )
      return 0;
    v7 = *((unsigned int *)v5 + 1);
    if ( (unsigned int)v7 > 0x10 || 40 * v7 + 8 >= v6 )
      return 0;
  }
  return result;
}
