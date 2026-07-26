/*
 * XREFs of ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x1C0127A70
 * Callers:
 *     ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0116C14 (-ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012D504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ndisIfDetachMiniportBlock @ 0x1C00B2860 (ndisIfDetachMiniportBlock.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FE93C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

void __fastcall ndisIfRemoveIfBlockMiniportAssociation(
        struct _NDIS_IF_BLOCK *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        enum _NET_IF_ADMIN_STATUS a3)
{
  char v5; // di
  _NDIS_IF_BLOCK *IfBlock; // rax
  _NDIS_IF_BLOCK *v7; // rcx
  _NDIS_IF_BLOCK *v8; // rcx
  int v9; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+44h] [rbp-1Ch]
  void *p_ifOperStatus; // [rsp+48h] [rbp-18h]
  int v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+54h] [rbp-Ch]

  v5 = (char)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      (char)a1,
      a2);
  a2->IfBlock->ifOperStatusFlags = 0;
  a2->IfBlock->ifAdminStatus = a3;
  IfBlock = a2->IfBlock;
  if ( IfBlock->ifOperStatus != NET_IF_OPER_STATUS_DOWN )
  {
    v10 = 0;
    IfBlock->ifOperStatus = NET_IF_OPER_STATUS_DOWN;
    v7 = a2->IfBlock;
    v9 = 1;
    v12 = 8;
    v13 = 536;
    p_ifOperStatus = &v7->ifOperStatus;
    ndisNsiNotifyClientInterfaceChange((__int64)v7, 0, (__int64)&v9, 1);
    IfBlock = a2->IfBlock;
  }
  if ( IfBlock->MediaConnectState )
  {
    IfBlock->MediaConnectState = MediaConnectStateUnknown;
    v8 = a2->IfBlock;
    v10 = 0;
    v9 = 1;
    v12 = 4;
    v13 = 644;
    p_ifOperStatus = &v8->MediaConnectState;
    ndisNsiNotifyClientInterfaceChange((__int64)v8, 0, (__int64)&v9, 1);
  }
  ndisIfDetachMiniportBlock(a2);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_0ecf9acc3b5b3994cffcc6b83765ca21_Traceguids,
      v5,
      a2);
}
