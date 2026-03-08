/*
 * XREFs of PnpiCmResourceToBiosMemory @ 0x1C009349C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0092820 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosMemory(__int64 a1, __int64 a2)
{
  int v3; // ecx
  unsigned int v4; // r10d
  __int64 i; // r8
  char v6; // dl
  int v7; // eax

  *(_BYTE *)(a1 + 3) = 0;
  *(_QWORD *)(a1 + 4) = 0LL;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 3 || (*(_BYTE *)(i + 2) & 0x10) == 0; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    v6 = *(_BYTE *)(a1 + 3);
    v7 = *(_DWORD *)(i + 4) >> 8;
    *(_WORD *)(a1 + 6) = v7;
    *(_WORD *)(a1 + 4) = v7;
    *(_WORD *)(a1 + 10) = *(_DWORD *)(i + 12) >> 8;
    if ( (*(_BYTE *)(i + 2) & 1) == 0 )
      v6 |= 1u;
    *(_BYTE *)(a1 + 3) = v6;
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
