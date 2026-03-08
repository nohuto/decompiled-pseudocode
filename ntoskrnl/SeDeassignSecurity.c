/*
 * XREFs of SeDeassignSecurity @ 0x14076D780
 * Callers:
 *     SepDeleteAccessState @ 0x140265F50 (SepDeleteAccessState.c)
 *     ObpAssignSecurity @ 0x14076AFF0 (ObpAssignSecurity.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
