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
