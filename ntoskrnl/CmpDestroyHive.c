/*
 * XREFs of CmpDestroyHive @ 0x140A19FFC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmLoadKey @ 0x140732FF8 (CmLoadKey.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140A08D50 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x140A09144 (CmSaveMergedKeys.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpFreeAllMemory @ 0x140A0E6C8 (CmpFreeAllMemory.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 *     CmpCreateEmptyHiveClone @ 0x140A19E20 (CmpCreateEmptyHiveClone.c)
 * Callees:
 *     CmpUnJoinClassOfTrust @ 0x1402BFCE8 (CmpUnJoinClassOfTrust.c)
 *     CmpDestroySecurityCache @ 0x14074ADE4 (CmpDestroySecurityCache.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x14074AE98 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCmdHiveClose @ 0x14074B34C (CmpCmdHiveClose.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14074B4AC (CmpVolumeContextDecrementRefCount.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     HvHiveCleanup @ 0x1407A56B8 (HvHiveCleanup.c)
 */

void __fastcall CmpDestroyHive(volatile signed __int32 *P)
{
  struct _PRIVILEGE_SET *v2; // rcx

  CmpDestroySecurityCache((__int64)P);
  CmpUnJoinClassOfTrust((__int64)P);
  CmpVERemoveHiveFromSIDMappingTable((__int64)P);
  HvHiveCleanup((__int64)P);
  CmpCmdHiveClose((__int64)P);
  v2 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 599);
  if ( v2 )
    CmpVolumeContextDecrementRefCount(v2);
  if ( _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
}
