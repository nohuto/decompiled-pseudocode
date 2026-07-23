/*
 * XREFs of SeCreateAccessStateEx @ 0x1406566F0
 * Callers:
 *     PspCombineSecurityDomains @ 0x140600714 (PspCombineSecurityDomains.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406038E0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspInsertThread @ 0x14063DE48 (PspInsertThread.c)
 *     SeCreateAccessState @ 0x1406566A0 (SeCreateAccessState.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140696CA0 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x1406971A0 (PspInsertProcess.c)
 *     CmpDoAccessCheckOnKCB @ 0x14086FF6C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x14026A7A0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
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
