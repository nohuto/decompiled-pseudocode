/*
 * XREFs of ExWnfCleanupServerSiloState @ 0x140A03430
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409A9EC0 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ExpWnfDeleteScopeInstances @ 0x140A047F8 (ExpWnfDeleteScopeInstances.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

int __fastcall ExWnfCleanupServerSiloState(PVOID *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID v3; // rax

  if ( *a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExpWnfDeleteScopeInstances(*a1, 2LL);
    ExpWnfDeleteScopeInstances(*a1, 0LL);
    ExFreePoolWithTag(*a1, 0x20666E57u);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( a1[1] )
    ZwClose(a1[1]);
  v3 = a1[2];
  if ( v3 )
    LODWORD(v3) = ZwClose(a1[2]);
  return (int)v3;
}
