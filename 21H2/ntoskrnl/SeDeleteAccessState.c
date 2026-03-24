/*
 * XREFs of SeDeleteAccessState @ 0x1405DC900
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406556B0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PsOpenProcess @ 0x14065A730 (PsOpenProcess.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406A0A00 (CmKeyBodyReplicateToVirtual.c)
 *     NtGetNextProcess @ 0x14078A8B0 (NtGetNextProcess.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F820 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14086FF9C (CmpDoBuildVirtualStack.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C640 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
