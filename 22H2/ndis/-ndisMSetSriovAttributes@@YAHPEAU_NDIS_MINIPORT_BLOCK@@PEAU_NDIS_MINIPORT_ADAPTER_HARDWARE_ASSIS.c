/*
 * XREFs of ?ndisMSetSriovAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES@@@Z @ 0x1C0071690
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00230C0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ?ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0078AF8 (-ndisIovInitVf@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_HARDWARE_ASSIST_ATTRIBUTES *a2)
{
  unsigned int LocallyUniqueId; // ebx
  _NDIS_SRIOV_CAPABILITIES *HardwareSriovCapabilities; // rax
  size_t v6; // rsi
  _NDIS_SRIOV_CAPABILITIES *CurrentSriovCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchHwCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // rax
  _NDIS_SRIOV_CAPABILITIES *PoolWithTag; // rax
  _NDIS_SRIOV_CAPABILITIES *v11; // rdx
  size_t Size; // r8
  _NDIS_SRIOV_CAPABILITIES *v13; // rax
  _NDIS_SRIOV_CAPABILITIES *v14; // rdx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovHwCapabilities; // rcx

  LocallyUniqueId = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x83u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      a2);
  HardwareSriovCapabilities = a2->HardwareSriovCapabilities;
  if ( !HardwareSriovCapabilities->Header.Revision || (v6 = 12LL, HardwareSriovCapabilities->Header.Size < 0xCu) )
  {
    LocallyUniqueId = -1073741811;
    goto LABEL_31;
  }
  CurrentSriovCapabilities = a2->CurrentSriovCapabilities;
  if ( !CurrentSriovCapabilities->Header.Revision
    || CurrentSriovCapabilities->Header.Size < 0xCu
    || (HardwareSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchHwCapabilities = a1->NicSwitchHwCapabilities) == 0LL || NicSwitchHwCapabilities->Header.Revision < 2u)
    || (CurrentSriovCapabilities->SriovCapabilities & 3) == 3
    && ((NicSwitchCurrentCapabilities = a1->NicSwitchCurrentCapabilities) == 0LL
     || NicSwitchCurrentCapabilities->Header.Revision < 2u) )
  {
    LocallyUniqueId = -1073741811;
LABEL_33:
    SriovCurrentCapabilities = a1->SriovCurrentCapabilities;
    if ( SriovCurrentCapabilities )
    {
      ExFreePoolWithTag(SriovCurrentCapabilities, 0);
      a1->SriovCurrentCapabilities = 0LL;
    }
    SriovHwCapabilities = a1->SriovHwCapabilities;
    if ( SriovHwCapabilities )
    {
      ExFreePoolWithTag(SriovHwCapabilities, 0);
      a1->SriovHwCapabilities = 0LL;
    }
    goto LABEL_37;
  }
  if ( a1->SriovCurrentCapabilities || a1->SriovHwCapabilities )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_37;
  }
  PoolWithTag = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
  a1->SriovHwCapabilities = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_17:
    LocallyUniqueId = -1073741670;
    goto LABEL_33;
  }
  *(_QWORD *)&PoolWithTag->Header.Type = 0LL;
  PoolWithTag->SriovCapabilities = 0;
  v11 = a2->HardwareSriovCapabilities;
  Size = v11->Header.Size;
  if ( v11->Header.Size >= 0xCu )
    Size = 12LL;
  memmove(a1->SriovHwCapabilities, v11, Size);
  if ( (a2->CurrentSriovCapabilities->SriovCapabilities & 3) != 3 || ndisSystemSupportsSriov )
  {
    v13 = (_NDIS_SRIOV_CAPABILITIES *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
    a1->SriovCurrentCapabilities = v13;
    if ( !v13 )
      goto LABEL_17;
    *(_QWORD *)&v13->Header.Type = 0LL;
    v13->SriovCapabilities = 0;
    v14 = a2->CurrentSriovCapabilities;
    if ( v14->Header.Size < 0xCu )
      v6 = v14->Header.Size;
    memmove(a1->SriovCurrentCapabilities, v14, v6);
    LocallyUniqueId = ZwAllocateLocallyUniqueId(&a1->SriovLuid);
    if ( LocallyUniqueId
      || (a2->CurrentSriovCapabilities->SriovCapabilities & 5) == 5 && (LocallyUniqueId = ndisIovInitVf(a1)) != 0 )
    {
LABEL_31:
      if ( (int)(LocallyUniqueId + 0x80000000) < 0 || LocallyUniqueId == -1073676283 )
        goto LABEL_37;
      goto LABEL_33;
    }
  }
LABEL_37:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x84u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      (char)a2,
      LocallyUniqueId);
  return LocallyUniqueId;
}
