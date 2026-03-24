/*
 * XREFs of PopFxDispatchPluginWorkOnce @ 0x1402636DC
 * Callers:
 *     PopFxProcessWorkPool @ 0x140263914 (PopFxProcessWorkPool.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     PopFxProcessWork @ 0x140260844 (PopFxProcessWork.c)
 *     PopPepWork @ 0x1402614FC (PopPepWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x140262B58 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x140263834 (PopFxEnableWorkOrderWatchdog.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopFxBugCheck @ 0x1405693EC (PopFxBugCheck.c)
 */

void __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter2)
{
  bool v2; // zf
  unsigned __int64 v3; // rdi
  __int64 v4; // r8
  unsigned __int8 (__fastcall *v5)(__int64, __int128 *); // rax
  unsigned __int8 (__fastcall *v6)(__int64, __int128 *); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  __int128 v11; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[8]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2a[22]; // [rsp+78h] [rbp-90h] BYREF
  int v14[16]; // [rsp+128h] [rbp+20h] BYREF

  memset(BugCheckParameter2a, 0, sizeof(BugCheckParameter2a));
  v12[6] = BugCheckParameter2a;
  LODWORD(BugCheckParameter2a[10]) = 275;
  BugCheckParameter2a[2] = 8LL;
  BugCheckParameter2a[18] = (ULONG_PTR)v12;
  BugCheckParameter2a[4] = (ULONG_PTR)&BugCheckParameter2a[3];
  BugCheckParameter2a[3] = (ULONG_PTR)&BugCheckParameter2a[3];
  BugCheckParameter2a[13] = (ULONG_PTR)PopFxWorkOrderWatchdog;
  BugCheckParameter2a[14] = (ULONG_PTR)BugCheckParameter2a;
  memset(v12, 0, 40);
  v12[5] = BugCheckParameter2;
  BugCheckParameter2a[5] = 0LL;
  HIDWORD(BugCheckParameter2a[9]) = 0;
  LOWORD(BugCheckParameter2a[9]) = 0;
  BugCheckParameter2a[17] = 0LL;
  BugCheckParameter2a[12] = 0LL;
  PopFxEnableWorkOrderWatchdog(v12, (unsigned int)PopFxWatchdogWorkOrderTimeout);
  v11 = 0LL;
  memset(v14, 0, sizeof(v14));
  BYTE8(v11) = 0;
  *(_QWORD *)&v11 = v14;
  if ( !BugCheckParameter2 )
  {
    v2 = PopPepWork((__int64)v14) == 0;
    goto LABEL_3;
  }
  v5 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter2 + 96);
  if ( v5 && v5(13LL, &v11) )
  {
    v2 = BYTE8(v11) == 0;
LABEL_3:
    if ( v2 )
      goto LABEL_6;
    goto LABEL_4;
  }
  v6 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter2 + 112);
  if ( !v6 || !v6(10LL, &v11) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter2, 0LL);
  if ( BYTE8(v11) )
  {
    if ( (unsigned int)(v14[0] - 7) > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter2, 0LL, 0LL);
LABEL_4:
    v3 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    BugCheckParameter2a[19] = (ULONG_PTR)v14;
    KxReleaseSpinLock(&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v2 = (v10 & SchedulerAssist[5]) == 0;
          v4 = (unsigned int)v10 & SchedulerAssist[5];
          SchedulerAssist[5] = v4;
          if ( v2 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    PopFxProcessWork(BugCheckParameter2, v14, v4);
  }
LABEL_6:
  PopFxDisableWorkOrderWatchdog((__int64 *)BugCheckParameter2a);
}
