/*
 * XREFs of CmpDestroyHive @ 0x140729DF8
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x14069DA54 (CmLoadKey.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     CmSaveKey @ 0x140729A8C (CmSaveKey.c)
 *     CmpFreeAllMemory @ 0x14086BCE8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140872E98 (CmpCreateEmptyHiveClone.c)
 *     CmRestoreKey @ 0x14087BF80 (CmRestoreKey.c)
 *     CmSaveMergedKeys @ 0x14087CAE0 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x140360E0C (CmpUnJoinClassOfTrust.c)
 *     HvHiveCleanup @ 0x1406572B4 (HvHiveCleanup.c)
 *     CmpDeleteHive @ 0x14071BAC4 (CmpDeleteHive.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14071BE10 (CmpVolumeContextDecrementRefCount.c)
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14071C34C (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpDestroySecurityCache @ 0x14071C444 (CmpDestroySecurityCache.c)
 */

void __fastcall CmpDestroyHive(volatile signed __int32 *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache((__int64)P);
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v2 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 604);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  if ( _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
