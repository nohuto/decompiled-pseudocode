char __fastcall MiZeroPageMakeHot(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  $C71981A45BEB2B45F82C232A7085991E *v4; // rax
  struct _KTHREAD *CurrentThread; // rsi
  int v10; // ebp
  __int64 v11; // r13
  ULONG_PTR v12; // rbx
  struct _KTHREAD *v13; // r14
  __int64 v14; // rdi
  unsigned int AbEntrySummary; // eax
  unsigned int v16; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v19; // eax
  signed __int32 v20; // ett
  int SessionId; // eax
  int v24; // [rsp+20h] [rbp-58h] BYREF
  int v25[21]; // [rsp+24h] [rbp-54h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF
  unsigned int v28; // [rsp+88h] [rbp+10h]

  v4 = ($C71981A45BEB2B45F82C232A7085991E *)&retaddr;
  v25[0] = 0;
  v24 = 0;
  ++dword_140C13010[a2];
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->Priority )
      v10 = 33;
    else
      v10 = MiSetZeroPageThreadPriority(a3);
    --CurrentThread->SpecialApcDisable;
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
    v12 = a4 + 216;
    v13 = KeGetCurrentThread();
    v14 = 0LL;
    _disable();
    AbEntrySummary = v13->AbEntrySummary;
    if ( v13->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v12, (__int64)v13)) != 0 )
    {
      _BitScanForward(&v16, AbEntrySummary);
      v28 = v16;
      v13->AbEntrySummary = AbEntrySummary & ~(1 << v16);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v19 = *SchedulerAssist;
        do
        {
          v20 = v19;
          v19 = _InterlockedCompareExchange(SchedulerAssist, v19 & 0xFFDFFFFF, v19);
        }
        while ( v20 != v19 );
        if ( (v19 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v14 = (__int64)(&v13[1].Process + 12 * v28);
      if ( v12 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v13->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v14 + 8) = SessionId;
      *(_QWORD *)v14 = v12 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)v12, 0, v14, v12);
    if ( v14 )
      *(_BYTE *)(v14 + 18) = 1;
    if ( a2 == (unsigned int)MiGetPfnPageSizeIndexUnsynchronized(a1, v25, &v24) )
      MiChangePageHeatImmediate(v11, a2, 1);
    else
      ++dword_140C13020;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v12);
    LOBYTE(v4) = KeAbPostRelease(v12);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v4 = &CurrentThread->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v4->ApcState.ApcListHead[0].Flink != v4 )
        LOBYTE(v4) = KiCheckForKernelApcDelivery();
    }
    if ( v10 != 33 )
      LOBYTE(v4) = MiSetZeroPageThreadPriority(a3);
  }
  return (char)v4;
}
