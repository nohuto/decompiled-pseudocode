/*
 * XREFs of PsReferenceProcessFilePointer @ 0x1406F4310
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1402013A4 (SepVerifyDesktopAppxImage.c)
 *     SepMandatorySubProcessToken @ 0x1402F5FEC (SepMandatorySubProcessToken.c)
 *     DbgkCreateThread @ 0x14063C210 (DbgkCreateThread.c)
 *     PspCallProcessNotifyRoutines @ 0x140684B0C (PspCallProcessNotifyRoutines.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     CmpCheckExeOwnerForPca @ 0x14076FD28 (CmpCheckExeOwnerForPca.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 */

__int64 __fastcall PsReferenceProcessFilePointer(struct _EX_RUNDOWN_REF *a1, ULONG_PTR *a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  __int64 Count; // rcx
  unsigned __int64 v6; // rax
  ULONG_PTR v7; // rbx
  __int64 result; // rax

  v2 = a1 + 139;
  if ( ExAcquireRundownProtection(a1 + 139) )
  {
    Count = a1[163].Count;
    if ( Count )
    {
      v6 = MiSectionControlArea(Count);
      v7 = MiReferenceControlAreaFile(v6);
      ExReleaseRundownProtection(v2);
      result = 0LL;
      *a2 = v7;
      return result;
    }
    ExReleaseRundownProtection(v2);
  }
  return 3221225473LL;
}
