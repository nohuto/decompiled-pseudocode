/*
 * XREFs of KeQueryBasePriorityThread @ 0x1402DD398
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  volatile LONG *v4; // r14
  unsigned int v5; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rax
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *v11; // r9
  int v12; // edx
  bool v13; // zf
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v8) = 4;
    if ( CurrentIrql != 2 )
      v8 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v8;
  }
  v4 = (volatile LONG *)(v1 + 64);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  v14 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v5 = *(char *)(a1 + 563) - *(char *)(v1 + 640);
  if ( *(_BYTE *)(a1 + 645) )
    v5 = 16 * *(char *)(a1 + 645);
  *(_QWORD *)(a1 + 64) = 0LL;
  ExReleaseSpinLockSharedFromDpcLevel(v4);
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
