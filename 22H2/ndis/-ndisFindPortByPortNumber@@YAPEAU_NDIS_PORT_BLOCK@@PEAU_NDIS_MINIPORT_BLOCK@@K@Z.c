/*
 * XREFs of ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00821C4
 * Callers:
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00821F4 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0082878 (-ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C0082F94 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     ?ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008307C (-ndisUpdateMiniportPortStates@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     NdisMFreePort @ 0x1C0083570 (NdisMFreePort.c)
 *     ?ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D9F0 (-ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_PORT_BLOCK *__fastcall ndisFindPortByPortNumber(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2)
{
  __int64 v2; // r8
  _LIST_ENTRY *i; // rax

  v2 = 0LL;
  for ( i = a1->PortList.Flink; i != &a1->PortList; i = i->Flink )
  {
    if ( HIDWORD(i[1].Blink) == a2 )
      return (struct _NDIS_PORT_BLOCK *)i;
    if ( HIDWORD(i[1].Blink) > a2 )
      return (struct _NDIS_PORT_BLOCK *)v2;
  }
  return (struct _NDIS_PORT_BLOCK *)v2;
}
