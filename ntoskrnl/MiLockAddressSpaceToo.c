/*
 * XREFs of MiLockAddressSpaceToo @ 0x140332B7C
 * Callers:
 *     MiPrepareVadDelete @ 0x14075FF3C (MiPrepareVadDelete.c)
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x14034D51C (MiUnlockVad.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockNestedVad @ 0x140A44F98 (MiUnlockNestedVad.c)
 */

__int64 __fastcall MiLockAddressSpaceToo(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  volatile signed __int32 *v7; // rdi
  ULONG_PTR v8; // rbx
  struct _KTHREAD *v9; // rbp
  unsigned int AbEntrySummary; // eax
  int v11; // r12d
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  __int64 v19; // rdi
  struct _KTHREAD *v20; // rbp
  __int64 v21; // rbx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  struct _KPRCB *v24; // rcx
  signed __int32 *v25; // r8
  int v26; // eax
  bool v27; // zf
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  struct _KTHREAD *v30; // rbp
  volatile signed __int32 *v31; // rdi
  __int64 v32; // rbx
  unsigned int v33; // eax
  unsigned int v34; // ecx
  struct _KPRCB *v35; // rcx
  signed __int32 *v36; // r8
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  unsigned int v39; // [rsp+20h] [rbp-58h]
  unsigned int v40; // [rsp+80h] [rbp+8h]
  unsigned int v41; // [rsp+98h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int32 *)(a1 + 1224);
  v8 = 0LL;
  v9 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  v11 = -1;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 1224, v9)) != 0 )
  {
    _BitScanForward(&v12, AbEntrySummary);
    v40 = v12;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v17 = *SchedulerAssist;
      do
      {
        v18 = v17;
        v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
      }
      while ( v18 != v17 );
      if ( (v17 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v8 = (ULONG_PTR)(&v9[1].Process + 12 * v40);
    if ( (unsigned __int64)v7 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v9->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v8 + 8) = SessionId;
    *(_QWORD *)v8 = (unsigned __int64)v7 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v7, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(a1 + 1224, v8);
    if ( a3 )
      MiUnlockNestedVad(a3);
    MiUnlockVad(CurrentThread, a2);
    LOCK_ADDRESS_SPACE(CurrentThread, a1);
    --CurrentThread->SpecialApcDisable;
    v19 = a2 + 40;
    v20 = KeGetCurrentThread();
    v21 = 0LL;
    _disable();
    v22 = v20->AbEntrySummary;
    if ( v20->AbEntrySummary || (v22 = KiAbTryReclaimOrphanedEntries(v19, v20)) != 0 )
    {
      _BitScanForward(&v23, v22);
      v41 = v23;
      v20->AbEntrySummary = v22 & ~(1 << v23);
      v24 = KeGetCurrentPrcb();
      v25 = (signed __int32 *)v24->SchedulerAssist;
      if ( v25 )
      {
        _m_prefetchw(v25);
        v28 = *v25;
        do
        {
          v29 = v28;
          v28 = _InterlockedCompareExchange(v25, v28 & 0xFFDFFFFF, v28);
        }
        while ( v29 != v28 );
        if ( (v28 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(v24);
      }
      _enable();
      v21 = (__int64)(&v20[1].Process + 12 * v41);
      if ( (unsigned __int64)(v19 - qword_140C65668) < 0x8000000000LL )
        v26 = MmGetSessionIdEx(v20->ApcState.Process);
      else
        v26 = -1;
      *(_DWORD *)(v21 + 8) = v26;
      *(_QWORD *)v21 = v19 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v19, v21, v19);
    if ( v21 )
      *(_BYTE *)(v21 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 0x80u;
    if ( a3 )
    {
      v30 = KeGetCurrentThread();
      v31 = (volatile signed __int32 *)(a3 + 40);
      v32 = 0LL;
      _disable();
      v33 = v30->AbEntrySummary;
      if ( v30->AbEntrySummary || (v33 = KiAbTryReclaimOrphanedEntries(a3 + 40, v30)) != 0 )
      {
        _BitScanForward(&v34, v33);
        v39 = v34;
        v30->AbEntrySummary = v33 & ~(1 << v34);
        v35 = KeGetCurrentPrcb();
        v36 = (signed __int32 *)v35->SchedulerAssist;
        if ( v36 )
        {
          _m_prefetchw(v36);
          v37 = *v36;
          do
          {
            v38 = v37;
            v37 = _InterlockedCompareExchange(v36, v37 & 0xFFDFFFFF, v37);
          }
          while ( v38 != v37 );
          if ( (v37 & 0x200000) != 0 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
        _enable();
        v32 = (__int64)(&v30[1].Process + 12 * v39);
        if ( (unsigned __int64)v31 - qword_140C65668 < 0x8000000000LL )
          v11 = MmGetSessionIdEx(v30->ApcState.Process);
        *(_DWORD *)(v32 + 8) = v11;
        *(_QWORD *)v32 = (unsigned __int64)v31 & 0x7FFFFFFFFFFFFFFCLL;
      }
      if ( _interlockedbittestandset64(v31, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 40), v32, a3 + 40);
      if ( v32 )
        *(_BYTE *)(v32 + 18) = 1;
    }
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v27 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 0LL;
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    return 1LL;
  }
}
