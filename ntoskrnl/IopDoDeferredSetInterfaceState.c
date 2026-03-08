/*
 * XREFs of IopDoDeferredSetInterfaceState @ 0x140681E54
 * Callers:
 *     PipProcessStartPhase2 @ 0x1406817A0 (PipProcessStartPhase2.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 * Callees:
 *     PpMarkDeviceStackExtensionFlag @ 0x140201F50 (PpMarkDeviceStackExtensionFlag.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDoDeferredSetInterfaceState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  void **v4; // rdi
  char *v5; // rbx
  void **v6; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 16, 0);
  v4 = (void **)(a1 + 608);
  while ( 1 )
  {
    v5 = (char *)*v4;
    if ( *v4 == v4 )
      break;
    if ( *((void ***)v5 + 1) != v4 || (v6 = *(void ***)v5, *(char **)(*(_QWORD *)v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v6;
    v6[1] = v4;
    LOBYTE(v3) = 1;
    IopProcessSetInterfaceState(v5 + 16, v3, 0LL);
    ExFreePoolWithTag(*((PVOID *)v5 + 3), 0);
    ExFreePoolWithTag(v5, 0);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
  return 0LL;
}
