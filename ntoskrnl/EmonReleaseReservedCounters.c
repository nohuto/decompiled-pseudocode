/*
 * XREFs of EmonReleaseReservedCounters @ 0x14051BDC0
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EmonReleaseReservedCounters(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r10
  unsigned __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // rsi
  __int64 v7; // rdx
  char v8; // dl
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax

  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  if ( HalpProfileInterface == &DefaultProfileInterface )
    v2 = HalpCounterStatus;
  else
    v2 = HalpCounterStatus + 8LL * (unsigned int)(HalpNumberOfCounters * a2);
  v3 = (unsigned int)a2;
  v4 = *(_QWORD *)(a1 + 80 * a2 + 32);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v7) = 0x8000;
    else
      v7 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v7;
  }
  __writemsr(0x390u, v4);
  while ( 1 )
  {
    v10 = !_BitScanForward64((unsigned __int64 *)&v9, v4);
    if ( v10 )
      break;
    v8 = v9;
    if ( (unsigned int)v9 >= 0x20 )
      v9 = (unsigned int)(v9 + EmonNumberArchCounters - 32);
    v4 ^= 1LL << v8;
    *(_DWORD *)(*(_QWORD *)(v2 + 8 * v9) + 24LL) = 3;
  }
  if ( *(_QWORD *)(a1 + 24) )
  {
    v11 = EmonDsManagementAreas + 160 * v3;
    if ( EmonPebs64Bit )
    {
      v12 = *(_QWORD *)(v11 + 32);
      *(_QWORD *)(v11 + 40) = v12;
      *(_QWORD *)(v11 + 56) = v12;
    }
    else
    {
      v13 = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v11 + 20) = v13;
      *(_DWORD *)(v11 + 28) = v13;
    }
    EmonPebsInUse = 0;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2], 0xFFFFFFFE);
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v10 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
