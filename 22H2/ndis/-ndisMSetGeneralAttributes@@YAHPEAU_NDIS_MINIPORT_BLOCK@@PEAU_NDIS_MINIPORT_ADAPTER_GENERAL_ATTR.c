/*
 * XREFs of ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C0023654
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00230C0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A5E8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A680 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C0023B58 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C003D6C8 (ndisMSetPowerManagementCapabilities.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ?ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0100B5C (-ndisReadDataLinkLayerKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z @ 0x1C0117DC8 (-ndisConvertPnpCapabilitiesToPM@@YAXPEAU_NDIS_PNP_CAPABILITIES@@PEAU_NDIS_PM_CAPABILITIES@@@Z.c)
 */

int __fastcall ndisMSetGeneralAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES *a2)
{
  int v4; // esi
  __int64 v5; // rdx
  unsigned int InterlockedFlags; // eax
  unsigned int v7; // ett
  bool v8; // zf
  _NDIS_MEDIUM MediaType; // eax
  unsigned __int8 LinkStateIndicationFlags; // dl
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // eax
  unsigned int Flags; // ecx
  unsigned int v13; // ecx
  KIRQL v14; // dl
  UCHAR Revision; // al
  _NDIS_PM_CAPABILITIES *PowerManagementCapabilitiesEx; // rdx
  int result; // eax
  struct _NDIS_RECEIVE_SCALE_CAPABILITIES *RecvScaleCapabilities; // rdx
  unsigned int SupportedPacketFilters; // ecx
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int LookaheadSize; // eax
  _NDIS_PHYSICAL_MEDIUM PhysicalMediumType; // eax
  _NDIS_MEDIUM v24; // eax
  bool v25; // cf
  _NDIS_PHYSICAL_MEDIUM v26; // eax
  unsigned int SupportedOidListLength; // eax
  unsigned int *PoolWithTag; // rax
  __int128 v29; // xmm0
  int v30; // eax
  SIZE_T v31; // rdx
  unsigned int *v32; // rax
  struct _NDIS_IF_BLOCK *v33; // rax
  struct _NDIS_PNP_CAPABILITIES *PowerManagementCapabilities; // rcx
  unsigned int SupportedStatistics; // eax
  int NewIrql; // [rsp+60h] [rbp+8h] BYREF

  LOBYTE(NewIrql) = 0;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x77u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1);
  if ( (a1->Flags & 0x80u) != 0 )
  {
    v33 = ndisMReferenceIfBlock(a1, 0x17u);
    if ( !v33 )
      return -1073676271;
    a2->IfType = v33->ifType;
    a2->MediaType = v33->MediaType;
    a2->PhysicalMediumType = v33->PhysicalMediumType;
    a2->IfConnectorPresent = v33->ifConnectorPresent;
    a2->AccessType = v33->AccessType;
    a2->ConnectionType = v33->ConnectionType;
    a2->DirectionType = v33->DirectionType;
    a2->LookaheadSize = 1500;
    a2->MacOptions = 581;
    ndisMDereferenceIfBlock(a1, MPIFREF_SET_ATTRIBUTES);
  }
  v5 = 0LL;
  if ( !(_DWORD)ndisMediumArraySize )
    return -1073676263;
  do
  {
    if ( a2->MediaType == *((_DWORD *)ndisMediumArray + v5) )
      break;
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < (unsigned int)ndisMediumArraySize );
  if ( (unsigned int)v5 >= (unsigned int)ndisMediumArraySize )
    return -1073676263;
  ndisReadDataLinkLayerKeywords(a1);
  _m_prefetchw(&a1->InterlockedFlags);
  InterlockedFlags = a1->InterlockedFlags;
  do
  {
    v7 = InterlockedFlags;
    InterlockedFlags = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&a1->InterlockedFlags,
                         InterlockedFlags,
                         InterlockedFlags);
  }
  while ( v7 != InterlockedFlags );
  v8 = (InterlockedFlags & 0x100) == 0;
  MediaType = a2->MediaType;
  if ( !v8 )
  {
    a1->MpSpecifiedMediaType = MediaType;
    MediaType = a1->DataLinkLayerType;
  }
  a1->MediaType = MediaType;
  a1->MiniportMediaType = MediaType;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, (unsigned __int8 *)&NewIrql);
  LinkStateIndicationFlags = a1->LinkStateIndicationFlags;
  if ( (LinkStateIndicationFlags & 8) == 0 )
    a1->MiniportMediaConnectState = a2->MediaConnectState;
  if ( (LinkStateIndicationFlags & 0x10) == 0 )
  {
    a1->MiniportRcvLinkSpeed = a2->RcvLinkSpeed;
    a1->MiniportXmitLinkSpeed = a2->XmitLinkSpeed;
    a1->MiniportMediaDuplexState = a2->MediaDuplexState;
    a1->MiniportAutoNegotiationFlags = a2->AutoNegotiationFlags;
  }
  if ( (LinkStateIndicationFlags & 1) == 0 )
  {
    MediaConnectState = a2->MediaConnectState;
    Flags = a1->Flags;
    a1->MediaConnectState = MediaConnectState;
    if ( MediaConnectState == MediaConnectStateConnected )
      v13 = Flags | 0x20000000;
    else
      v13 = Flags & 0xDFFFFFFF;
    a1->Flags = v13;
  }
  if ( (LinkStateIndicationFlags & 2) == 0 )
  {
    a1->RcvLinkSpeed = a2->RcvLinkSpeed;
    a1->XmitLinkSpeed = a2->XmitLinkSpeed;
  }
  if ( (LinkStateIndicationFlags & 4) == 0 )
    a1->MediaDuplexState = a2->MediaDuplexState;
  ndisIfSetInterfaceState(a1, 0, NewIrql);
  v14 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v14);
  a1->MP6SupportPM = 1;
  *(_QWORD *)&a1->PMCurrentParameters.EnabledWoLPacketPatterns = 0LL;
  *(_QWORD *)&a1->PMCurrentParameters.WakeUpFlags = 0LL;
  NewIrql = 1311360;
  a1->PMCurrentParameters.Header = (_NDIS_OBJECT_HEADER)1311360;
  Revision = a2->Header.Revision;
  if ( Revision == 1 )
  {
    PowerManagementCapabilities = a2->PowerManagementCapabilities;
    if ( PowerManagementCapabilities )
    {
      ndisConvertPnpCapabilitiesToPM(PowerManagementCapabilities, &a1->PMHardwareCapabilities);
      goto LABEL_27;
    }
    goto LABEL_62;
  }
  if ( Revision < 2u || (PowerManagementCapabilitiesEx = a2->PowerManagementCapabilitiesEx) == 0LL )
  {
LABEL_62:
    if ( a1->MajorNdisVersion >= 6u )
      a1->MP6SupportPM = 0;
    goto LABEL_27;
  }
  result = ndisMSetPowerManagementCapabilities((char)a1, (char)PowerManagementCapabilitiesEx);
  v4 = result;
  if ( result )
    return result;
