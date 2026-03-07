__int64 __fastcall PopFxDispatchPluginWorkOnce(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  bool v4; // zf
  unsigned __int64 v5; // rdi
  unsigned __int8 (__fastcall *v7)(__int64, __int128 *); // rax
  unsigned __int8 (__fastcall *v8)(__int64, __int128 *); // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  __int128 v13; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v14[8]; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR BugCheckParameter2[22]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v16[16]; // [rsp+128h] [rbp+20h] BYREF

  v16[1] = 0;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v14[6] = BugCheckParameter2;
  LODWORD(BugCheckParameter2[10]) = 275;
  BugCheckParameter2[2] = 8LL;
  BugCheckParameter2[18] = (ULONG_PTR)v14;
  BugCheckParameter2[4] = (ULONG_PTR)&BugCheckParameter2[3];
  BugCheckParameter2[3] = (ULONG_PTR)&BugCheckParameter2[3];
  BugCheckParameter2[13] = (ULONG_PTR)PopFxWorkOrderWatchdog;
  BugCheckParameter2[14] = (ULONG_PTR)BugCheckParameter2;
  memset(v14, 0, 40);
  v14[5] = BugCheckParameter3;
  BugCheckParameter2[5] = 0LL;
  HIDWORD(BugCheckParameter2[9]) = 0;
  LOWORD(BugCheckParameter2[9]) = 0;
  BugCheckParameter2[17] = 0LL;
  BugCheckParameter2[12] = 0LL;
  PopFxEnableWorkOrderWatchdog(v14, (unsigned int)PopFxWatchdogWorkOrderTimeout);
  v13 = 0LL;
  memset(v16, 0, sizeof(v16));
  BYTE8(v13) = 0;
  *(_QWORD *)&v13 = v16;
  if ( !BugCheckParameter3 )
  {
    v4 = (unsigned __int8)PopPepWork(a2, v16) == 0;
    goto LABEL_3;
  }
  v7 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter3 + 96);
  if ( v7 && v7(13LL, &v13) )
  {
    v4 = BYTE8(v13) == 0;
LABEL_3:
    if ( v4 )
      return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
    goto LABEL_4;
  }
  v8 = *(unsigned __int8 (__fastcall **)(__int64, __int128 *))(BugCheckParameter3 + 112);
  if ( !v8 || !v8(10LL, &v13) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter3, 0LL);
  if ( BYTE8(v13) )
  {
    if ( (unsigned int)(v16[0] - 7) > 1 )
      PopFxBugCheck(0x612uLL, BugCheckParameter3, 0LL, 0LL);
LABEL_4:
    v5 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
    BugCheckParameter2[19] = (ULONG_PTR)v16;
    KxReleaseSpinLock((volatile signed __int64 *)&PopWorkOrderLock);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v4 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v4 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v5);
    PopFxProcessWork(BugCheckParameter3);
  }
  return PopFxDisableWorkOrderWatchdog((ULONG_PTR)BugCheckParameter2);
}
