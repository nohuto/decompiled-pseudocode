/*
 * XREFs of ?ndisCalculateRssV2ParametersFlags@@YAKPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@@Z @ 0x1C00883F8
 * Callers:
 *     ?ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C00896EC (-ndisQueryRSSv2ParametersHelper@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssV2ParametersFlags(struct _NDIS_RECEIVE_SCALE_PARAMETERS *a1)
{
  unsigned __int16 Flags; // r9
  unsigned int v2; // r8d

  Flags = a1->Flags;
  v2 = 0;
  if ( (Flags & 0x10) == 0 && LOBYTE(a1->HashInformation) )
  {
    v2 = ~(_BYTE)Flags & 2 | 5;
    if ( (Flags & 8) != 0 )
      v2 = ~(_BYTE)Flags & 2 | 1;
    if ( (Flags & 4) == 0 )
      v2 |= 0x10u;
  }
  return v2;
}
