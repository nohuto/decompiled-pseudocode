/*
 * XREFs of PspDeleteObjectAccessState @ 0x14090A0DC
 * Callers:
 *     PspInsertProcess @ 0x140607710 (PspInsertProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE460 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
