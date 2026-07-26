/*
 * XREFs of ?ndisUpdatePMCurrentParameters@@YAXPEAU_NDIS_PM_CAPABILITIES@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C0095C34
 * Callers:
 *     ?ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090624 (-ndisFilterIndicatePMCapabilities@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0093020 (-ndisOpenIndicatePMCapabilities@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdatePMCurrentParameters(struct _NDIS_PM_CAPABILITIES *a1, struct _NDIS_PM_PARAMETERS *a2)
{
  a2->EnabledWoLPacketPatterns &= a1->SupportedWoLPacketPatterns;
  a2->EnabledProtocolOffloads &= a1->SupportedProtocolOffloads;
  if ( (unsigned int)(a1->MinLinkChangeWakeUp - 2) > 2 )
    a2->WakeUpFlags &= ~1u;
}
