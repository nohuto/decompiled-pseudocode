/*
 * XREFs of RaidInitPoFxPlaceHolderMode @ 0x1C001E7FC
 * Callers:
 *     StorpAdapterInitializePoFxPower @ 0x1C003A86C (StorpAdapterInitializePoFxPower.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidInitPoFxPlaceHolderMode(__int64 a1, char a2)
{
  if ( StorageD3InModernStandbyEnabled && (*(_BYTE *)(a1 + 108) & 8) != 0 && a2 )
    *(_BYTE *)(a1 + 110) |= 0x80u;
  else
    *(_BYTE *)(a1 + 110) &= ~0x80u;
}
