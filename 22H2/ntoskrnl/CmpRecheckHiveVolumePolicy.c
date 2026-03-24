/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x140361750
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1407C8C58 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402D87F0 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x1403EFE7C (CmpAdjustFileCFSafety.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     HvUnlockHiveFilePages @ 0x1406A5904 (HvUnlockHiveFilePages.c)
 *     HvViewMapContainsLockedPages @ 0x14071BE00 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14071D558 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14071D590 (HvLockHiveFlusherExclusive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14071D5AC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  int v2; // ecx
  bool v3; // cf
  __int64 v4; // rcx
  int v5; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4832) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal()
      || (v2 = *(_DWORD *)(a1 + 4152), (v2 & 0x20) != 0) )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 216) )
        CmpArmLazyWriter(2, 0LL, 0);
    }
    else if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
    {
      v3 = (v2 & 0x10000) != 0;
      v4 = a1;
      if ( !v3 )
      {
        HvUnlockHiveFlusherExclusive(a1);
        CmpUnlockRegistry();
        v5 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1536));
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(a1);
        if ( v5 < 0 )
          goto LABEL_11;
        *(_DWORD *)(a1 + 4152) |= 0x10000u;
        v4 = a1;
      }
      HvUnlockHiveFilePages(v4);
    }
  }
LABEL_11:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
