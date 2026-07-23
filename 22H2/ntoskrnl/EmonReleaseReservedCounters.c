/*
 * XREFs of EmonReleaseReservedCounters @ 0x1404D41D8
 * Callers:
 *     EmonReleaseProfileResourcesInternal @ 0x1404D4120 (EmonReleaseProfileResourcesInternal.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14035C8F0 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035CA50 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall EmonReleaseReservedCounters(int a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ecx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  char v8; // cl
  __int64 v9; // rax
  bool v10; // zf
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  _GROUP_AFFINITY v15; // [rsp+28h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-20h] BYREF

  v3 = (unsigned int)(a1 * EmonNumberCounters);
  v15 = 0LL;
  v4 = KiProcessorIndexToNumberMappingTable[a1];
  v15.Group = v4 >> 6;
  v5 = EmonCounterStatus + 16 * v3;
  v15.Mask = 1LL << (v4 & 0x3F);
  PreviousAffinity = 0LL;
  KeSetSystemGroupAffinityThread(&v15, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  __writemsr(0x390u, a2);
  while ( 1 )
  {
    v10 = !_BitScanForward64((unsigned __int64 *)&v9, a2);
    if ( v10 )
      break;
    v8 = v9;
    if ( (unsigned int)v9 >= EmonNumberArchCounters )
      v9 = (unsigned int)(v9 + EmonNumberArchCounters - 32);
    a2 ^= 1LL << v8;
    *(_DWORD *)(v5 + 16 * v9) = 3;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
