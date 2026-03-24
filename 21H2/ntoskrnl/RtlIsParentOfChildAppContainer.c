/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x140673594
 * Callers:
 *     SepSetTokenCapabilities @ 0x1405DD33C (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 *     SepCheckCreateLowBox @ 0x1406BF634 (SepCheckCreateLowBox.c)
 *     SepSetTokenPackage @ 0x1407197A0 (SepSetTokenPackage.c)
 *     SepIsParentOfChildAppContainer @ 0x14092567C (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14027F290 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140676500 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  RtlGetAppContainerSidType(Sid);
  return 0;
}
