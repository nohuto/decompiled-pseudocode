/*
 * XREFs of PnpiCmResourceToBiosDma @ 0x1C0093178
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0092820 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosDma(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  __int64 i; // rdx
  char v6; // cl
  __int16 v7; // ax
  char v8; // cl

  *(_BYTE *)(a1 + 1) = 0;
  v3 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 4; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    v6 = 0;
    *(_BYTE *)(a1 + 1) = 1 << *(_DWORD *)(i + 4);
    *(_BYTE *)(a1 + 2) = 0;
    if ( (*(_BYTE *)(i + 2) & 8) != 0 )
    {
      *(_BYTE *)(a1 + 2) = 4;
      v6 = 4;
    }
    v7 = *(_WORD *)(i + 2);
    if ( (v7 & 0x10) != 0 )
    {
      v8 = v6 | 0x20;
    }
    else if ( (v7 & 0x20) != 0 )
    {
      v8 = v6 | 0x40;
    }
    else
    {
      if ( (v7 & 0x40) == 0 )
      {
LABEL_15:
        *(_BYTE *)i = 0;
        return 0LL;
      }
      v8 = v6 | 0x60;
    }
    *(_BYTE *)(a1 + 2) = v8;
    goto LABEL_15;
  }
  return 0LL;
}
