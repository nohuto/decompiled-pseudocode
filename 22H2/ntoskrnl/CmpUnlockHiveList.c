/*
 * XREFs of CmpUnlockHiveList @ 0x14071C694
 * Callers:
 *     CmpJoinClassOfTrust @ 0x14032CBB4 (CmpJoinClassOfTrust.c)
 *     CmpUnJoinClassOfTrust @ 0x140360E0C (CmpUnJoinClassOfTrust.c)
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14071D9E8 (CmpCreateHive.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 */

char CmpUnlockHiveList()
{
  return ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
}
