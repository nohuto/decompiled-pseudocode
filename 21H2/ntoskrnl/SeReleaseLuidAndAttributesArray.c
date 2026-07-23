/*
 * XREFs of SeReleaseLuidAndAttributesArray @ 0x1406980D0
 * Callers:
 *     NtAdjustGroupsToken @ 0x1406087B0 (NtAdjustGroupsToken.c)
 *     NtCreateLowBoxToken @ 0x140669C50 (NtCreateLowBoxToken.c)
 *     NtSetInformationToken @ 0x140694530 (NtSetInformationToken.c)
 *     NtPrivilegeCheck @ 0x1406975D0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x1406977C0 (NtAdjustPrivilegesToken.c)
 *     NtFilterToken @ 0x1406C7EA0 (NtFilterToken.c)
 *     NtCreateTokenEx @ 0x1406CC0B0 (NtCreateTokenEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseLuidAndAttributesArray(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
