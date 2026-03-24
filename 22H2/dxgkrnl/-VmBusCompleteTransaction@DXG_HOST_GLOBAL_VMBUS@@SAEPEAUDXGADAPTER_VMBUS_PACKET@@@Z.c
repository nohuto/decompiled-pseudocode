/*
 * XREFs of ?VmBusCompleteTransaction@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DE40
 * Callers:
 *     <none>
 * Callees:
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0040684 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z @ 0x1C02BEE60 (-CompleteTransaction@DXGVIRTUALMACHINE@@QEAAJ_KJPEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCompleteTransaction(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rbx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  struct VMBPACKETCOMPLETION__ *v10; // rcx
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return 0;
  v7 = *(unsigned int *)(v2 + 40) + 48LL;
  if ( *((unsigned int *)a1 + 22) < v7 )
  {
    v8 = WdLogNewEntry5_WdWarning(v7, v3, v4);
    *(_QWORD *)(v8 + 24) = *((unsigned int *)a1 + 22);
    *(_QWORD *)(v8 + 32) = *(unsigned int *)(v5 + 40);
    WdLogEvent5_WdWarning(v8);
    return 0;
  }
  v9 = DXGVIRTUALMACHINE::CompleteTransaction(
         *(DXGVIRTUALMACHINE **)(*((_QWORD *)a1 + 7) + 496LL),
         *(_QWORD *)(v2 + 32),
         *(_DWORD *)(v2 + 24),
         (void *)(v2 + 48),
         *(_DWORD *)(v2 + 40));
  v10 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
  v11 = v9;
  VmBusCompletePacket(v10, &v11, 4u);
  return 1;
}
