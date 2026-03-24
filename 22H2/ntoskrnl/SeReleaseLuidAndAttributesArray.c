/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1405DD318
 * Callers:
 *     NtFilterToken @ 0x1405D9FB0 (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x1405DA5F0 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x1405DC930 (NtCreateTokenEx.c)
 *     NtPrivilegeCheck @ 0x140607FA0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x140608190 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationToken @ 0x1406ED790 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
