/*
 * XREFs of PopIsHiberbootSupported @ 0x14077A3BC
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x14078B98C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14078BAE8 (PopVerifySystemPowerState.c)
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
