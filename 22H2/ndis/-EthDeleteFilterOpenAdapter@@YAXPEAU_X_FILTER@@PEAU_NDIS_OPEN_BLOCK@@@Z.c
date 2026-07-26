/*
 * XREFs of ?EthDeleteFilterOpenAdapter@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0064E0C
 * Callers:
 *     ?ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C01399B8 (-ndisMKillOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     ?XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C008E994 (-XRemoveBindingFromLists@@YAXPEAU_X_FILTER@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 */

void __fastcall EthDeleteFilterOpenAdapter(struct _X_FILTER *a1, struct _NDIS_OPEN_BLOCK *a2)
{
  XRemoveBindingFromLists(a1, a2);
  if ( a2->MaxMulticastAddresses )
  {
    ExFreePoolWithTag(a2->MCastAddressBuf, 0);
    ExFreePoolWithTag(a2->OldMCastAddressBuf, 0);
  }
  a2->MCastAddressBuf = 0LL;
  a2->OldMCastAddressBuf = 0LL;
}
