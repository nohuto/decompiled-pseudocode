/*
 * XREFs of PspDeleteObjectAccessState @ 0x14090A23C
 * Callers:
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
