/*
 * XREFs of ?ndisIsCompartmentEnumerable@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00189E4
 * Callers:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FE93C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109B28 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ndisNsiNotifyClientNetworkChange @ 0x1C0128CAC (ndisNsiNotifyClientNetworkChange.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisIsCompartmentEnumerable(const struct _NDIS_IF_COMPARTMENT_BLOCK *a1)
{
  return (*((_BYTE *)a1 + 1680) & 2) == 0;
}
