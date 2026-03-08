/*
 * XREFs of VmpPrefetchVirtualAddresses @ 0x1405F828C
 * Callers:
 *     VmPrefetchVirtualAddresses @ 0x1409D90F4 (VmPrefetchVirtualAddresses.c)
 *     VmpPrefetchWorker @ 0x1409DA890 (VmpPrefetchWorker.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VmpProcessContextLockShared @ 0x14045E744 (VmpProcessContextLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     VmpFillGpnRanges @ 0x1405F6B8C (VmpFillGpnRanges.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmpPrefetchVirtualAddresses(volatile LONG *SpinLock, _QWORD *a2, unsigned __int64 a3)
{
  int v6; // ebx
  unsigned __int64 v7; // r13
  void *Pool2; // r15
  _QWORD *v9; // rsi
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
  __int64 (__fastcall **ExtensionTable)(void *, unsigned __int64, __int64, __int64); // [rsp+C8h] [rbp+58h]

  v22 = *((_QWORD *)SpinLock + 9);
  v24 = 0LL;
  if ( v22 == -1
    || (ExtensionTable = (__int64 (__fastcall **)(void *, unsigned __int64, __int64, __int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)VmpExtensionHost)) == 0LL )
  {
    return (unsigned int)-1073741667;
  }
  else
  {
    v27 = 0LL;
    v7 = a3;
    if ( a3 >= 0x2000 )
      v7 = 0x2000LL;
    Pool2 = (void *)ExAllocatePool2(64LL, 16 * v7, 1917873494LL);
    if ( Pool2 )
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
          VmpFillGpnRanges(
            (__int64)SpinLock,
            (unsigned __int64 *)&v24,
            (__int64)Pool2,
            (__int64 *)&v27,
            v7,
            (__int64 *)&v25);
          if ( v27 >= v7 )
          {
            v23 = *((_QWORD *)SpinLock + 5);
            ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
            if ( KiIrqlFlags )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
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
            __writecr8(v10);
            v6 = (*ExtensionTable)(Pool2, v27, v22, 1LL);
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
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v10 <= 0xFu && v17 >= 2u )
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
      __writecr8(v10);
      if ( !v27 || (v6 = (*ExtensionTable)(Pool2, v27, v22, 1LL), v6 >= 0) )
        v6 = 0;
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_34:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(VmpExtensionHost + 64));
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
  }
  return (unsigned int)v6;
}
