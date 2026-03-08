/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1402B2B14
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402B2DEC (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x140815160 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x140851670 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140349EA4 (CmpArmLazyWriter.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14072F528 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140731AA4 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x14079B790 (HvUnlockHiveFilePages.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4792) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal() || (*(_DWORD *)(a1 + 4112) & 0x20) != 0 )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 224) )
        CmpArmLazyWriter(2LL, 0LL, 0LL);
    }
    else
    {
      HvUnlockHiveFilePages(a1);
    }
  }
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
