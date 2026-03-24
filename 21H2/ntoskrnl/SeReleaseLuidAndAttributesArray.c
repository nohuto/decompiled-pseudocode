/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1405DD318
 * Callers:
 *     NtFilterToken @ 0x1405D9FB0 (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x1405DA5F0 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x1405DC930 (NtCreateTokenEx.c)
 *     NtPrivilegeCheck @ 0x140607B40 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x140607D30 (NtAdjustPrivilegesToken.c)
 *     NtSetInformationToken @ 0x1406749A0 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x140676580 (NtCreateLowBoxToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
