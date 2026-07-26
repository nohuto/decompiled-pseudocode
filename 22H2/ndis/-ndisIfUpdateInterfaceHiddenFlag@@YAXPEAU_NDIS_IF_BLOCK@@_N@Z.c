/*
 * XREFs of ?ndisIfUpdateInterfaceHiddenFlag@@YAXPEAU_NDIS_IF_BLOCK@@_N@Z @ 0x1C0107B2C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z @ 0x1C00214C0 (-ndisMUpdateHiddenFlag@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_N@Z.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FE4C (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0127C0C (ndisIfUpdateIfBlockFromPersistedState.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FE93C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfUpdateInterfaceHiddenFlag(struct _NDIS_IF_BLOCK *a1, unsigned __int8 a2)
{
  _DWORD v2[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 *p_ifHideInterfaceInUi; // [rsp+28h] [rbp-20h]
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]

  if ( a2 != (a1->ifHideInterfaceInUi != 0) )
  {
    v2[1] = 0;
    a1->ifHideInterfaceInUi = a2;
    v2[0] = 1;
    v4 = 1;
    p_ifHideInterfaceInUi = &a1->ifHideInterfaceInUi;
    v5 = 642;
    ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v2, 1);
  }
}
