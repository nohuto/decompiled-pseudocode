/*
 * XREFs of ndisReceiveQueueingOn @ 0x1C00A4784
 * Callers:
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020400 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A4940 (ndisSwitchMiniportReceiveFunction.c)
 * Callees:
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A4AB0 (ndisTracePeriodicRcvOnOff.c)
 */

__int64 __fastcall ndisReceiveQueueingOn(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 2665) = 0;
  *(_QWORD *)(a1 + 2136) = ndisMIndicateReceiveNblsWithThrottling;
  *(_QWORD *)(a1 + 3160) = qword_1C00E50D8;
  ++dword_1C00E50E0;
  qword_1C00E50D8 = (void *)a1;
  result = (unsigned int)(*(_BYTE *)(a1 + 3220) == 1) + 1;
  *(_DWORD *)(a1 + 3168) = result;
  if ( BYTE2(dword_1C00E7198) )
  {
    LOBYTE(a2) = 1;
    return ndisTracePeriodicRcvOnOff(a1, a2, (unsigned int)dword_1C00E50C4, qword_1C00E50E8);
  }
  return result;
}
