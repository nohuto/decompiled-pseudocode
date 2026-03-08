/*
 * XREFs of KiEnclsStatus @ 0x14056E148
 * Callers:
 *     KeBlockEnclavePage @ 0x14056DDC8 (KeBlockEnclavePage.c)
 *     KeCanChangeEnclavePageProtection @ 0x14056DE10 (KeCanChangeEnclavePageProtection.c)
 *     KeChangeEnclavePageProtection @ 0x14056DED0 (KeChangeEnclavePageProtection.c)
 *     KeOutPageEnclavePage @ 0x14056E00C (KeOutPageEnclavePage.c)
 *     KeRemoveEnclavePage @ 0x14056E0D0 (KeRemoveEnclavePage.c)
 *     KeTrackEnclaveTbFlush @ 0x14056E10C (KeTrackEnclaveTbFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsStatus(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return 0LL;
  v1 = a1 - 7;
  if ( !v1 )
    return 3221225539LL;
  v2 = v1 - 5;
  if ( !v2 )
    return 304LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3221225539LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 3221225539LL;
  v5 = v4 - 3;
  if ( !v5 )
    return 3221225539LL;
  if ( v5 == 3 )
    return 3221225496LL;
  return 3221225473LL;
}
