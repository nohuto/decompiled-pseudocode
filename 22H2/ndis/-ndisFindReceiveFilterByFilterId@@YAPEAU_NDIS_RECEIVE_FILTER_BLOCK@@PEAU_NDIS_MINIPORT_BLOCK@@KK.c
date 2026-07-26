/*
 * XREFs of ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C0085F98
 * Callers:
 *     ?ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00859C4 (-ndisClearReceiveFilter@@YAHPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086400 (-ndisOidPostRcvFilterMoveFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00865A0 (-ndisOidPostRcvFilterSetFilter@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086960 (-ndisOidPreRcvFilterClearFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087270 (-ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087410 (-ndisOidPreRcvFilterParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindReceiveFilterByFilterId(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // r8
  struct _NDIS_MINIPORT_BLOCK *i; // rax

  v4 = 0LL;
  for ( i = (struct _NDIS_MINIPORT_BLOCK *)a1->ReceiveFilterList.Flink;
        i != (struct _NDIS_MINIPORT_BLOCK *)&a1->ReceiveFilterList;
        i = *(struct _NDIS_MINIPORT_BLOCK **)&i->Header.Type )
  {
    if ( i->PcwDatapathEventMask == a2 )
      return i;
    if ( i->PcwDatapathEventMask > a2 )
      return (struct _NDIS_MINIPORT_BLOCK *)v4;
  }
  return (struct _NDIS_MINIPORT_BLOCK *)v4;
}
