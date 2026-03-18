/*
 * XREFs of SeDeassignSecurity @ 0x1407BF990
 * Callers:
 *     SepDeleteAccessState @ 0x140232250 (SepDeleteAccessState.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x1407BCC80 (ObpAssignSecurity.c)
 *     CmpCreateHiveRootCell @ 0x14087495C (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
