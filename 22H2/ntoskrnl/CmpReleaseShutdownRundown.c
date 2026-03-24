/*
 * XREFs of CmpReleaseShutdownRundown @ 0x1406CE440
 * Callers:
 *     CmpTryToRundownHive @ 0x140360C44 (CmpTryToRundownHive.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmpSetKeySecurity @ 0x1406E6CFC (CmpSetKeySecurity.c)
 *     CmLoadDifferencingKey @ 0x1406E737C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x1406E8480 (CmCreateKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14071B940 (CmpLateUnloadHiveWorker.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     CmpLoadHiveThread @ 0x14079F180 (CmpLoadHiveThread.c)
 *     NtLockRegistryKey @ 0x1407C3710 (NtLockRegistryKey.c)
 *     CmpAssignKeySecurity @ 0x1407D0370 (CmpAssignKeySecurity.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeys @ 0x140868720 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140868940 (NtQueryOpenSubKeysEx.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     CmGetSystemDriverList @ 0x140A5F174 (CmGetSystemDriverList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 */

_QWORD *CmpReleaseShutdownRundown()
{
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
