/*
 * XREFs of PsReferenceProcessFilePointer @ 0x140604BE0
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1402013A4 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1402517DC (SepMandatorySubProcessToken.c)
 *     PspCallProcessNotifyRoutines @ 0x14061AEAC (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     DbgkCreateThread @ 0x140647420 (DbgkCreateThread.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FB68 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14031CEB0 (MiReferenceControlAreaFile.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection_0(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection_0(v2);
  }
  return 3221225473LL;
}
