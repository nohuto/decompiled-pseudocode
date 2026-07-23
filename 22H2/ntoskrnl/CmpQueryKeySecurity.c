/*
 * XREFs of CmpQueryKeySecurity @ 0x1406DE150
 * Callers:
 *     CmpSecurityMethod @ 0x1406DDF10 (CmpSecurityMethod.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140201A30 (CmSiFreeMemory.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405EF460 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x140648B00 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140648B60 (CmpUnlockKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14066DDB4 (CmpTransSearchAddTransFromKeyBody.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1406DE310 (SeQuerySecurityDescriptorInfo.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, DWORD *a2, void *a3, ULONG *a4, __int64 a5)
{
  char v5; // si
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v11; // r14
  int started; // ebx
  __int64 v13; // rbp
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h] BYREF
  __int128 v17; // [rsp+38h] [rbp-40h]

  v5 = 0;
  v16 = 0LL;
  a5 = 0LL;
  v17 = 0LL;
  WORD1(v16) = -1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v11 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
  if ( v11 )
  {
    CmpLockRegistry();
    v5 = 1;
    started = CmpStartKcbStackForTopLayerKcb(&v16, a1[1]);
    if ( started < 0 )
      goto LABEL_10;
    CmpLockKcbStackShared((__int64)&v16);
    started = CmpPerformKeyBodyDeletionCheck((__int64)a1, 0LL);
    if ( started < 0 )
      goto LABEL_9;
    if ( a1[7] || a1[8] )
    {
      started = CmpTransSearchAddTransFromKeyBody(a1, &a5);
      if ( started < 0 || (v13 = a5, started = CmpPerformKeyBodyDeletionCheck((__int64)a1, a5), started < 0) )
      {
LABEL_9:
        CmpUnlockKcbStack((__int64)&v16);
        goto LABEL_10;
      }
    }
    else
    {
      v13 = a5;
    }
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(CmpGetSecurityCacheEntryForKcbStack((__int64)&v16, v13, 0LL) + 32);
    started = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
    if ( started >= 0 )
      started = 0;
    goto LABEL_9;
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  started = -1073741431;
LABEL_10:
  if ( *((_QWORD *)&v17 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v17 + 1));
  if ( v5 )
    CmpUnlockRegistry();
  if ( v11 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)started;
}
