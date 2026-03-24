/*
 * XREFs of ObOpenObjectByName @ 0x1406CEA10
 * Callers:
 *     NtOpenJobObject @ 0x1405D8F10 (NtOpenJobObject.c)
 *     NtOpenDirectoryObject @ 0x140677420 (NtOpenDirectoryObject.c)
 *     NtOpenSection @ 0x1406775E0 (NtOpenSection.c)
 *     NtOpenEvent @ 0x14067DAA0 (NtOpenEvent.c)
 *     NtOpenMutant @ 0x1406851F0 (NtOpenMutant.c)
 *     NtOpenSemaphore @ 0x1406866E0 (NtOpenSemaphore.c)
 *     ExCreateCallback @ 0x1406A0050 (ExCreateCallback.c)
 *     NtOpenSession @ 0x1406A3080 (NtOpenSession.c)
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 *     CmCreateKey @ 0x1406E8480 (CmCreateKey.c)
 *     CmpLinkHiveToMaster @ 0x14071D600 (CmpLinkHiveToMaster.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     IopReferenceDriverObjectByName @ 0x14073ECD8 (IopReferenceDriverObjectByName.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     CmpCreatePredefined @ 0x1407A80B8 (CmpCreatePredefined.c)
 *     NtOpenPartition @ 0x1407D18E0 (NtOpenPartition.c)
 *     NtOpenRegistryTransaction @ 0x1408685D0 (NtOpenRegistryTransaction.c)
 *     CmpDoReOpenTransKey @ 0x140882300 (CmpDoReOpenTransKey.c)
 *     NtOpenIoCompletion @ 0x1408944B0 (NtOpenIoCompletion.c)
 *     NtOpenTimer @ 0x14094F1B0 (NtOpenTimer.c)
 *     NtOpenKeyedEvent @ 0x14095B190 (NtOpenKeyedEvent.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140345940 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  struct _LIST_ENTRY *CurrentSilo; // rax

  CurrentSilo = PsGetCurrentSilo();
  return ObOpenObjectByNameEx(a1, a2, a3, a4, a5, a6, CurrentSilo, a7);
}
