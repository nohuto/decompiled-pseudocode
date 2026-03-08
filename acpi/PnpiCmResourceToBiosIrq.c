/*
 * XREFs of PnpiCmResourceToBiosIrq @ 0x1C00933F4
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0092820 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIrq(__int64 a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // r10d
  __int64 i; // r8
  char v6; // dl
  char v7; // al
  char v8; // cl

  *(_WORD *)(a1 + 1) = 0;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 2 || *(_WORD *)(i + 4) >= 0x10u; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    *(_WORD *)(a1 + 1) = 1 << *(_WORD *)(i + 4);
    if ( (*(_BYTE *)a1 & 7) == 3 )
    {
      *(_BYTE *)(a1 + 3) = 0;
      v6 = (*(_WORD *)(i + 2) & 1) != 0 ? 17 : 24;
      v7 = (*(_WORD *)(i + 2) & 1) != 0 ? 1 : 8;
      *(_BYTE *)(a1 + 3) = v7;
      v8 = v7;
      if ( *(_BYTE *)(i + 1) == 3 )
        v8 = v6;
      *(_BYTE *)(a1 + 3) = v8;
    }
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
