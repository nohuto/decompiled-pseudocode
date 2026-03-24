/*
 * XREFs of CmpDetachFromRegistryProcess @ 0x1405F613C
 * Callers:
 *     CmpDoQueryKeyName @ 0x140347BE0 (CmpDoQueryKeyName.c)
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmEnumerateKey @ 0x1405F4350 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405F5810 (CmQueryKey.c)
 *     CmpDoParseKey @ 0x140646890 (CmpDoParseKey.c)
 *     CmpPerformUnloadKey @ 0x14066CBFC (CmpPerformUnloadKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406852C0 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1406CE470 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1406E47E4 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14071B940 (CmpLateUnloadHiveWorker.c)
 *     CmpLinkHiveToMaster @ 0x14071D600 (CmpLinkHiveToMaster.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpTransMgrPrepare @ 0x140768324 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1407684C0 (CmpTransMgrCommit.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     NtFreezeRegistry @ 0x140868510 (NtFreezeRegistry.c)
 *     NtQueryOpenSubKeys @ 0x140868720 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868940 (NtQueryOpenSubKeysEx.c)
 *     CmShutdownSystem @ 0x14086B948 (CmShutdownSystem.c)
 *     CmpFreeAllMemory @ 0x14086BCE8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14086DCC8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E18C (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyRemapToVirtual @ 0x14086F870 (CmKeyBodyRemapToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x14086FFEC (CmpDoBuildVirtualStack.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 */

__int64 __fastcall CmpDetachFromRegistryProcess(__int64 a1)
{
  return KiUnstackDetachProcess(a1, 0);
}
