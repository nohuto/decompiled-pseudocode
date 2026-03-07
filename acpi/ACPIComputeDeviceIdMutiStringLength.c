__int64 __fastcall ACPIComputeDeviceIdMutiStringLength(_WORD *a1)
{
  _WORD *v2; // r8
  __int64 i; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a1 )
    return 0LL;
  v2 = a1;
  for ( i = 0LL; *v2; v2 = &a1[i] )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v2[v4] );
    i += (unsigned int)(v4 + 1);
  }
  v5 = 1LL;
  if ( i )
    v5 = i;
  return v5 + 1;
}
