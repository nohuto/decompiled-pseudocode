/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1402062F8
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x140275E80 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiReferenceControlAreaFile @ 0x14029D540 (MiReferenceControlAreaFile.c)
 *     MiLogPageAccess @ 0x1402BACE0 (MiLogPageAccess.c)
 *     MiFlushControlArea @ 0x1405296D4 (MiFlushControlArea.c)
 *     MiPreventControlAreaDelete @ 0x140529E9C (MiPreventControlAreaDelete.c)
 *     MiNoPagesLastChance @ 0x140550708 (MiNoPagesLastChance.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     NtOpenProcessTokenEx @ 0x140653D50 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     PfQuerySuperfetchInformation @ 0x1406CD5D0 (PfQuerySuperfetchInformation.c)
 *     SeCaptureSubjectContext @ 0x1406CE8F0 (SeCaptureSubjectContext.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 *     PsImpersonateClient @ 0x1406D3C60 (PsImpersonateClient.c)
 *     PsReferenceEffectiveToken @ 0x1406D5B10 (PsReferenceEffectiveToken.c)
 *     SeCreateClientSecurity @ 0x1406D6B30 (SeCreateClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x1406D6D20 (SeCreateClientSecurityEx.c)
 *     PspReferenceSystemDll @ 0x1406FD074 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), 0x746C6644u);
  return v1;
}
