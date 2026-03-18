/*
 * XREFs of SeCreateAccessState @ 0x1406C2F10
 * Callers:
 *     SepCreateTokenEx @ 0x140229730 (SepCreateTokenEx.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     ObReferenceObjectByName @ 0x1406C2D00 (ObReferenceObjectByName.c)
 *     WmipCreateGuidObject @ 0x1406C50E0 (WmipCreateGuidObject.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     ObReferenceObjectByNameEx @ 0x1407153CC (ObReferenceObjectByNameEx.c)
 *     PsOpenThread @ 0x1407BBD70 (PsOpenThread.c)
 *     NtGetNextProcess @ 0x1407D4BE0 (NtGetNextProcess.c)
 *     NtGetNextThread @ 0x1407DF590 (NtGetNextThread.c)
 *     PspReferenceCpuPartitionByHandle @ 0x1409B16E4 (PspReferenceCpuPartitionByHandle.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     CMFCheckAccess @ 0x140A01994 (CMFCheckAccess.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x1406C2F50 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r10

  CurrentThread = KeGetCurrentThread();
  return SeCreateAccessStateEx((_DWORD)CurrentThread, CurrentThread->ApcState.Process, a1, a2, a3, a4);
}
