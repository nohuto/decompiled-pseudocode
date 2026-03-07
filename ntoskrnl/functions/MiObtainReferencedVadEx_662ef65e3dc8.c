__int64 __fastcall MiObtainReferencedVadEx(unsigned __int64 a1, char a2, int *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  _KPROCESS *Process; // r13
  struct _KTHREAD *v8; // r14
  volatile signed __int64 *v9; // rsi
  unsigned int AbEntrySummary; // eax
  int v11; // r12d
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  _KPROCESS *v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v18; // r15
  char v19; // r14
  __int64 v20; // rsi
  struct _KTHREAD *v21; // r14
  unsigned int v22; // eax
  unsigned int v23; // ecx
  struct _KPRCB *v24; // r8
  signed __int32 *v25; // rdx
  bool v26; // zf
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  struct _KTHREAD *v30; // r14
  unsigned int v31; // eax
  unsigned int v32; // ecx
  struct _KPRCB *v33; // r8
  signed __int32 *v34; // rdx
  signed __int32 v35; // eax
  signed __int32 v36; // ett
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  int v39; // eax
  int v40; // eax
  unsigned int v41; // [rsp+20h] [rbp-68h]
  unsigned int v42; // [rsp+24h] [rbp-64h]
  int v44; // [rsp+98h] [rbp+10h]
  unsigned int v46; // [rsp+A8h] [rbp+20h]

  v3 = 0LL;
  *a3 = 0;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  --CurrentThread->SpecialApcDisable;
  v8 = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[7];
  _disable();
  AbEntrySummary = v8->AbEntrySummary;
  v11 = -1;
  if ( v8->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&Process[1].Affinity.StaticBitmap[7], v8)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v46 = v12;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v28 = *SchedulerAssist;
      do
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
      }
      while ( v29 != v28 );
      if ( (v28 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&v8[1].Process + 12 * v46);
    if ( (unsigned __int64)v9 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v8->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = (unsigned __int64)v9 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64(v9, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&Process[1].Affinity.StaticBitmap[7],
      0,
      v5,
      (__int64)&Process[1].Affinity.StaticBitmap[7]);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  LOBYTE(CurrentThread[1].Queue) |= 2u;
  v16 = KeGetCurrentThread()->ApcState.Process;
  v17 = *(_QWORD *)&v16[1].Spare2[23];
  if ( !v17 )
    goto LABEL_69;
  v18 = a1 >> 12;
  if ( v18 < (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32))
    || v18 > (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) )
  {
    v17 = *(_QWORD *)&v16[1].Spare2[15];
    if ( v17 )
    {
      do
      {
        if ( v18 > (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) )
        {
          v17 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          if ( v18 >= (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) )
            break;
          v17 = *(_QWORD *)v17;
        }
      }
      while ( v17 );
      if ( v17 )
      {
        *(_QWORD *)&v16[1].Spare2[23] = v17;
        goto LABEL_13;
      }
    }
LABEL_69:
    v39 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v39 = -1073741664;
    goto LABEL_71;
  }
LABEL_13:
  v19 = a2;
  if ( (a2 & 1) == 0 && (Process[1].DirectoryTableBase & 0x2000000000LL) != 0 )
  {
    v39 = -1073741558;
LABEL_71:
    *a3 = v39;
    UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
    v26 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  if ( !_InterlockedIncrement((volatile signed __int32 *)(v17 + 36)) )
    __fastfail(0xEu);
  UNLOCK_ADDRESS_SPACE_SHARED(CurrentThread, Process);
  v20 = v17 + 40;
  v44 = a2 & 2;
  if ( (v19 & 2) != 0 )
  {
    --CurrentThread->SpecialApcDisable;
    v21 = KeGetCurrentThread();
    _disable();
    v22 = v21->AbEntrySummary;
    if ( v21->AbEntrySummary || (v22 = KiAbTryReclaimOrphanedEntries(v20, v21)) != 0 )
    {
      _BitScanForward(&v23, v22);
      v41 = v23;
      v21->AbEntrySummary = v22 & ~(1 << v23);
      v24 = KeGetCurrentPrcb();
      v25 = (signed __int32 *)v24->SchedulerAssist;
      if ( v25 )
      {
        _m_prefetchw(v25);
        v35 = *v25;
        do
        {
          v36 = v35;
          v35 = _InterlockedCompareExchange(v25, v35 & 0xFFDFFFFF, v35);
        }
        while ( v36 != v35 );
        if ( (v35 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
      _enable();
      v3 = (__int64)(&v21[1].Process + 12 * v41);
      if ( (unsigned __int64)(v20 - qword_140C65668) < 0x8000000000LL )
        v11 = MmGetSessionIdEx(v21->ApcState.Process);
      *(_DWORD *)(v3 + 8) = v11;
      *(_QWORD *)v3 = v20 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v20, 0, v3, v20);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    BYTE1(CurrentThread[1].Queue) |= 0x40u;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v30 = KeGetCurrentThread();
    _disable();
    v31 = v30->AbEntrySummary;
    if ( v30->AbEntrySummary || (v31 = KiAbTryReclaimOrphanedEntries(v20, v30)) != 0 )
    {
      _BitScanForward(&v32, v31);
      v42 = v32;
      v30->AbEntrySummary = v31 & ~(1 << v32);
      v33 = KeGetCurrentPrcb();
      v34 = (signed __int32 *)v33->SchedulerAssist;
      if ( v34 )
      {
        _m_prefetchw(v34);
        v37 = *v34;
        do
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange(v34, v37 & 0xFFDFFFFF, v37);
        }
        while ( v38 != v37 );
        if ( (v37 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
      _enable();
      v3 = (__int64)(&v30[1].Process + 12 * v42);
      if ( (unsigned __int64)(v20 - qword_140C65668) < 0x8000000000LL )
        v11 = MmGetSessionIdEx(v30->ApcState.Process);
      *(_DWORD *)(v3 + 8) = v11;
      *(_QWORD *)v3 = v20 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v20, v3, v20);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
  }
  v26 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( (*(_DWORD *)(v17 + 48) & 4) != 0 )
  {
    if ( v44 )
    {
      MiUnlockVadShared((__int64)CurrentThread, v17);
      MiLockVad(CurrentThread, v17);
    }
    MiWaitForVadDeletion(v17);
    MiUnlockAndDereferenceVad((PVOID)v17);
    v40 = -1073741558;
    if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      v40 = -1073741664;
    *a3 = v40;
  }
  else
  {
    if ( v18 >= (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32))
      && v18 <= (*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) )
    {
      return v17;
    }
    if ( v44 )
      MiUnlockAndDereferenceVadShared((PVOID)v17);
    else
      MiUnlockAndDereferenceVad((PVOID)v17);
    *a3 = -1073741664;
  }
  return 0LL;
}
