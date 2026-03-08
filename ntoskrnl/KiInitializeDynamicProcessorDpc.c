/*
 * XREFs of KiInitializeDynamicProcessorDpc @ 0x140A9C260
 * Callers:
 *     <none>
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140234B50 (KeAddProcessorAffinityEx.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x140237680 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402376C0 (KiIpiSendPacket.c)
 *     KeSetAffinityProcess @ 0x1403A9688 (KeSetAffinityProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiReconfigureSubNodeSchedulingInformation @ 0x140569ACC (KiReconfigureSubNodeSchedulingInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeSignalCallDpcSynchronize @ 0x14056FE60 (KeSignalCallDpcSynchronize.c)
 *     KiConfigureProcessorBlock @ 0x140A85FE4 (KiConfigureProcessorBlock.c)
 *     KiConfigureSchedulingInformation @ 0x140A8B1B4 (KiConfigureSchedulingInformation.c)
 *     KiInitializeProcessor @ 0x140A8BBD4 (KiInitializeProcessor.c)
 *     KeRestoreMtrrBroadcast @ 0x140A8C444 (KeRestoreMtrrBroadcast.c)
 *     KiUpdateNumberProcessors @ 0x140A9C484 (KiUpdateNumberProcessors.c)
 */

__int64 __fastcall KiInitializeDynamicProcessorDpc(__int64 a1, _QWORD **a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v13; // r9
  int v14; // eax
  bool v15; // zf
  __int64 result; // rax
  _DWORD v17[68]; // [rsp+30h] [rbp-138h] BYREF

  memset(&v17[2], 0, 0x100uLL);
  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
  {
    KiUpdateNumberProcessors(*((unsigned int *)*a2 + 9));
    KiInitializeProcessor((__int64)*a2);
    KiConfigureProcessorBlock((__int64)*a2);
    KeSetAffinityProcess((__int64)PsInitialSystemProcess, 0, (unsigned __int16 *)KeActiveProcessors);
    v17[0] = 2097153;
    memset(&v17[1], 0, 0x104uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v17, *((_DWORD *)*a2 + 9));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 12 )
        LODWORD(v9) = 4096;
      else
        v9 = (-1LL << (CurrentIrql + 1)) & 0x1FFC;
      SchedulerAssist[5] |= v9;
    }
    KiIpiSendPacket(0, (int)v17, (__int64)KiInitDynamicProcessorIpi, 0LL, 0LL, 0LL);
    KiIpiStallOnPacketTargetsPrcb(v10, (__int64)KeGetCurrentPrcb());
    if ( KiIrqlFlags )
    {
      v11 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v13 = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v14 & v13[5]) == 0;
        v13[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    KeRestoreMtrrBroadcast();
    ((void (__fastcall *)(_QWORD, char *))off_140C01AC0[0])(0LL, (char *)*a2 + 36);
    KiConfigureSchedulingInformation((__int64)*a2, 1);
    KiReconfigureSubNodeSchedulingInformation((*a2)[24], *a2);
    KiBarrierWait = 0;
    *((_BYTE *)a2 + 8) = 1;
  }
  else
  {
    while ( !*((_BYTE *)a2 + 8) )
      _mm_pause();
  }
  result = KiConfigureSchedulingInformation((__int64)KeGetCurrentPrcb(), 1);
  _InterlockedDecrement(a3);
  return result;
}
