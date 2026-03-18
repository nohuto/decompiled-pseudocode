/*
 * XREFs of CiProcessSuspend @ 0x1C0004AE8
 * Callers:
 *     CiProcessNotification @ 0x1C00027C0 (CiProcessNotification.c)
 * Callees:
 *     CiSchedulerPoke @ 0x1C00027F0 (CiSchedulerPoke.c)
 *     CiSchedulerSetPriority @ 0x1C00029B0 (CiSchedulerSetPriority.c)
 *     WPP_SF_qqd @ 0x1C0004CA8 (WPP_SF_qqd.c)
 *     CiSchedulerPostSuspend @ 0x1C0004D88 (CiSchedulerPostSuspend.c)
 *     CiThreadDecrementScheduledCount @ 0x1C000A660 (CiThreadDecrementScheduledCount.c)
 *     CiThreadIncrementScheduledCount @ 0x1C000B150 (CiThreadIncrementScheduledCount.c)
 *     CiReleaseProcessLock @ 0x1C000BA80 (CiReleaseProcessLock.c)
 *     CiAcquireProcessLock @ 0x1C000BAB0 (CiAcquireProcessLock.c)
 */

__int64 __fastcall CiProcessSuspend(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  unsigned __int8 v5; // bp
  char v6; // di
  __int64 **v7; // rdi
  __int64 **i; // rsi
  __int64 **v9; // rcx
  __int64 *j; // r15
  unsigned int v11; // r13d
  char v12; // al
  __int64 result; // rax
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+78h] [rbp+10h] BYREF
  __int64 v16; // [rsp+80h] [rbp+18h]

  v4 = 0;
  v14 = 0LL;
  v5 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    WPP_SF_qqd(WPP_GLOBAL_Control->AttachedDevice, a2, a3, a1, *(_QWORD *)(a1 + 80), (unsigned __int8)a2);
  v6 = 0;
  v15 = 0;
  CiAcquireProcessLock(a1);
  if ( *(_BYTE *)(a1 + 88) != v5 )
  {
    v7 = *(__int64 ***)(a1 + 64);
    for ( i = (__int64 **)(a1 + 64); v7 != i; v7 = (__int64 **)*v7 )
    {
      v9 = v7 - 14;
      if ( v5 )
        CiThreadDecrementScheduledCount(v9);
      else
        CiThreadIncrementScheduledCount(v9);
    }
    v16 = KeQueryInterruptTimePrecise(&v14);
    KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
    for ( j = *i; j != (__int64 *)i; v4 = v11 )
    {
      v11 = v4 + 1;
      if ( (*(_BYTE *)(*(_QWORD *)(*(j - 5) + 136) + 3LL) & 1) == 0 )
        v11 = v4;
      v12 = v5 & 1 | *((_BYTE *)j + 36) & 0xFE;
      *((_BYTE *)j + 36) = v12;
      if ( (v12 & 1) != 0 )
      {
        if ( *((_BYTE *)j - 5) != 0xFF )
          KeSetBasePriorityThread((PKTHREAD)*(j - 2), *((_DWORD *)j + 8));
        *((_BYTE *)j - 5) = -1;
      }
      else
      {
        CiSchedulerSetPriority((__int64)(j - 14));
      }
      j = (__int64 *)*j;
    }
    CiSchedulerPostSuspend(v5, v4, v16, &v15);
    v6 = v15;
    *(_BYTE *)(a1 + 88) = v5;
  }
  result = CiReleaseProcessLock(a1);
  if ( v6 )
    return CiSchedulerPoke(0);
  return result;
}
