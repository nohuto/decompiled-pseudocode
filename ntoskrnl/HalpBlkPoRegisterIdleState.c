/*
 * XREFs of HalpBlkPoRegisterIdleState @ 0x140528760
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

__int64 __fastcall HalpBlkPoRegisterIdleState(unsigned int a1, __int64 a2)
{
  ULONG_PTR v4; // r15
  __int64 v5; // rdi
  volatile signed __int64 *BugCheckParameter4; // r14
  unsigned __int64 v7; // rbp
  int v8; // eax
  __int64 (__fastcall *v9)(_QWORD, int *, __int128 *, __int64, int *); // rax
  int v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+70h] [rbp-8h]
  int v20; // [rsp+88h] [rbp+10h] BYREF
  int v21; // [rsp+8Ch] [rbp+14h]
  int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+94h] [rbp+1Ch]

  v4 = a1;
  v5 = *(_QWORD *)(HalpBlkPcr + 8LL * a1);
  BugCheckParameter4 = (volatile signed __int64 *)(v5 + 2216);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 2216));
  HalpBlkPoBusyWait(5uLL, a1, v5 + 2216);
  *(_QWORD *)(v5 + 2232) = 0LL;
  *(_QWORD *)(v5 + 2248) = 0LL;
  *(_QWORD *)(v5 + 2240) = a2;
  *(_DWORD *)(v5 + 2228) = 3;
  _InterlockedExchange((volatile __int32 *)(v5 + 2224), 1);
  v8 = *(_DWORD *)(v5 + 20);
  v20 = -1;
  v17 = 0LL;
  DWORD2(v17) = v8;
  v18 = 0LL;
  LODWORD(v17) = 4;
  v21 = 1;
  v23 = *(_DWORD *)(HalpInterruptIpiLines + 20);
  v22 = *(_DWORD *)(HalpInterruptIpiLines + 16);
  v9 = *(__int64 (__fastcall **)(_QWORD, int *, __int128 *, __int64, int *))(HalpInterruptController + 120);
  _disable();
  v10 = v9(*(_QWORD *)(HalpInterruptController + 16), &v22, &v17, 225LL, &v20);
  if ( (v19 & 0x200) != 0 )
    _enable();
  if ( v10 < 0 )
    KeBugCheckEx(0x1DAu, 4uLL, 5uLL, v4, (ULONG_PTR)BugCheckParameter4);
  KxReleaseSpinLock(BugCheckParameter4);
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
