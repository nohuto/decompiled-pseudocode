/*
 * XREFs of ObOpenObjectByName @ 0x14068C9D0
 * Callers:
 *     NtOpenMutant @ 0x14068A010 (NtOpenMutant.c)
 *     IopReferenceDriverObjectByName @ 0x14068C668 (IopReferenceDriverObjectByName.c)
 *     NtOpenSemaphore @ 0x14068C730 (NtOpenSemaphore.c)
 *     NtOpenEvent @ 0x14068C7E0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x14068C8B0 (NtOpenSection.c)
 *     NtOpenDirectoryObject @ 0x14068C940 (NtOpenDirectoryObject.c)
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x140794AE8 (IopLoadDriver.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1407E3690 (NtOpenSession.c)
 *     NtOpenJobObject @ 0x1407EA570 (NtOpenJobObject.c)
 *     IopUnloadDriver @ 0x1408585F4 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x14085D838 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x140861A60 (NtOpenPartition.c)
 *     NtOpenIoCompletion @ 0x140947CE0 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x1409B05D0 (NtOpenCpuPartition.c)
 *     NtOpenTimer @ 0x1409FB710 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140A04A40 (NtOpenKeyedEvent.c)
 *     NtOpenRegistryTransaction @ 0x140A0D990 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140A2AC84 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E220 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406ED090 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
