/*
 * XREFs of VfUtilIsSignedDriver @ 0x1405CBF18
 * Callers:
 *     ViMiscEnforceRule @ 0x140ADE528 (ViMiscEnforceRule.c)
 * Callees:
 *     VfUtilGetSigningLevel @ 0x140ABF6E0 (VfUtilGetSigningLevel.c)
 */

bool VfUtilIsSignedDriver()
{
  char SigningLevel; // al

  SigningLevel = VfUtilGetSigningLevel();
  return SigningLevel == 12 || SigningLevel == 8;
}
