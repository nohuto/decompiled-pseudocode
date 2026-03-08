/*
 * XREFs of PsReferenceProcessFilePointer @ 0x14074C940
 * Callers:
 *     SepMandatorySubProcessToken @ 0x140297F20 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1405B5B50 (SepVerifyDesktopAppxImage.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     CmpCheckExeOwnerForPca @ 0x14074CBB4 (CmpCheckExeOwnerForPca.c)
 *     PspCallProcessNotifyRoutines @ 0x1407D2E14 (PspCallProcessNotifyRoutines.c)
 *     DbgkCreateThread @ 0x1407ED96C (DbgkCreateThread.c)
 *     PsCheckProcessFileSigningLevel @ 0x1409AD870 (PsCheckProcessFileSigningLevel.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     MiSectionControlArea @ 0x1403349C0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFileWithTag @ 0x1403440B0 (MiReferenceControlAreaFileWithTag.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, unsigned __int64 *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFileWithTag(v6, 0x746C6644u);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
