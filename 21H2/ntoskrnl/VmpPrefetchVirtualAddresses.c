/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x1405A47B4
 * Callers:
 *     VmPrefetchVirtualAddresses @ 0x14092E9B0 (VmPrefetchVirtualAddresses.c)
 *     VmpPrefetchWorker @ 0x14092FB90 (VmpPrefetchWorker.c)
 * Callees:
 *     ExGetExtensionTable @ 0x14021C858 (ExGetExtensionTable.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VmpFillGpnRanges @ 0x1405A35D0 (VmpFillGpnRanges.c)
 *     VmpProcessContextLockShared @ 0x1405A4C04 (VmpProcessContextLockShared.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchVirtualAddresses(volatile LONG *SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // r13
  PVOID PoolWithTag; // r15
  _QWORD *v9; // r14
  unsigned __int8 v10; // bl
  unsigned __int64 v11; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r8
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-40h]
  __int64 v23; // [rsp+38h] [rbp-38h]
  __int128 v24; // [rsp+40h] [rbp-30h] BYREF
  __int128 v25; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h]
  unsigned __int64 v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 (__fastcall **ExtensionTable)(PVOID, unsigned __int64, __int64, __int64); // [rsp+C8h] [rbp+58h]

  v22 = *((_QWORD *)SpinLock + 9);
  v24 = 0LL;
  if ( v22 == -1
    || (ExtensionTable = (__int64 (__fastcall **)(PVOID, unsigned __int64, __int64, __int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost)) == 0LL )
  {
    return (unsigned int)-1073741667;
  }
  else
  {
    v27 = 0LL;
    v7 = a3;
    if ( a3 >= 0x2000 )
      v7 = 0x2000LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7, 0x72506D56u);
    if ( PoolWithTag )
    {
      v9 = &a2[2 * a3];
      v26 = 0LL;
      v25 = 0LL;
      v10 = VmpProcessContextLockShared(SpinLock);
      while ( a2 < v9 )
      {
        v11 = ((*a2 + (((*a2 & 0xFFFLL) + a2[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL)) >> 12) - (*a2 >> 12);
        *(_QWORD *)&v24 = *a2 >> 12;
        *((_QWORD *)&v24 + 1) = v11;
        while ( *((_QWORD *)&v24 + 1) )
        {
          VmpFillGpnRanges((__int64)SpinLock, (unsigned __int64 *)&v24, (__int64)PoolWithTag, (__int64 *)&v27, v7, &v25);
          if ( v27 >= v7 )
          {
            v23 = *((_QWORD *)SpinLock + 5);
            ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  SchedulerAssist = CurrentPrcb->SchedulerAssist;
                  v15 = ~(unsigned __int16)(-1LL << (v10 + 1));
                  v16 = (v15 & SchedulerAssist[5]) == 0;
                  SchedulerAssist[5] &= v15;
                  if ( v16 )
                    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v10);
            v6 = (*ExtensionTable)(PoolWithTag, v27, v22, 1LL);
            if ( v6 < 0 )
              goto LABEL_34;
            v27 = 0LL;
            v10 = VmpProcessContextLockShared(SpinLock);
            if ( v23 != *((_QWORD *)SpinLock + 5) )
            {
              v25 = 0LL;
              v26 = 0LL;
            }
          }
        }
        a2 += 2;
      }
      ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && v10 <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = v18->SchedulerAssist;
            v20 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v16 = (v20 & v19[5]) == 0;
            v19[5] &= v20;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick((__int64)v18);
          }
        }
      }
      __writecr8(v10);
      if ( !v27 || (v6 = (*ExtensionTable)(PoolWithTag, v27, v22, 1LL), v6 >= 0) )
        v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_34:
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(VmpExtensionHost + 64));
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v6;
}
