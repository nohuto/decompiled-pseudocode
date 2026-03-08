/*
 * XREFs of HalpBlkPoWritePerfIoPort @ 0x140528910
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpBlkPoBusyWait @ 0x140528290 (HalpBlkPoBusyWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpBlkPoWritePerfIoPort(unsigned int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  ULONG_PTR v8; // r13
  __int64 v10; // rbp
  unsigned __int64 v11; // r12
  int v12; // ecx
  __int64 (__fastcall *v13)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *); // rax
  int v14; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  _DWORD v21[2]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v22[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  int v25; // [rsp+80h] [rbp-8h]

  v8 = a1;
  v10 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 2216));
  HalpBlkPoBusyWait(4uLL, a1, v10 + 2216);
  *(_QWORD *)(v10 + 2248) = 0LL;
  *(_DWORD *)(v10 + 2228) = 2;
  *(_DWORD *)(v10 + 2232) = 2;
  *(_DWORD *)(v10 + 2244) = a5;
  *(_WORD *)(v10 + 2236) = a2;
  *(_WORD *)(v10 + 2238) = a3;
  *(_DWORD *)(v10 + 2240) = a4;
  _InterlockedExchange((volatile __int32 *)(v10 + 2224), 1);
  v12 = *(_DWORD *)(v10 + 20);
  v21[0] = -1;
  v24 = 0LL;
  v23 = 0LL;
  DWORD2(v23) = v12;
  LODWORD(v23) = 4;
  v21[1] = 1;
  v22[1] = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v22[0] = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v13 = *(__int64 (__fastcall **)(_QWORD, _DWORD *, __int128 *, __int64, _DWORD *))(HalpInterruptController + 120);
  _disable();
  v14 = v13(*(_QWORD *)(HalpInterruptController + 16), v22, &v23, 225LL, v21);
  if ( (v25 & 0x200) != 0 )
    _enable();
  if ( v14 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 4uLL, v8, v10 + 2216);
  KxReleaseSpinLock((volatile signed __int64 *)(v10 + 2216));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v11);
  return (unsigned int)v14;
}
