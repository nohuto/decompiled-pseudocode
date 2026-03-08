/*
 * XREFs of PcValidateDmaAdapterRequest @ 0x140519D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PcValidateDmaAdapterRequest(__int64 a1)
{
  unsigned int v2; // edx
  int v3; // r8d

  if ( *(_BYTE *)(a1 + 5) )
  {
    if ( *(_BYTE *)(a1 + 4) )
      return 1;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 4) )
      return 1;
    v2 = *(_DWORD *)(a1 + 16);
    if ( (v2 & 0xFFFFFFF8) == 0 && v2 != 4 )
    {
      v3 = *(_DWORD *)(a1 + 24);
      if ( v3 )
      {
        if ( v3 == 1 && v2 >= 4 )
          return 1;
      }
      else if ( v2 < 4 )
      {
        return 1;
      }
    }
  }
  return 0;
}
