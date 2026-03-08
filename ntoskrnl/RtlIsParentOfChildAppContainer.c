/*
 * XREFs of RtlIsParentOfChildAppContainer @ 0x1409B9428
 * Callers:
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     SepSetTokenCapabilities @ 0x140710278 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x140739590 (SepSetTokenPackage.c)
 *     SepCheckCreateLowBox @ 0x140799F04 (SepCheckCreateLowBox.c)
 *     SepIsParentOfChildAppContainer @ 0x1409CEBF4 (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlGetAppContainerSidType @ 0x1407414C0 (RtlGetAppContainerSidType.c)
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
