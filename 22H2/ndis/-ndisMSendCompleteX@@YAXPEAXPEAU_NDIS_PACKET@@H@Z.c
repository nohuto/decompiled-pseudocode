/*
 * XREFs of ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C0300
 * Callers:
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0063A20 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0064560 (-ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ?ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00C08C0 (-ndisMSendPacketsXToMiniport@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0032B38 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     ?ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C0064434 (-ndisMFreeSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1C00C37A4 (-NDISM_SEND_PACKET_STATS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C00C38A4 (-ndisFreePaddedMdl@@YAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x1C00C3A3C (-ndisMSendCompletePacketToNetBufferLists@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 */

void __fastcall ndisMSendCompleteX(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  KIRQL v6; // si
  __int64 v7; // r8
  __int64 v8; // r14
  struct _NDIS_STACK_RESERVED *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = 0LL;
  v6 = KfRaiseIrql(2u);
  if ( (a1->Flags & 0x40) != 0 && *(unsigned __int64 *)((char *)a2->Reserved + a2->Private.NdisPacketOobOffset) )
    ndisMFreeSGList(a1, a2, v7);
  if ( (a1->SendFlags & 8) != 0 && *(void **)((char *)&a2[1].Private.Pool + a2->Private.NdisPacketOobOffset) )
    ndisFreePaddedMdl(a2);
  NDIS_STACK_RESERVED_FROM_PACKET(a2, &v9);
  v8 = *(_QWORD *)v9;
  *(_QWORD *)v9 = 1297040182LL;
  a2->Private.NdisPacketFlags &= 0xC0u;
  if ( !a3 )
    NDISM_SEND_PACKET_STATS(a1, a2);
  if ( *(_MDL **)((char *)&a2[1].Private.Head + a2->Private.NdisPacketOobOffset) )
    ndisMSendCompletePacketToNetBufferLists(&a1->Header, a2, a3);
  else
    (*(void (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(v8 + 112))(v8, a2, a3);
  if ( v6 != 2 )
    KeLowerIrql(v6);
}
