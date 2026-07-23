/*
 * XREFs of KiInitializeMutant @ 0x14035FC1C
 * Callers:
 *     LdrpInitMuiCrits @ 0x140302204 (LdrpInitMuiCrits.c)
 *     KeInitializeMutex @ 0x14035FBE0 (KeInitializeMutex.c)
 *     KeInitializeMutantEx @ 0x14035FC00 (KeInitializeMutantEx.c)
 *     KeInitializeMutant @ 0x140394E40 (KeInitializeMutant.c)
 *     PnpInitializeDeviceEvents @ 0x140A5375C (PnpInitializeDeviceEvents.c)
 *     sub_140A5B300 @ 0x140A5B300 (sub_140A5B300.c)
 *     ViInitSystemPhase0 @ 0x140A6FAB8 (ViInitSystemPhase0.c)
 *     EtwpInitializeRegistration @ 0x140A72644 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140A72CB4 (ExpProfileInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInitializeMutant(ULONG_PTR BugCheckParameter2, char a2, __int64 a3, _DWORD *SchedulerAssist)
{
  char v5; // r13
  __int64 v7; // rdx
  char v8; // cl
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v13; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  int v24; // [rsp+58h] [rbp+10h] BYREF
  char v25; // [rsp+60h] [rbp+18h]

  v25 = a3;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v5 = (char)SchedulerAssist;
  v7 = 2LL;
  *(_OWORD *)(BugCheckParameter2 + 16) = 0LL;
  *(_OWORD *)(BugCheckParameter2 + 32) = 0LL;
  *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  *(_BYTE *)BugCheckParameter2 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(BugCheckParameter2 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)v7 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = 0;
    while ( 1 )
    {
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v16 = v13[6];
          v13[6] = v16 + 1;
          if ( v16 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v17[6] - 1;
          v17[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v24, v7, a3, (__int64)SchedulerAssist);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v15 = (struct _LIST_ENTRY *)(BugCheckParameter2 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v15->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(BugCheckParameter2 + 32) = Blink;
    Blink->Flink = v15;
    CurrentThread->MutantListHead.Blink = v15;
    KiReleaseThreadLockSafe((__int64)CurrentThread);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 4) = 1;
  }
  v8 = v25;
  result = BugCheckParameter2 + 8;
  *(_QWORD *)(BugCheckParameter2 + 16) = BugCheckParameter2 + 8;
  *(_QWORD *)(BugCheckParameter2 + 8) = BugCheckParameter2 + 8;
  *(_BYTE *)(BugCheckParameter2 + 48) &= ~1u;
  *(_BYTE *)(BugCheckParameter2 + 49) = v8;
  if ( (v5 & 1) != 0 )
  {
    *(_BYTE *)(BugCheckParameter2 + 48) |= 2u;
    if ( a2 )
    {
      result = KeAbPreAcquire(BugCheckParameter2, 0LL, 1);
      if ( result )
        *(_BYTE *)(result + 26) |= 1u;
    }
  }
  return result;
}
