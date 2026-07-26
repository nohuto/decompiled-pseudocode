/*
 * XREFs of ?ndisPMPatternIdExist@@YAEPEAU_SINGLE_LIST_ENTRY@@K@Z @ 0x1C003BCC4
 * Callers:
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B42C (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009153C (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094D90 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisPMPatternIdExist(struct _SINGLE_LIST_ENTRY *a1, int a2)
{
  _SINGLE_LIST_ENTRY *i; // rax

  for ( i = a1->Next; i; i = i->Next )
  {
    if ( LODWORD(i[5].Next) == a2 )
    {
      LOBYTE(i) = 1;
      return (unsigned __int8)i;
    }
  }
  return (unsigned __int8)i;
}
