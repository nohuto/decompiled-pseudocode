/*
 * XREFs of ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0105E90
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01057B4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C002A4DC (-ndisUpdateNoPauseOnSuspend@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0105EB8 (-ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisMRecalculateMiniportStackAfterBinding(struct _NDIS_MINIPORT_BLOCK *a1)
{
  ndisUpdateMinimumStackVersion(a1, 0, 0);
  ndisUpdateNoPauseOnSuspend(a1);
}
