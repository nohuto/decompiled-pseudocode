/*
 * XREFs of KeSynchronizeAddressPolicy @ 0x1402F550C
 * Callers:
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x1402337D0 (KiCopyAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140237550 (KeCountSetBitsAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x140237640 (KeRemoveProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402376C0 (KiIpiSendPacket.c)
 *     KiSynchronizeAddressPolicyTarget @ 0x1402F56B0 (KiSynchronizeAddressPolicyTarget.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void *__fastcall KeSynchronizeAddressPolicy(__int64 a1)
{
  void *result; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp
  int v5; // ebx
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  _DWORD v14[68]; // [rsp+30h] [rbp-138h] BYREF

  result = memset(&v14[2], 0, 0x100uLL);
  if ( *(_BYTE *)(a1 + 912) == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 12 )
        LODWORD(v7) = 4096;
      else
        v7 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
      SchedulerAssist[5] |= v7;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v14[0] = 2097153;
    memset(&v14[1], 0, 0x104uLL);
    KiCopyAffinityEx((__int64)v14, 0x20u, (unsigned __int16 *)(a1 + 368));
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v14, CurrentPrcb->Number);
    v5 = KeCountSetBitsAffinityEx((unsigned __int16 *)v14);
    KiSynchronizeAddressPolicyTarget(0LL, 0LL, 0LL, 0LL);
    if ( v5 )
    {
      KiIpiSendPacket(0, (int)v14, (__int64)KiSynchronizeAddressPolicyTarget, 1LL, 0LL, 0LL);
      KiIpiStallOnPacketTargetsPrcb(v8, (__int64)CurrentPrcb);
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
    result = (void *)CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