LABEL_27:
  RecvScaleCapabilities = a2->RecvScaleCapabilities;
  if ( RecvScaleCapabilities )
  {
    result = ndisMSetRssCapabilities(a1, RecvScaleCapabilities);
    v4 = result;
    if ( result )
      return result;
  }
  v8 = (a1->DeviceFlags & 1) == 0;
  SupportedPacketFilters = a2->SupportedPacketFilters;
  a1->SupportedPacketFilters = SupportedPacketFilters;
  if ( !v8 )
    a1->SupportedPacketFilters = SupportedPacketFilters | 0x20;
  v20 = a1->MediaType;
  a1->MaxXmitLinkSpeed = a2->MaxXmitLinkSpeed;
  a1->MaxRcvLinkSpeed = a2->MaxRcvLinkSpeed;
  v21 = a1->MacOptions | a2->MacOptions;
  a1->MacOptions = v21;
  if ( !(_DWORD)v20 )
  {
    LookaheadSize = a2->LookaheadSize;
    if ( LookaheadSize > 0x200 )
      LookaheadSize = 512;
LABEL_34:
    a1->MiniportMaximumLookahead = LookaheadSize;
    goto LABEL_35;
  }
  if ( (_DWORD)v20 != 3 )
  {
    if ( (_DWORD)v20 == 4
      || (int)v20 > 8 && ((int)v20 <= 10 || (int)v20 > 14 && ((int)v20 <= 16 || (unsigned int)(v20 - 18) <= 1)) )
    {
      a1->MiniportMaximumLookahead = a2->LookaheadSize;
    }
    if ( (int)v20 < 20 )
      goto LABEL_35;
    LookaheadSize = a2->LookaheadSize;
    goto LABEL_34;
  }
  a1->MiniportMaximumLookahead = 512;
