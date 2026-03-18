/*
 * XREFs of PspDeleteObjectAccessState @ 0x140882484
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 * Callees:
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 */

void __fastcall PspDeleteObjectAccessState(struct _SECURITY_SUBJECT_CONTEXT *a1)
{
  SepDeleteAccessState((__int64)a1);
  SeReleaseSubjectContext(a1 + 1);
}
