/*
 * XREFs of SeDeassignSecurity @ 0x1406BC2D0
 * Callers:
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     ObpAssignSecurity @ 0x140669694 (ObpAssignSecurity.c)
 *     CmpCreateHiveRootCell @ 0x1406C9FA0 (CmpCreateHiveRootCell.c)
 *     CmpCreateChild @ 0x140719278 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall SeDeassignSecurity(PSECURITY_DESCRIPTOR *SecurityDescriptor)
{
  PSECURITY_DESCRIPTOR v2; // rcx

  v2 = *SecurityDescriptor;
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  *SecurityDescriptor = 0LL;
  return 0;
}
