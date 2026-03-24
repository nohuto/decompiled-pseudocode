/*
 * XREFs of SeDeassignSecurity @ 0x14069F9F0
 * Callers:
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     ObpAssignSecurity @ 0x140662FAC (ObpAssignSecurity.c)
 *     CmpCreateChild @ 0x140667AD4 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     CmpCreateHiveRootCell @ 0x14078DBF0 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
