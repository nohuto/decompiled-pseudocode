/*
 * XREFs of PopIsHiberbootSupported @ 0x14077A0FC
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x14078B6CC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14078B828 (PopVerifySystemPowerState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHiberbootSupported(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_BYTE *)(a1 + 6) )
    return *(_BYTE *)(a1 + 8) != 0;
  return v1;
}
