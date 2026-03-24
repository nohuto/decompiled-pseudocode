/*
 * XREFs of SeQuerySessionIdToken @ 0x140692F80
 * Callers:
 *     SeQueryInformationToken @ 0x140656BD0 (SeQueryInformationToken.c)
 *     NtQueryInformationToken @ 0x140657DF0 (NtQueryInformationToken.c)
 *     PspAllocateProcess @ 0x1406D6638 (PspAllocateProcess.c)
 *     PnpGetCallerSessionId @ 0x1408A1E2C (PnpGetCallerSessionId.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
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
