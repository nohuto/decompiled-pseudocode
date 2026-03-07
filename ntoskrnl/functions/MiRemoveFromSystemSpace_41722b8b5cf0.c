void __fastcall MiRemoveFromSystemSpace(ULONG_PTR BugCheckParameter1, int a2)
{
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR v4; // r12
  __int16 v5; // dx
  _DWORD *SchedulerAssist; // r9
  __int64 AnyMultiplexedVm; // r13
  char *v8; // rbx
  struct _KTHREAD *v9; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *v12; // rcx
  signed __int32 *v13; // r8
  __int64 v14; // rdx
  int SessionId; // eax
  __int64 SharedVm; // rbx
  KIRQL v18; // al
  KIRQL v19; // di
  _QWORD *v20; // rbx
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  void *v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rdx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  volatile LONG *v29; // rdi
  KIRQL v30; // al
  unsigned __int64 v31; // rbp
  unsigned __int64 v32; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v35; // eax
  _QWORD v36[27]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v37; // [rsp+110h] [rbp+8h]

  memset(v36, 0, 0x98uLL);
  CurrentThread = KeGetCurrentThread();
  v4 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL, 1LL);
  if ( (BugCheckParameter1 & 0x3FFFFFFF) != 0 )
    goto LABEL_2;
  v29 = (volatile LONG *)((char *)&unk_140C681D8 + 16 * (unsigned __int8)(BugCheckParameter1 >> 30));
  v30 = ExAcquireSpinLockExclusive(v29 + 3);
  v20 = *(_QWORD **)v29;
  v31 = v30;
  while ( v20 )
  {
    v32 = v20[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( BugCheckParameter1 >= v32 + v20[4] )
    {
      v20 = (_QWORD *)v20[1];
    }
    else
    {
      if ( BugCheckParameter1 >= v32 )
        break;
      v20 = (_QWORD *)*v20;
    }
  }
  if ( v20 )
  {
    RtlAvlRemoveNode(v29, v20);
    --*((_DWORD *)v29 + 2);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v29 + 3);
  v5 = 1;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
      v25 = (v35 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v35;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      v5 = 1;
    }
  }
  __writecr8(v31);
  if ( !v20 )
  {
LABEL_2:
    CurrentThread->SpecialApcDisable -= v5;
    v8 = 0LL;
    v9 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v9->AbEntrySummary;
    if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&qword_140C681C0, v9)) != 0 )
    {
      _BitScanForward(&v11, AbEntrySummary);
      v37 = v11;
      v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
      v12 = KeGetCurrentPrcb();
      v13 = (signed __int32 *)v12->SchedulerAssist;
      if ( v13 )
      {
        _m_prefetchw(v13);
        v27 = *v13;
        do
        {
          v28 = v27;
          v27 = _InterlockedCompareExchange(v13, v27 & 0xFFDFFFFF, v27);
        }
        while ( v28 != v27 );
        if ( (v27 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
      _enable();
      v14 = 96LL * v37;
      v8 = (char *)&v9[1].Process + v14;
      if ( (unsigned __int64)&qword_140C681C0 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(v9->ApcState.Process);
      else
        SessionId = -1;
      *((_DWORD *)v8 + 2) = SessionId;
      *(_QWORD *)v8 = (unsigned __int64)&qword_140C681C0 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C681C0, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C681C0, v8, &qword_140C681C0);
    if ( v8 )
      v8[18] = 1;
    SharedVm = MiGetSharedVm(AnyMultiplexedVm, v14, v13, SchedulerAssist);
    v18 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
    *(_DWORD *)(SharedVm + 4) = 0;
    v19 = v18;
    v20 = P;
    while ( v20 )
    {
      v21 = v20[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( BugCheckParameter1 >= v21 + v20[4] )
      {
        v20 = (_QWORD *)v20[1];
      }
      else
      {
        if ( BugCheckParameter1 >= v21 )
          break;
        v20 = (_QWORD *)*v20;
      }
    }
    if ( !v20 )
      KeBugCheckEx(0xD7u, BugCheckParameter1, 1uLL, 0LL, 0LL);
    --dword_140C681D0;
    RtlAvlRemoveNode(&P, v20);
    LOBYTE(v22) = v19;
    MiUnlockWorkingSetExclusive(AnyMultiplexedVm, v22);
    v23 = (void *)v20[8];
    v24 = *(_QWORD *)v20[6];
    v36[0] = v24;
    MiManageSubsectionView(v36, v20 + 9, 4LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C681C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C681C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C681C0);
    v25 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v25 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    v23 = (void *)v20[8];
    v24 = *(_QWORD *)v20[6];
  }
  if ( v23 )
    ObfDereferenceObject(v23);
  if ( (v20[7] & 1) != 0 )
    _InterlockedDecrement((volatile signed __int32 *)(v24 + 92));
  if ( a2 )
    MiRemoveMappedPtes(v20, AnyMultiplexedVm);
  if ( *((_DWORD *)v20 + 24) != 0x7FFFF )
    MiDereferencePerSessionProtos(v24);
  v26 = ((v20[4] >> 12) + 15LL) & 0xFFFFFFF0LL;
  if ( (v20[7] & 0x18) == 0x18 )
    MiReleasePtes(&unk_140C68030, v4, (unsigned int)v26);
  else
    MiUnmapLargePages(v20[11] & 0xFFFFFFFFFFFFF000uLL, v26 << 12, 9LL);
  ExFreePoolWithTag(v20, 0);
}
