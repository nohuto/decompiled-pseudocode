/*
 * XREFs of NdisAcquireRWLockRead @ 0x1C0005A00
 * Callers:
 *     ?ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0036030 (-ndisMDispatchReceiveNetBufferListsWithLock@@YAXPEAXPEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x1C0064E70 (-EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 *     ?EthFilterDprIndicateReceiveComplete@@YAXPEAU_X_FILTER@@@Z @ 0x1C00652A0 (-EthFilterDprIndicateReceiveComplete@@YAXPEAU_X_FILTER@@@Z.c)
 *     ?EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z @ 0x1C0065574 (-EthQueryGlobalFilterAddresses@@YAXPEAHPEAU_X_FILTER@@IPEAIPEAY05E@Z.c)
 *     ?EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z @ 0x1C0065618 (-EthQueryOpenFilterAddresses@@YAXPEAHPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@IPEAIPEAY05E@Z.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00658B0 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00689F0 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C008ED80 (-ndisMIndicatePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisPeriodicReceivesWorker@@YAXPEAX@Z @ 0x1C00A44E0 (-ndisPeriodicReceivesWorker@@YAXPEAX@Z.c)
 *     ?ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z @ 0x1C00A53E0 (-ndisVerifyNdisAcquireRWLockRead@@YAXPEAU_NDIS_RW_LOCK_EX@@PEAU_LOCK_STATE_EX@@E@Z.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00AAE4C (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BBD10 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BBF10 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00BC0E0 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BC5C0 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00BC930 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     NdisMCoReceiveComplete @ 0x1C00BCD20 (NdisMCoReceiveComplete.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00BCE00 (ndisCoIndicateStatusInternal.c)
 *     ndisMIsLoopbackPacket @ 0x1C00C57D0 (ndisMIsLoopbackPacket.c)
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012C8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockRead(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  KIRQL v5; // al
  _QWORD *v6; // rdi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( (Flags & 1) != 0 )
    v5 = 2;
  else
    v5 = KfRaiseIrql(2u);
  LockState->OldIrql = v5;
  v6 = (_QWORD *)(*((_QWORD *)Lock + 4) + (KeGetPcr()->Prcb.Number << 12));
  ++*v6;
  _InterlockedOr(v7, 0);
  if ( *((_QWORD *)Lock + 2) && *v6 <= 1uLL && *((struct _KTHREAD **)Lock + 3) != KeGetCurrentThread() )
  {
    *v6 = 0LL;
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)Lock + 2);
    *v6 = 1LL;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)Lock + 2);
  }
  LockState->LockState = 3;
}
