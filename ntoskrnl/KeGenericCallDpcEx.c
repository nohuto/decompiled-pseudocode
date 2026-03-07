char __fastcall KeGenericCallDpcEx(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // si
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  $C71981A45BEB2B45F82C232A7085991E *v8; // rax
  struct _KTHREAD *v9; // rcx
  bool v10; // zf
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax
  unsigned __int8 v13; // cl
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  int v16; // eax
  _QWORD v18[2]; // [rsp+38h] [rbp-29h] BYREF
  ULONG_PTR BugCheckParameter2[12]; // [rsp+48h] [rbp-19h] BYREF

  memset(BugCheckParameter2, 0, 0x58uLL);
  v18[0] = a1;
  v18[1] = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KiDpcCorralLock, 0LL);
  v5 = 0;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v12) = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Number )
  {
    KiInitiateGenericCallDpc((__int64)CurrentPrcb, v18);
    v5 = 1;
  }
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v10 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
  }
  __writecr8(CurrentIrql);
  if ( !v5 )
  {
LABEL_12:
    BugCheckParameter2[7] = 0LL;
    BugCheckParameter2[3] = (ULONG_PTR)KiGenericCallDpcInitiatorDpc;
    BugCheckParameter2[4] = (ULONG_PTR)v18;
    LODWORD(BugCheckParameter2[0]) = 134218515;
    BugCheckParameter2[2] = 0LL;
    BugCheckParameter2[10] = (ULONG_PTR)&BugCheckParameter2[9];
    LOWORD(BugCheckParameter2[8]) = 263;
    BugCheckParameter2[9] = (ULONG_PTR)&BugCheckParameter2[9];
    BYTE2(BugCheckParameter2[8]) = 6;
    HIDWORD(BugCheckParameter2[8]) = 0;
    KiInsertQueueDpc((ULONG_PTR)BugCheckParameter2, 0LL, 0LL, 0LL, 0);
    KeWaitForGate((__int64)&BugCheckParameter2[8], 0LL, 0);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcCorralLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcCorralLock);
  LOBYTE(v8) = KeAbPostRelease((ULONG_PTR)&KiDpcCorralLock);
  v9 = KeGetCurrentThread();
  v10 = v9->SpecialApcDisable++ == -1;
  if ( v10 )
  {
    v8 = &v9->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v8->ApcState.ApcListHead[0].Flink != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  return (char)v8;
}
