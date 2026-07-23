/*
 * XREFs of SeQuerySessionIdToken @ 0x1405F2610
 * Callers:
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 *     PnpGetCallerSessionId @ 0x1408A1F8C (PnpGetCallerSessionId.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 */

NTSTATUS __stdcall SeQuerySessionIdToken(PACCESS_TOKEN Token, PULONG SessionId)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
  *SessionId = *((_DWORD *)Token + 30);
  ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
  KeLeaveCriticalRegion();
  return 0;
}
