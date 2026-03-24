/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406EC384
 * Callers:
 *     SepSetTokenCapabilities @ 0x1405DD33C (SepSetTokenCapabilities.c)
 *     SepCheckCreateLowBox @ 0x1406A2224 (SepCheckCreateLowBox.c)
 *     SeTokenCanImpersonate @ 0x1406D41E0 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x140710940 (SepSetTokenPackage.c)
 *     SepIsParentOfChildAppContainer @ 0x1409256CC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1403482A0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1406EF2F0 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  RtlGetAppContainerSidType(Sid);
  return 0;
}
