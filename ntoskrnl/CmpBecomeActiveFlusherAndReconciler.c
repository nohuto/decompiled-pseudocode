/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x140820C84
 * Callers:
 *     CmShutdownSystem1 @ 0x140613784 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140A0A220 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x140A12A54 (CmReplaceKey.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x140244040 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x140244090 (CmpAcquireWriteQueue.c)
 *     CmpLockRegistryFreezeAware @ 0x1406BF3D0 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14085C738 (CmpWaitOnHiveWriteQueue.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF2098 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF20B4 (HvUnlockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v8; // rdx

  v2 = (_QWORD *)(a1 + 4208);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    HvLockHiveFlusherExclusive(a1);
    if ( CmpIsWriteQueueActive(v2) )
    {
      v8 = v2;
      goto LABEL_7;
    }
    if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) )
      break;
    v8 = (_QWORD *)(a1 + 4192);
LABEL_7:
    CmpWaitOnHiveWriteQueue(a1, v8);
  }
  CmpAcquireWriteQueue(v2);
  CmpAcquireWriteQueue((_QWORD *)(a1 + 4192));
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry(v4, v3, v5, v6);
}
