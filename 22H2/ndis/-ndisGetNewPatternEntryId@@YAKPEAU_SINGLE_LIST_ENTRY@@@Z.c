/*
 * XREFs of ?ndisGetNewPatternEntryId@@YAKPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C003BCA8
 * Callers:
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C003B42C (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C009153C (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C0094D90 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGetNewPatternEntryId(struct _SINGLE_LIST_ENTRY *a1)
{
  _SINGLE_LIST_ENTRY *Next; // rdx
  unsigned int i; // r8d
  unsigned int v4; // ecx

  Next = a1->Next;
  for ( i = 0; Next; i = v4 )
  {
    v4 = (unsigned int)Next[5].Next;
    if ( v4 > i + 1 )
      break;
    Next = Next->Next;
  }
  return i + 1;
}
