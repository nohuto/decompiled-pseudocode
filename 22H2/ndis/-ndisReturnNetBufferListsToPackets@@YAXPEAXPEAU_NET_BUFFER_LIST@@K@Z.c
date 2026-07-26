/*
 * XREFs of ?ndisReturnNetBufferListsToPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C00C4CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032B38 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     NdisMPauseComplete @ 0x1C003C1A0 (NdisMPauseComplete.c)
 *     ?ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0076234 (-ndisXlateReturnNetBufferListToPacket@@YAPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ?ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C4E38 (-ndisReturnPacketToMiniport@@YAXPEAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisReturnNetBufferListsToPackets(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  int v3; // r15d
  KIRQL v4; // si
  char v7; // r14
  struct _NET_BUFFER_LIST *Alignment; // rbp
  struct _NDIS_PACKET *v9; // rax
  PNDIS_PACKET v10; // r9
  unsigned int v11; // eax
  bool v12; // zf
  struct _NDIS_STACK_RESERVED *v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v13 = 0LL;
  v4 = 0;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    v4 = KfRaiseIrql(2u);
  if ( a2 )
  {
    do
    {
      Alignment = (struct _NET_BUFFER_LIST *)a2->Link.Alignment;
      v9 = ndisXlateReturnNetBufferListToPacket(a2);
      if ( v9 )
      {
        ++*(_DWORD *)&v9[-1].ProtocolReserved[4];
        NDIS_STACK_RESERVED_FROM_PACKET(v9, &v13);
        ++v3;
        *(_QWORD *)v13 = a1;
        ndisReturnPacketToMiniport(a1, v10);
      }
      a2 = Alignment;
    }
    while ( Alignment );
  }
  KeAcquireSpinLockAtDpcLevel(&a1->RecvLock);
  v11 = a1->OutstandingReceives - v3;
  v12 = a1->RecvState == NdisMiniportPausing;
  a1->OutstandingReceives = v11;
  if ( !v12 || v11 )
  {
    a1->MiniportRecvLockThread = 0LL;
    KeReleaseSpinLockFromDpcLevel(&a1->RecvLock);
  }
  else
  {
    a1->MiniportRecvLockThread = 0LL;
    a1->RecvState = NdisMiniportPaused;
    KeReleaseSpinLockFromDpcLevel(&a1->RecvLock);
    NdisMPauseComplete(a1);
  }
  if ( !v7 && v4 != 2 )
    KeLowerIrql(v4);
}
