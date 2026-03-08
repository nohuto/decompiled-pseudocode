/*
 * XREFs of ?NotifySharedPowerGraphicsFStateTransition@DXGGLOBAL@@QEAAXQEAXKIE@Z @ 0x1C0050E04
 * Callers:
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C0051530 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::NotifySharedPowerGraphicsFStateTransition(
        DXGGLOBAL *this,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5)
{
  char v9; // si
  __int64 **i; // rbx
  KIRQL CurrentIrql; // al
  __int64 v12; // r9
  __int64 v13; // r15
  KIRQL v14; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = 0;
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 223, &LockHandle);
  }
  else if ( *((struct _KTHREAD **)this + 225) != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 1792));
    v9 = 1;
  }
  for ( i = (__int64 **)*((_QWORD *)this + 228); i != (__int64 **)((char *)this + 1824) && i; i = (__int64 **)*i )
  {
    if ( i[4] == a2 && i[7] )
    {
      CurrentIrql = KeGetCurrentIrql();
      LOBYTE(v12) = a5;
      v13 = CurrentIrql;
      ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64, __int64 *))i[7])(a2, a3, a4, v12, i[3]);
      if ( (_BYTE)v13 != KeGetCurrentIrql() )
      {
        v14 = KeGetCurrentIrql();
        WdLogSingleEntry5(0LL, 275LL, 16LL, this, v13, v14);
      }
    }
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  else if ( v9 )
  {
    _InterlockedDecrement((volatile signed __int32 *)this + 452);
    ExReleasePushLockSharedEx((char *)this + 1792, 0LL);
    KeLeaveCriticalRegion();
  }
}
