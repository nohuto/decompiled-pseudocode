/*
 * XREFs of KeSynchronizeSecurityDomain @ 0x1402EAE28
 * Callers:
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     PspCombineSecurityDomains @ 0x140778A04 (PspCombineSecurityDomains.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402376C0 (KiIpiSendPacket.c)
 *     KiSynchronizeSecurityDomainTarget @ 0x140302CD0 (KiSynchronizeSecurityDomainTarget.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeSynchronizeSecurityDomain(_KPROCESS *a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rbp
  int v4; // esi
  __int64 result; // rax
  __int64 v6; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v8; // rdx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  _DWORD v14[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v14[2], 0, 0x100uLL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 12 )
      LODWORD(v8) = 4096;
    else
      v8 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
    SchedulerAssist[5] |= v8;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14[0] = 2097153;
  memset(&v14[1], 0, 0x104uLL);
  KiCopyAffinityEx((__int64)v14, 0x20u, &a1->ActiveProcessors.Count);
  KeRemoveProcessorAffinityEx((unsigned __int16 *)v14, CurrentPrcb->Number);
  v4 = KeCountSetBitsAffinityEx((unsigned __int16 *)v14);
  if ( a1 == KeGetCurrentThread()->ApcState.Process )
    KiSynchronizeSecurityDomainTarget(0LL, 0LL, 0LL, 0LL);
  if ( v4 )
  {
    KiIpiSendPacket(0, (int)v14, (__int64)KiSynchronizeSecurityDomainTarget, 1LL, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v6, (__int64)CurrentPrcb);
  }
  if ( KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      v10 = KeGetCurrentPrcb();
      v11 = v10->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
