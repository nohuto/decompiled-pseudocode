/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406651C8
 * Callers:
 *     NtFilterToken @ 0x1406623D0 (NtFilterToken.c)
 *     NtAdjustGroupsToken @ 0x140662780 (NtAdjustGroupsToken.c)
 *     NtCreateTokenEx @ 0x1406647E0 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     NtAdjustPrivilegesToken @ 0x14079DC50 (NtAdjustPrivilegesToken.c)
 *     NtPrivilegeCheck @ 0x14079E490 (NtPrivilegeCheck.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
