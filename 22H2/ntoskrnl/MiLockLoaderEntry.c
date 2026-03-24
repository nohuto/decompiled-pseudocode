/*
 * XREFs of MiLockLoaderEntry @ 0x140358C88
 * Callers:
 *     MiSetPagingOfDriver @ 0x140336B2C (MiSetPagingOfDriver.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiFindDriverNonPagedSections @ 0x14075C274 (MiFindDriverNonPagedSections.c)
 *     MiLockdownSections @ 0x14075DD54 (MiLockdownSections.c)
 *     MiFreeInitializationCode @ 0x14075E45C (MiFreeInitializationCode.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402FAF60 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockLoaderEntry(__int64 a1, ULONG_PTR a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = a1 + 104;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 2 )
      ExAcquirePushLockSharedEx(v3, 0LL);
    else
      ExAcquireAutoExpandPushLockExclusive(v3, 0LL);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(v3, a2);
  }
}
