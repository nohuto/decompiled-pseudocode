__int64 __fastcall KeIsSingleGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  unsigned __int16 *v3; // r9
  unsigned __int16 v4; // dx
  __int16 v6; // [rsp+8h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (unsigned __int16 *)&v6;
  v6 = 0;
  if ( a2 )
    v3 = a2;
  v4 = 0;
  *v3 = 32;
  if ( !*a1 )
    return 0LL;
  do
  {
    if ( *(_QWORD *)&a1[4 * v4 + 4] )
    {
      if ( *v3 != 32 )
        return 0LL;
      *v3 = v4;
    }
    ++v4;
  }
  while ( v4 < *a1 );
  LOBYTE(v2) = *v3 != 32;
  return v2;
}
