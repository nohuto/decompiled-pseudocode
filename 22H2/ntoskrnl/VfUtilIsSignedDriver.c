/*
 * XREFs of VfUtilIsSignedDriver @ 0x1405CE3C8
 * Callers:
 *     ViMiscEnforceRule @ 0x140AE2528 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140AC36E0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
