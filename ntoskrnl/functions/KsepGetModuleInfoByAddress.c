__int64 __fastcall KsepGetModuleInfoByAddress(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned int v7; // r8d
  int v8; // r9d
  unsigned int *i; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r11

  if ( !a1 || !a3 || !a2 )
    return 3221225485LL;
  v7 = *a2;
  v8 = 0;
  if ( !*a2 )
    return 3221226021LL;
  for ( i = a2 + 8; ; i += 74 )
  {
    v10 = *((_QWORD *)i - 1);
    if ( a1 >= v10 )
    {
      v11 = *i;
      if ( a1 < v10 + v11 )
        break;
    }
    if ( ++v8 >= v7 )
      return 3221226021LL;
  }
  *a3 = v10;
  if ( a4 )
    *a4 = v11;
  return 0LL;
}
