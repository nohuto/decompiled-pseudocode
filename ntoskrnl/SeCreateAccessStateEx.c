/*
 * XREFs of SeCreateAccessStateEx @ 0x1406991E0
 * Callers:
 *     SeCreateAccessState @ 0x1406991A0 (SeCreateAccessState.c)
 *     PspInsertThread @ 0x1406B0F50 (PspInsertThread.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14070C414 (PspOneDirectionSecurityDomainCombine.c)
 *     PspInsertProcess @ 0x14070E514 (PspInsertProcess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspCombineSecurityDomains @ 0x140778A04 (PspCombineSecurityDomains.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A1628C (CmpDoAccessCheckOnKCB.c)
 * Callees:
 *     SepCreateAccessStateFromSubjectContext @ 0x140266820 (SepCreateAccessStateFromSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 */

__int64 __fastcall SeCreateAccessStateEx(
        struct _KTHREAD *a1,
        struct _KPROCESS *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5,
        _DWORD *a6)
{
  struct _SECURITY_SUBJECT_CONTEXT v9; // [rsp+30h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  SeCaptureSubjectContextEx(a1, a2, &v9);
  return SepCreateAccessStateFromSubjectContext(&v9, a3, a4, a5, a6);
}
