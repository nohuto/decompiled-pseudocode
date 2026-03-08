/*
 * XREFs of MmIsSessionLeaderProcess @ 0x140757A50
 * Callers:
 *     PspAllocateProcess @ 0x140707E10 (PspAllocateProcess.c)
 *     MiInitializeSessionGlobals @ 0x14075793C (MiInitializeSessionGlobals.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 */

_BOOL8 MmIsSessionLeaderProcess()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *v1; // r8

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  return v1 == CurrentServerSiloGlobals[54].Blink;
}
