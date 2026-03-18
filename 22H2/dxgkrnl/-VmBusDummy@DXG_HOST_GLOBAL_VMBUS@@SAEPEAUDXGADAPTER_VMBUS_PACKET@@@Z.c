/*
 * XREFs of ?VmBusDummy@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037D930
 * Callers:
 *     <none>
 * Callees:
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDummy(struct VMBPACKETCOMPLETION__ **a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  VmBusCompletePacket(a1[16], &v2, 4u);
  return 1;
}
