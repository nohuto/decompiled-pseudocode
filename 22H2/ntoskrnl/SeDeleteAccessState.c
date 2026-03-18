/*
 * XREFs of SeDeleteAccessState @ 0x1407DB4C0
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140232250 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 */

void __fastcall SeDeleteAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
