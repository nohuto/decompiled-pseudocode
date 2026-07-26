/*
 * XREFs of ?ndisUpdateMinimumStackVersion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0105EB8
 * Callers:
 *     ?ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0105E90 (-ndisMRecalculateMiniportStackAfterBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0120E18 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 * Callees:
 *     ?ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A2AEC (-ndisDisableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A2C4C (-ndisEnableRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z @ 0x1C0105F3C (-ndisFindMinimumVersionDrivers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KK@Z.c)
 */

void __fastcall ndisUpdateMinimumStackVersion(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 MinimumNdisMajorVersion; // bl
  unsigned __int8 MinimumNdisMinorVersion; // di
  struct _NDIS_MINIPORT_BLOCK *v5; // r11
  unsigned __int8 v6; // al
  bool v7; // zf
  bool v8; // cc

  MinimumNdisMajorVersion = a1->MinimumNdisMajorVersion;
  MinimumNdisMinorVersion = a1->MinimumNdisMinorVersion;
  ndisFindMinimumVersionDrivers(a1, a2, a3);
  v6 = v5->MinimumNdisMajorVersion;
  if ( __PAIR16__(MinimumNdisMinorVersion, MinimumNdisMajorVersion) == *(_WORD *)&v5->MinimumNdisMajorVersion )
    return;
  v7 = MinimumNdisMajorVersion == 6;
  v8 = MinimumNdisMajorVersion <= 6u;
  if ( MinimumNdisMajorVersion > 6u )
    goto LABEL_6;
  if ( MinimumNdisMajorVersion == 6 )
  {
    if ( MinimumNdisMinorVersion < 0x1Eu )
    {
LABEL_9:
      v7 = MinimumNdisMajorVersion == 6;
      v8 = MinimumNdisMajorVersion <= 6u;
      goto LABEL_10;
    }
LABEL_6:
    if ( v6 <= 6u && (v6 != 6 || v5->MinimumNdisMinorVersion < 0x1Eu) )
    {
      ndisDisableRsc(v5);
      return;
    }
    goto LABEL_9;
  }
LABEL_10:
  if ( v8 && (!v7 || MinimumNdisMinorVersion < 0x1Eu) && (v6 > 6u || v6 == 6 && v5->MinimumNdisMinorVersion >= 0x1Eu) )
    ndisEnableRsc(v5);
}
