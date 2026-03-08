/*
 * XREFs of ObOpenObjectByName @ 0x1406C39E0
 * Callers:
 *     IopReferenceDriverObjectByName @ 0x1406C3670 (IopReferenceDriverObjectByName.c)
 *     NtOpenSemaphore @ 0x1406C3740 (NtOpenSemaphore.c)
 *     NtOpenEvent @ 0x1406C37F0 (NtOpenEvent.c)
 *     NtOpenSection @ 0x1406C38C0 (NtOpenSection.c)
 *     NtOpenDirectoryObject @ 0x1406C3950 (NtOpenDirectoryObject.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     NtOpenMutant @ 0x14078AA40 (NtOpenMutant.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1407940F0 (NtOpenSession.c)
 *     NtOpenJobObject @ 0x14079B7D0 (NtOpenJobObject.c)
 *     CmpCreatePredefined @ 0x1408130D4 (CmpCreatePredefined.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     NtOpenPartition @ 0x14085DBF0 (NtOpenPartition.c)
 *     NtOpenIoCompletion @ 0x140944CC0 (NtOpenIoCompletion.c)
 *     NtOpenCpuPartition @ 0x1409AD580 (NtOpenCpuPartition.c)
 *     NtOpenTimer @ 0x1409F8880 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x140A01D50 (NtOpenKeyedEvent.c)
 *     NtOpenRegistryTransaction @ 0x140A0AC80 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140A27F24 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
