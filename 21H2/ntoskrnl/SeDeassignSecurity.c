/*
 * XREFs of SeDeassignSecurity @ 0x1405FED30
 * Callers:
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     ObpAssignSecurity @ 0x140657DCC (ObpAssignSecurity.c)
 *     CmpCreateChild @ 0x14065C8F4 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     CmpCreateHiveRootCell @ 0x14078DDB0 (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
