/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406BB138
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x1406BA640 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x1406BAE70 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x1406BB530 (NtCreateTokenEx.c)
 *     NtAdjustGroupsToken @ 0x1407CAEE0 (NtAdjustGroupsToken.c)
 *     NtSetInformationToken @ 0x1407EFA00 (NtSetInformationToken.c)
 *     NtFilterToken @ 0x1407F1DD0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
