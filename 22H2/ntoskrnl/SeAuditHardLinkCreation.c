/*
 * XREFs of SeAuditHardLinkCreation @ 0x1409CAA20
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409CAA40 (SeAuditHardLinkCreationWithTransaction.c)
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
