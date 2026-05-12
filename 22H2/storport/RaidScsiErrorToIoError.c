/*
 * XREFs of RaidScsiErrorToIoError @ 0x1C0045B6C
 * Callers:
 *     RaidAdapterLogIoError @ 0x1C002D338 (RaidAdapterLogIoError.c)
 *     StorCreateSystemLogEntry @ 0x1C0046054 (StorCreateSystemLogEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidScsiErrorToIoError(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 3221487621LL;
  v2 = v1 - 3;
  if ( !v2 )
    return 3221487625LL;
  v3 = v2 - 4;
  if ( !v3 )
    return 3221487629LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2147745818LL;
  if ( v4 == 1 )
    return 3221487641LL;
  return 3221487627LL;
}
