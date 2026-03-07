__int64 __fastcall HalpBlkPoReadPerfIoPort(unsigned int a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  ULONG_PTR v5; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rsi
  int v10; // ecx
  __int64 (__fastcall *v11)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v12; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  _DWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v20[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-48h] BYREF
  __int64 v22; // [rsp+50h] [rbp-38h]
  int v23; // [rsp+80h] [rbp-8h]

  v5 = a1;
  v8 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 2216));
  HalpBlkPoBusyWait(3uLL, v5, v8 + 2216);
  *(_QWORD *)(v8 + 2240) = 0LL;
  *(_QWORD *)(v8 + 2248) = 0LL;
  *(_WORD *)(v8 + 2238) = a3;
  *(_DWORD *)(v8 + 2228) = 1;
  *(_DWORD *)(v8 + 2232) = 2;
  *(_WORD *)(v8 + 2236) = a2;
  _InterlockedExchange((volatile __int32 *)(v8 + 2224), 1);
  v10 = *(_DWORD *)(v8 + 20);
  v19[0] = -1;
  v22 = 0LL;
  v21 = 0LL;
  DWORD2(v21) = v10;
  LODWORD(v21) = 4;
  v19[1] = 1;
  v20[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v20[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v11 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  v12 = v11(*(_QWORD *)(HalpInterruptController + 16), v20, &v21, 225LL, v19);
  if ( (v23 & 0x200) != 0 )
    _enable();
  if ( v12 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 3uLL, v5, v8 + 2216);
  HalpBlkPoBusyWait(3uLL, v5, v8 + 2216);
  *a4 = *(_DWORD *)(v8 + 2240);
  KxReleaseSpinLock((volatile signed __int64 *)(v8 + 2216));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
  return (unsigned int)v12;
}
