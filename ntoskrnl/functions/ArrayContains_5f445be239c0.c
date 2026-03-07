__int64 __fastcall ArrayContains(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // r8
  __int64 v10; // rdx

  v4 = 0;
  if ( !a2 )
    return 0LL;
  if ( !a4 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  if ( !a3 )
    return 0LL;
  if ( a4 > a2 )
    return 0LL;
  v7 = a2;
  if ( (a2 & 0xF) != 0 || (a4 & 0xF) != 0 )
    return 0LL;
  v8 = 0LL;
  do
  {
    if ( v8 >= v7 )
      break;
    for ( i = 0LL; i < a4; i += 16LL )
    {
      v10 = *(_QWORD *)(v8 + a1) - *(_QWORD *)(i + a3);
      if ( !v10 )
        v10 = *(_QWORD *)(v8 + a1 + 8) - *(_QWORD *)(i + a3 + 8);
      if ( !v10 )
        v4 = 1;
    }
    v8 += 16LL;
  }
  while ( !v4 );
  return v4;
}
