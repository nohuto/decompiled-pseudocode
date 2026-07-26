/*
 * XREFs of ?ndisIfUpdateCurrentMacAddressAndNotify@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C01278F0
 * Callers:
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0117F44 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     ?ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z @ 0x1C00B2418 (-ndisIfUpdateCurrentMacAddress@@YA_NPEAU_NDIS_IF_BLOCK@@PEBU_IF_PHYSICAL_ADDRESS_LH@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FE93C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0128044 (-ndisIfWriteBackPersistedInterface@@YAJPEAU_NDIS_IF_BLOCK@@@Z.c)
 */

void __fastcall ndisIfUpdateCurrentMacAddressAndNotify(
        struct _NDIS_IF_BLOCK *a1,
        const struct _IF_PHYSICAL_ADDRESS_LH *a2)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  _IF_PHYSICAL_ADDRESS_LH *p_ifPhysAddress; // [rsp+28h] [rbp-20h]
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  if ( ndisIfUpdateCurrentMacAddress(a1, a2) )
  {
    v3[1] = 0;
    p_ifPhysAddress = &a1->ifPhysAddress;
    v3[0] = 1;
    v5 = 34;
    v6 = 548;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v3, 1);
    v3[0] = 0;
    v6 = 536;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v3, 0);
    if ( a1->Source == NdisIfBlockSourcePersistedNetSetup )
      ndisIfWriteBackPersistedInterface(a1);
  }
}
