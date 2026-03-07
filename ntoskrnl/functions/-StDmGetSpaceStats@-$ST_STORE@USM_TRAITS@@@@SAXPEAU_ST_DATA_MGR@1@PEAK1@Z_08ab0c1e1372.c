char __fastcall ST_STORE<SM_TRAITS>::StDmGetSpaceStats(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int *v3; // r9
  int v4; // eax
  unsigned __int64 v5; // rcx

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v3 = (int *)(a1 + 1828);
  LOBYTE(v4) = -(char)*(_DWORD *)(a1 + 776);
  v5 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 776) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
  do
  {
    if ( a2 )
    {
      v4 = *(v3 - 1);
      *a2 += v4;
    }
    if ( a3 )
    {
      v4 = *v3;
      *a3 += *v3;
    }
    v3 += 2;
    --v5;
  }
  while ( v5 );
  return v4;
}
