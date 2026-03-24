/*
 * XREFs of PspDeleteObjectAccessState @ 0x14090A12C
 * Callers:
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE380 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140345670 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
