/*
 * XREFs of ndisTracePeriodicRcvOnOff @ 0x1C00A4AB0
 * Callers:
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C00210D4 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     ndisReceiveQueueingOff @ 0x1C00A4718 (ndisReceiveQueueingOff.c)
 *     ndisReceiveQueueingOn @ 0x1C00A4784 (ndisReceiveQueueingOn.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A4940 (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     memset @ 0x1C0040B00 (memset.c)
 */

NTSTATUS __fastcall ndisTracePeriodicRcvOnOff(__int64 a1, char a2, int a3, __int64 a4)
{
  _QWORD WnodeEventItem[10]; // [rsp+20h] [rbp-50h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  BYTE4(WnodeEventItem[0]) = 19;
  BYTE4(WnodeEventItem[6]) = a2;
  WnodeEventItem[8] = a4;
  LODWORD(WnodeEventItem[7]) = a3;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  LODWORD(WnodeEventItem[9]) = KeGetPcr()->Prcb.Number;
  LOWORD(WnodeEventItem[0]) = 80;
  if ( a1 )
    LODWORD(WnodeEventItem[6]) = (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF;
  WnodeEventItem[1] = qword_1C00E7190;
  return IoWMIWriteEvent(WnodeEventItem);
}
