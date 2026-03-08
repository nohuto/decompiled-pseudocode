/*
 * XREFs of KiQueryProcessStibpPairingAllowed @ 0x1405718F0
 * Callers:
 *     KiUpdateStibpPairing @ 0x140458820 (KiUpdateStibpPairing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiQueryProcessStibpPairingAllowed(__int64 a1, int *a2, int *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r10d

  v3 = *(_DWORD *)(a1 + 2172);
  v4 = 0;
  if ( a2 )
    *a2 = (v3 >> 22) & 1;
  if ( a3 )
    *a3 = (v3 >> 23) & 1;
  LOBYTE(v4) = (v3 & 0xC00000) == 0x400000;
  return v4;
}
