/*
 * XREFs of KiInitializeMutant @ 0x1402D981C
 * Callers:
 *     KeInitializeMutex @ 0x1402D97E0 (KeInitializeMutex.c)
 *     KeInitializeMutantEx @ 0x1402D9800 (KeInitializeMutantEx.c)
 *     NtdllRunOnceInitMuiCrits @ 0x1403B1180 (NtdllRunOnceInitMuiCrits.c)
 *     KeInitializeMutant @ 0x1403D1610 (KeInitializeMutant.c)
 *     DifKeInitializeMutantWrapper @ 0x1405E1040 (DifKeInitializeMutantWrapper.c)
 *     DifKeInitializeMutexWrapper @ 0x1405E1160 (DifKeInitializeMutexWrapper.c)
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 *     ViInitSystemPhase0 @ 0x140B49D78 (ViInitSystemPhase0.c)
 *     sub_140B53C00 @ 0x140B53C00 (sub_140B53C00.c)
 *     WmipDriverEntry @ 0x140B53F10 (WmipDriverEntry.c)
 *     PnpInitializeDeviceEvents @ 0x140B705C0 (PnpInitializeDeviceEvents.c)
 *     EtwpInitializeRegistration @ 0x140B70A04 (EtwpInitializeRegistration.c)
 *     ExpProfileInitialization @ 0x140B71264 (ExpProfileInitialization.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInitializeMutant(__int64 a1, char a2, char a3, char a4)
{
  __int64 v8; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // si
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v12; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rax
  unsigned __int8 v15; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  int v21; // [rsp+58h] [rbp+10h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v14) = 4;
      if ( CurrentIrql != 2 )
        v14 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v14;
    }
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v12 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v12->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    Blink->Flink = v12;
    CurrentThread->MutantListHead.Blink = v12;
    CurrentThread->ThreadLock = 0LL;
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v17 = CurrentPrcb->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  *(_BYTE *)(a1 + 49) = a3;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  LOBYTE(v8) = *(_BYTE *)(a1 + 48) & 0xFE;
  *(_BYTE *)(a1 + 48) = v8;
  if ( (a4 & 1) != 0 )
  {
    LOBYTE(v8) = v8 | 2;
    *(_BYTE *)(a1 + 48) = v8;
    if ( a2 )
    {
      v8 = KeAbPreAcquire(a1, 0LL);
      if ( v8 )
        *(_BYTE *)(v8 + 18) = 1;
    }
  }
  return v8;
}
