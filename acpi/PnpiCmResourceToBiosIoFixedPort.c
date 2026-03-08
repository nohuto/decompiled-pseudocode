/*
 * XREFs of PnpiCmResourceToBiosIoFixedPort @ 0x1C009332C
 * Callers:
 *     PnpCmResourcesToBiosResources @ 0x1C0092820 (PnpCmResourcesToBiosResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpiCmResourceToBiosIoFixedPort(__int64 a1, __int64 a2)
{
  int v3; // r8d
  unsigned int v4; // r10d
  __int64 i; // rcx

  *(_BYTE *)(a1 + 3) = 0;
  v3 = 0;
  *(_WORD *)(a1 + 1) = 0;
  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    for ( i = a2 + 20; *(_BYTE *)i != 1 || (*(_BYTE *)(i + 2) & 4) == 0; i += 20LL )
    {
      if ( ++v3 >= v4 )
        return 0LL;
    }
    *(_WORD *)(a1 + 1) = *(_WORD *)(i + 4);
    *(_BYTE *)(a1 + 3) = *(_BYTE *)(i + 12);
    *(_BYTE *)i = 0;
  }
  return 0LL;
}
