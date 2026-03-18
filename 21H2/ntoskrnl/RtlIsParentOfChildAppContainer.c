/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1409B9218
 * Callers:
 *     SepSetTokenPackage @ 0x14066A17C (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x1406E6DFC (SepCheckCreateLowBox.c)
 *     SepSetTokenCapabilities @ 0x140799BB0 (SepSetTokenCapabilities.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 *     SepIsParentOfChildAppContainer @ 0x1409CEF44 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x140696D90 (RtlGetAppContainerSidType.c)
 */

char __fastcall RtlIsParentOfChildAppContainer(PSID Sid, PSID a2)
{
  ULONG v4; // edi
  PULONG v5; // rbx
  int v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  if ( (int)RtlGetAppContainerSidType((char *)Sid, &v7) >= 0
    && v7 == 2
    && (int)RtlGetAppContainerSidType((char *)a2, &v7) >= 0
    && v7 == 1 )
  {
    v4 = 1;
    while ( 1 )
    {
      v5 = RtlSubAuthoritySid(Sid, v4);
      if ( *v5 != *RtlSubAuthoritySid(a2, v4) )
        break;
      if ( ++v4 >= 8 )
        return 1;
    }
  }
  return 0;
}
