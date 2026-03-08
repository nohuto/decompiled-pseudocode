/*
 * XREFs of PopIsHiberbootSupported @ 0x14097DB40
 * Callers:
 *     PopVerifyPowerActionPolicy @ 0x14082A608 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14082A73C (PopVerifySystemPowerState.c)
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
