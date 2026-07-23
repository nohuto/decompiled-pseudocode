/*
 * XREFs of SeDeleteAccessState @ 0x1406CC080
 * Callers:
 *     SepCreateTokenEx @ 0x1402A6428 (SepCreateTokenEx.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405FFD40 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14064A4D0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     PsOpenProcess @ 0x14064F550 (PsOpenProcess.c)
 *     NtGetNextThread @ 0x1406CA5A0 (NtGetNextThread.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F980 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091C7A0 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
