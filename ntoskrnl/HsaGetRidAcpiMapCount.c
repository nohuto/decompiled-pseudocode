/*
 * XREFs of HsaGetRidAcpiMapCount @ 0x14052DF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HsaGetRidAcpiMapCount(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // r9
  __int64 *v4; // rcx
  int v5; // r10d
  bool v6; // zf
  unsigned int v7; // edx

  v2 = 0;
  if ( !a2 || *(_DWORD *)a2 != 1 || *(_DWORD *)(a1 + 160) != *(unsigned __int16 *)(a2 + 8) )
    return 0LL;
  v3 = (__int64 *)(a1 + 224);
  v4 = *(__int64 **)(a1 + 224);
  if ( v4 != v3 )
  {
    v5 = *(unsigned __int16 *)(a2 + 12);
    do
    {
      v6 = *((_DWORD *)v4 + 6) == v5;
      v7 = v2 + 1;
      v4 = (__int64 *)*v4;
      if ( !v6 )
        v7 = v2;
      v2 = v7;
    }
    while ( v4 != v3 );
  }
  return v2;
}
