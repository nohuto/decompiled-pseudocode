/*
 * XREFs of SeCreateAccessStateEx @ 0x1406618D0
 * Callers:
 *     PspOneDirectionSecurityDomainCombine @ 0x140607210 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x140607710 (PspInsertProcess.c)
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     SeCreateAccessState @ 0x140661880 (SeCreateAccessState.c)
 *     PspCombineSecurityDomains @ 0x1406A0F84 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406A5CB0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FE0C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14027C800 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140657C60 (SeCaptureSubjectContextEx.c)
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
