/*
 * XREFs of SeCreateAccessState @ 0x1406991A0
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     ObReferenceObjectByName @ 0x140698F90 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x14069AA20 (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1406ED5C0 (ObDuplicateObject.c)
 *     SeSubProcessToken @ 0x14070B29C (SeSubProcessToken.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x14076A000 (PsOpenThread.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x140790200 (NtGetNextThread.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409AE694 (PspReferenceCpuPartitionByHandle.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C63C0 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x1409FECA4 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406991E0 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r10

  CurrentThread = KeGetCurrentThread();
  return SeCreateAccessStateEx((_DWORD)CurrentThread, CurrentThread->ApcState.Process, a1, a2, a3, a4);
}
