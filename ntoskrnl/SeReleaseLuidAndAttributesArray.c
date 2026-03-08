/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x14070F4F8
 * Callers:
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     NtAdjustPrivilegesToken @ 0x14070EA00 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x14070F230 (NtPrivilegeCheck.c)
 *     NtCreateTokenEx @ 0x14070F880 (NtCreateTokenEx.c)
 *     NtFilterToken @ 0x14073FB20 (NtFilterToken.c)
 *     NtSetInformationToken @ 0x140741E70 (NtSetInformationToken.c)
 *     NtAdjustGroupsToken @ 0x14077A050 (NtAdjustGroupsToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