LABEL_35:
  if ( ((unsigned int)v20 <= 0x13 && ndisMediaTypeCl[v20] || (_DWORD)v20 == 3) && (v21 & 0x80000001) == 0x80000001 )
    a1->MiniportMaximumLookahead = 512;
  if ( (int)v20 >= 2 && ((int)v20 <= 8 || (int)v20 > 9 && ((int)v20 <= 15 || (_DWORD)v20 == 17)) || (int)v20 >= 20 )
    PhysicalMediumType = NdisPhysicalMediumUnspecified;
  else
    PhysicalMediumType = a2->PhysicalMediumType;
  a1->PhysicalMediumType = PhysicalMediumType;
  if ( (a1->MacOptions & 8) != 0 )
    a1->Flags |= 0x8000000u;
  v24 = a1->MediaType;
  if ( v24 )
  {
    if ( v24 == NdisMediumNative802_11 )
      a1->MaximumLongAddresses = a2->MaxMulticastListSize;
  }
  else
  {
    v25 = a1->MajorNdisVersion < 6u;
    a1->MaximumLongAddresses = a2->MaxMulticastListSize;
    if ( !v25 && a1->PhysicalMediumType == NdisPhysicalMediumWirelessLan )
      return -1073741637;
  }
  v26 = a1->PhysicalMediumType;
  if ( v26 == NdisPhysicalMediumUnspecified )
  {
    v26 = NdisPhysicalMediumUnspecified;
    if ( a1->PhysicalMediumInInf == 14 )
    {
      a1->PhysicalMediumType = NdisPhysicalMedium802_3;
      v26 = NdisPhysicalMedium802_3;
    }
  }
  v25 = a1->MajorNdisVersion < 6u;
  a1->MiniportPhysicalMediumType = v26;
  if ( v25 && (SupportedStatistics = a1->SupportedStatistics) != 0 )
    a2->SupportedStatistics = SupportedStatistics;
  else
    a1->SupportedStatistics = a2->SupportedStatistics;
  a1->DataBackFillSize = a2->DataBackFillSize;
  a1->ContextBackFillSize = a2->ContextBackFillSize;
  SupportedOidListLength = a2->SupportedOidListLength;
  if ( SupportedOidListLength )
  {
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, SupportedOidListLength, 0x6D61444Eu);
    a1->SupportedOidList = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag, a2->SupportedOidList, a2->SupportedOidListLength);
      a1->SupportedOidListLength = a2->SupportedOidListLength;
    }
  }
  v29 = *(_OWORD *)&a1->RecvScaleCapabilities.Header.Type;
  a1->TopFilterRestartAttributes.AccessType = a2->AccessType;
  a1->TopFilterRestartAttributes.ConnectionType = a2->ConnectionType;
  a1->TopFilterRestartAttributes.ContextBackFillSize = a2->ContextBackFillSize;
  a1->TopFilterRestartAttributes.DataBackFillSize = a2->DataBackFillSize;
  a1->TopFilterRestartAttributes.Header = a2->Header;
  a1->TopFilterRestartAttributes.LookaheadSize = a2->LookaheadSize;
  a1->TopFilterRestartAttributes.MacOptions = a1->MacOptions;
  a1->TopFilterRestartAttributes.MaxMulticastListSize = a2->MaxMulticastListSize;
  a1->TopFilterRestartAttributes.MtuSize = a2->MtuSize;
  v30 = *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries;
  *(_OWORD *)&a1->TopRecvScaleCapabilities.Header.Type = v29;
  *(_DWORD *)&a1->TopRecvScaleCapabilities.NumberOfIndirectionTableEntries = v30;
  a1->TopFilterRestartAttributes.RecvScaleCapabilities = &a1->TopRecvScaleCapabilities;
  a1->TopFilterRestartAttributes.SupportedPacketFilters = a2->SupportedPacketFilters;
  a1->TopFilterRestartAttributes.SupportedStatistics = a2->SupportedStatistics;
  a1->TopFilterRestartAttributes.MaxXmitLinkSpeed = a2->MaxXmitLinkSpeed;
  a1->TopFilterRestartAttributes.MaxRcvLinkSpeed = a2->MaxRcvLinkSpeed;
  v31 = a2->SupportedOidListLength;
  if ( (_DWORD)v31 || a1->MajorNdisVersion < 6u && a1->SupportedOidListLength )
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      v31 = a1->SupportedOidListLength;
      a2->SupportedOidListLength = v31;
      a2->SupportedOidList = a1->SupportedOidList;
    }
    v32 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v31, 0x6D61444Eu);
    a1->TopFilterRestartAttributes.SupportedOidList = v32;
    if ( v32 )
    {
      memmove(v32, a2->SupportedOidList, a2->SupportedOidListLength);
      a1->TopFilterRestartAttributes.SupportedOidListLength = a2->SupportedOidListLength;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x78u,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      (char)a1,
      v4);
  return 0;
}
