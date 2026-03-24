/*
 * XREFs of SeCreateAccessStateEx @ 0x1406DA6C0
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x140607670 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x140607B70 (PspInsertProcess.c)
 *     PspCombineSecurityDomains @ 0x140685D04 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x140688794 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x1406C1DE8 (PspInsertThread.c)
 *     SeCreateAccessState @ 0x1406DA670 (SeCreateAccessState.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE5C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140345810 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        ACCESS_MASK a5,
        GENERIC_MAPPING *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  SeCaptureSubjectContextEx(a1, a2, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a3, a4, a5, a6);
}
