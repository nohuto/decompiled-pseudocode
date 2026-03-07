__int64 __fastcall HalpBlkPoWritePerfMsr(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v7; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  int v11; // eax
  __int64 (__fastcall *v12)(_QWORD, int *, __int128 *, __int64, int *); // rax
  int v13; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  __int128 v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  int v22; // [rsp+80h] [rbp-8h]
  int v23; // [rsp+A0h] [rbp+18h] BYREF
  int v24; // [rsp+A4h] [rbp+1Ch]
  int v25; // [rsp+A8h] [rbp+20h] BYREF
  int v26; // [rsp+ACh] [rbp+24h]

  v7 = a1;
  v9 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 2216));
  HalpBlkPoBusyWait(2uLL, a1, v9 + 2216);
  *(_DWORD *)(v9 + 2236) = a2;
  *(_DWORD *)(v9 + 2228) = 2;
  *(_DWORD *)(v9 + 2232) = 1;
  *(_QWORD *)(v9 + 2240) = a3;
  *(_QWORD *)(v9 + 2248) = a4;
  _InterlockedExchange((volatile __int32 *)(v9 + 2224), 1);
  v11 = *(_DWORD *)(v9 + 20);
  v23 = -1;
  v20 = 0LL;
  DWORD2(v20) = v11;
  v21 = 0LL;
  LODWORD(v20) = 4;
  v24 = 1;
  v26 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v25 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v12 = *(__int64 (__fastcall **)(_QWORD, int *, __int128 *, __int64, int *))(HalpInterruptController + 120);
  _disable();
  v13 = v12(*(_QWORD *)(HalpInterruptController + 16), &v25, &v20, 225LL, &v23);
  if ( (v22 & 0x200) != 0 )
    _enable();
  if ( v13 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 2uLL, v7, v9 + 2216);
  KxReleaseSpinLock((volatile signed __int64 *)(v9 + 2216));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v10 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
  return (unsigned int)v13;
}
