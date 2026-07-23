/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1406687C4
 * Callers:
 *     SepCheckCreateLowBox @ 0x14061E544 (SepCheckCreateLowBox.c)
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     SepSetTokenPackage @ 0x1406C7DF0 (SepSetTokenPackage.c)
 *     SepSetTokenCapabilities @ 0x1406CCA98 (SepSetTokenCapabilities.c)
 *     SepIsParentOfChildAppContainer @ 0x1409257DC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14026D6C0 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140669BD0 (RtlGetAppContainerSidType.c)
 */

BOOLEAN __cdecl RtlIsParentOfChildAppContainer(PSID ParentAppContainerSid, PSID ChildAppContainerSid)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+40h] [rbp+18h] BYREF

  AppContainerSidType = NotAppContainerSidType;
  if ( RtlGetAppContainerSidType(ParentAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ParentAppContainerSidType
    && RtlGetAppContainerSidType(ChildAppContainerSid, &AppContainerSidType) >= 0
    && AppContainerSidType == ChildAppContainerSidType )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(ParentAppContainerSid, v4);
      if ( *v5 != *RtlSubAuthoritySid(ChildAppContainerSid, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
