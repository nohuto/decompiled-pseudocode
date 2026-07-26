/*
 * XREFs of ?ndisMSetIndicatePacketHandler@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0031730
 * Callers:
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013AA18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMSetIndicatePacketHandler(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_MEDIUM MediaType; // eax
  void (__fastcall *SavedPacketIndicateHandler)(void *, _NDIS_PACKET **, unsigned int); // rdx
  bool v3; // cf

  MediaType = a1->MediaType;
  if ( MediaType )
  {
    if ( MediaType == NdisMediumWan )
    {
      SavedPacketIndicateHandler = a1->SavedPacketIndicateHandler;
      goto LABEL_4;
    }
    SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacket;
  }
  else
  {
    SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ethFilterDprIndicateReceivePacket;
  }
  a1->SavedPacketIndicateHandler = SavedPacketIndicateHandler;
LABEL_4:
  v3 = a1->MajorNdisVersion < 6u;
  a1->Ndis5PacketIndicateHandler = SavedPacketIndicateHandler;
  a1->TopNdis5PacketIndicateHandler = SavedPacketIndicateHandler;
  a1->SavedReceivePathEnabled = 1;
  if ( v3 && a1->Ndis6ProtocolsBound == 1 )
  {
    SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
    a1->SavedPacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMIndicatePacketsToNetBufferLists;
  }
  if ( (a1->Flags & 0x20000000) != 0 )
  {
    a1->PacketIndicateHandler = SavedPacketIndicateHandler;
    a1->ReceivePathEnabled = 1;
  }
}
