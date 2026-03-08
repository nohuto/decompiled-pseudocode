/*
 * XREFs of MiReplicatePteChange @ 0x1402A4528
 * Callers:
 *     MiWriteTopLevelPxe @ 0x140201C64 (MiWriteTopLevelPxe.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140346D60 (MiUnlockNestedPageTableWritePte.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiReplacePfnWithGapMapping @ 0x14038B4B8 (MiReplacePfnWithGapMapping.c)
 *     MiInitializeShadowPageTable @ 0x14080B974 (MiInitializeShadowPageTable.c)
 * Callees:
 *     MiReplicatePteChangeToProcess @ 0x1402A470C (MiReplicatePteChangeToProcess.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetLeafVa @ 0x140346C50 (MiGetLeafVa.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiReplicatePteChange(__int64 a1, __int64 a2, int a3)
{
  _KPROCESS *Process; // r15
  __int64 LeafVa; // rax
  unsigned __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 *i; // rsi
  _KPROCESS *v11; // rcx
  int DirectoryTableBase_high; // eax
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  _QWORD *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // edx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v25; // eax
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Process = KeGetCurrentThread()->ApcState.Process;
  LeafVa = MiGetLeafVa(a1);
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1 )
  {
    v8 = Process[1].Affinity.StaticBitmap[25];
    v9 = (__int64 *)(v8 + 16);
  }
  else
  {
    v8 = 0LL;
    v9 = &qword_140C65698;
  }
  if ( !a3 )
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  if ( v8 )
  {
    v13 = (_QWORD *)(v8 + 104);
    v14 = 2LL;
    do
    {
      if ( *v13 )
        MiReplicatePteChangeToProcess(*v13, a1);
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  for ( i = (__int64 *)*v9; i != v9; i = (__int64 *)*i )
  {
    v11 = (_KPROCESS *)((char *)i + (v8 != 0 ? -1184LL : -1984LL));
    DirectoryTableBase_high = HIDWORD(v11[1].DirectoryTableBase);
    if ( (DirectoryTableBase_high & 0x800000) == 0 )
    {
      if ( (DirectoryTableBase_high & 0xC00) != 0 && (DirectoryTableBase_high & 0x80u) == 0 )
      {
        if ( v11 != Process )
          MiReplicatePteChangeToProcess(v11, a1);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)&v11[1].DirectoryTableBase + 1, 0x800000u);
      }
    }
  }
  if ( v8 )
  {
    v15 = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 744);
    v16 = MiPteInShadowRange(v15);
    v19 = 0;
    if ( (a2 & 1) == 0 )
    {
      if ( v16 )
      {
        if ( (unsigned int)MiPteHasShadow(v17, 0LL, v18) )
          v19 = 1;
      }
      goto LABEL_25;
    }
    if ( v16 )
    {
      if ( (unsigned int)MiPteHasShadow(v17, 0LL, v18) )
      {
        v19 = 1;
        if ( HIBYTE(word_140C6697C) )
          goto LABEL_25;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_25;
      }
      a2 |= 0x8000000000000000uLL;
    }
LABEL_25:
    *v15 = a2;
    if ( v19 )
      MiWritePteShadow(v15, a2);
  }
  if ( !a3 )
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
}
