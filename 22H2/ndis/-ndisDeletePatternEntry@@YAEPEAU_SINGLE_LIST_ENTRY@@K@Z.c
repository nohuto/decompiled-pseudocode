/*
 * XREFs of ?ndisDeletePatternEntry@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C0090564
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00906B4 (-ndisFilterIndicatePMOffloadReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090708 (-ndisFilterIndicateWoLPatternReject@@YAEPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091BC0 (-ndisOidPostPMRemoveWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0091D40 (-ndisOidPostRemovePMProtocolOffload@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisDeletePatternEntry(struct _SINGLE_LIST_ENTRY *a1, int a2)
{
  struct _SINGLE_LIST_ENTRY *v2; // r8
  unsigned __int8 result; // al
  _SINGLE_LIST_ENTRY *Next; // rcx
  _SINGLE_LIST_ENTRY *v5; // r9

  v2 = a1;
  result = 0;
  Next = a1->Next;
  if ( Next )
  {
    while ( 1 )
    {
      v5 = Next->Next;
      if ( LODWORD(Next[5].Next) == a2 )
        break;
      v2 = Next;
      Next = Next->Next;
      if ( !v5 )
        return result;
    }
    v2->Next = v5;
    ExFreePoolWithTag(Next, 0);
    return 1;
  }
  return result;
}
