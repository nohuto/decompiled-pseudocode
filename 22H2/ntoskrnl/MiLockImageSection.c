/*
 * XREFs of MiLockImageSection @ 0x1406F5820
 * Callers:
 *     MiLockPagableImageSection @ 0x14025A6C0 (MiLockPagableImageSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     ExBlockOnAddressPushLock @ 0x1403481B0 (ExBlockOnAddressPushLock.c)
 *     ExfUnblockPushLock @ 0x140411A50 (ExfUnblockPushLock.c)
 */

_QWORD *__fastcall MiLockImageSection(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ett
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = *a2;
  do
  {
    while ( 1 )
    {
      LODWORD(v13) = v9;
      if ( v9 != 1 )
        break;
      ExBlockOnAddressPushLock(&qword_140C65A60, a2, &v13, 4uLL, 0LL);
      v9 = *a2;
    }
    v10 = v9;
    v9 = _InterlockedCompareExchange(a2, v9 + 1, v9);
  }
  while ( v10 != v9 );
  if ( v9 < 2 )
  {
    MiLockCode(a1, a3, a4, 1);
    _InterlockedIncrement(a2);
    _InterlockedOr(v12, 0);
    if ( qword_140C65A60 )
      ExfUnblockPushLock(&qword_140C65A60, 0LL);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
