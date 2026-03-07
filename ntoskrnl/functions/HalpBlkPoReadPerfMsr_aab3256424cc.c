__int64 __fastcall HalpBlkPoReadPerfMsr(unsigned int a1, int a2, _QWORD *a3)
{
  ULONG_PTR v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 (__fastcall *v9)(_QWORD, _DWORD *, __int128 *, __int64, int *); // rax
  int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  _DWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h]
  int v20; // [rsp+80h] [rbp-8h]
  int v21; // [rsp+A8h] [rbp+20h] BYREF
  int v22; // [rsp+ACh] [rbp+24h]

  v4 = a1;
  v6 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 2216));
  HalpBlkPoBusyWait(1uLL, v4, v6 + 2216);
  *(_QWORD *)(v6 + 2240) = 0LL;
  *(_QWORD *)(v6 + 2248) = 0LL;
  *(_DWORD *)(v6 + 2228) = 1;
  *(_DWORD *)(v6 + 2232) = 1;
  *(_DWORD *)(v6 + 2236) = a2;
  _InterlockedExchange((volatile __int32 *)(v6 + 2224), 1);
  v8 = *(_DWORD *)(v6 + 20);
  v21 = -1;
  v18 = 0LL;
  DWORD2(v18) = v8;
  v19 = 0LL;
  LODWORD(v18) = 4;
  v22 = 1;
  v17[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v17[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v9 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, int *))(HalpInterruptController + 120);
  _disable();
  v10 = v9(*(_QWORD *)(HalpInterruptController + 16), v17, &v18, 225LL, &v21);
  if ( (v20 & 0x200) != 0 )
    _enable();
  if ( v10 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 1uLL, v4, v6 + 2216);
  HalpBlkPoBusyWait(1uLL, v4, v6 + 2216);
  *a3 = *(_QWORD *)(v6 + 2240);
  KxReleaseSpinLock((volatile signed __int64 *)(v6 + 2216));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return (unsigned int)v10;
}
