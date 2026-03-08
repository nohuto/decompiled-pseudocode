/*
 * XREFs of ?VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03753F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC44 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z @ 0x1C03921AC (-CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCompleteTransaction(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  int v6; // eax
  struct VMBPACKETCOMPLETION__ *v7; // rcx
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  if ( !v2 )
    return 0;
  v4 = *(unsigned int *)(v2 + 40);
  v5 = *((unsigned int *)a1 + 36);
  if ( v5 < v4 + 48 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v5, v4);
    return 0;
  }
  v6 = DXGVIRTUALMACHINE::CompleteTransaction(
         *(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 12) + 608LL),
         *(_QWORD *)(v2 + 32),
         *(_DWORD *)(v2 + 24),
         (void *)(v2 + 48),
         *(_DWORD *)(v2 + 40));
  v7 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
  v8 = v6;
  VmBusCompletePacket(v7, &v8, 4u);
  return 1;
}
