/*
 * XREFs of SeAuditHardLinkCreation @ 0x1409C79D0
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditHardLinkCreationWithTransaction @ 0x1409C79F0 (SeAuditHardLinkCreationWithTransaction.c)
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
