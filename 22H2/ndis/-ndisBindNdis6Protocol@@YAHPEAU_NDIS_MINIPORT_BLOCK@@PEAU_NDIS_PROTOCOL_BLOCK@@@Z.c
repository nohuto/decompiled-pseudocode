/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104E60
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C010624C (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000896C (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018AF4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019CDC (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D3AC (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@@@Z @ 0x1C0020400 (-ndisBindUnbindPeriodicReceives@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_M_PERIODIC_RECEIVE_ACTION@.c)
 *     ?ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z @ 0x1C002909C (-ndisReferenceProtocol@@YAEPEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_PT_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C0029AF4 (WPP_RECORDER_SF_ZZL.c)
 *     ?ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z @ 0x1C002A1C8 (-ndisDereferenceProtocol@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@EW4_NDIS_PT_REFTAG@@@Z.c)
 *     ?ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z @ 0x1C002A31C (-ndisGetPortList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_PORT@@@Z.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x1C002AB2C (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0033204 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C003D0AC (-ndisNotifyBindFailure@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1C0078938 (-ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z.c)
 *     McTemplateK0jqxzd_EtwWriteTransfer @ 0x1C0099820 (McTemplateK0jqxzd_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C010556C (-RELEASE_PROT_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z @ 0x1C01055A4 (-ndisInvokeBindAdapter@@YAHPEAU_NDIS_PROTOCOL_BLOCK@@PEAXPEAU_NDIS_BIND_PARAMETERS@@@Z.c)
 *     ?ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z @ 0x1C0105FFC (-ndisIfQueryBindingMiniportIfIndex@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAKPEAT_NET_LUID_LH@@12@Z.c)
 *     ?WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0106214 (-WAIT_FOR_PROTO_MUTEX@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z @ 0x1C010BA38 (-ndisMDoMiniportOp@@YAJPEAU_NDIS_MINIPORT_BLOCK@@EKPEAXJJE@Z.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  unsigned int Blink; // esi
  int v5; // edx
  int v6; // r9d
  char v7; // r12
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r13
  UNICODE_STRING v10; // xmm0
  __int16 v11; // ax
  SIZE_T v12; // rdx
  wchar_t *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // r8
  unsigned __int8 MinorNdisVersion; // al
  UCHAR v16; // dl
  USHORT v17; // ax
  unsigned int v18; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *ReceiveFilterCapabilities; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCapabilities; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v28; // rdx
  _NDIS_IF_BLOCK *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int8 v35; // cl
  int v36; // edx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  char v39; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_BIND_PARAMETERS v45; // [rsp+110h] [rbp+10h] BYREF

  memset(&v45, 0, sizeof(v45));
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v39 = 0;
  Blink = 0;
  v41 = 0;
  Destination = 0LL;
  Source = 0LL;
  DestinationString = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Au,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      (char)a1,
      a2);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1u, 0x10114u, &v41, 4, 1, 1u);
  if ( ndisReferenceProtocol(a2, 8u) )
  {
    if ( !a1->EthDB )
    {
      Blink = -1073741823;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          6u,
          0x1Bu,
          (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
          (char)a1,
          a2);
      goto LABEL_57;
    }
    v7 = 1;
    WAIT_FOR_PROTO_MUTEX(a2);
    if ( a2->Ref.Closing )
      goto LABEL_54;
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v7 = 0;
      goto LABEL_54;
    }
    Paths = a1->BindPaths->Paths;
    a2->BindDeviceName = &a1->MiniportName;
    a2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v10 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v10) - ndisDeviceStr.Length;
    v11 = a2->Name.Length - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v12 = (unsigned __int16)(Paths->Length + DestinationString.Length + v11 + 2);
    Destination.Length = 0;
    Destination.MaximumLength = v12;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_54;
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &a2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = a2->MajorNdisVersion;
    v45.Header.Type = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      MinorNdisVersion = a2->MinorNdisVersion;
      if ( MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v16 = 4;
        v17 = 312;
LABEL_15:
        v45.Header.Size = v17;
        v45.Header.Revision = v16;
        v45.ProtocolSection = &Destination;
        v45.PhysicalDeviceObject = a1->PhysicalDeviceObject;
        v18 = a1->MacOptions & 0x80000001;
        v45.AdapterName = Paths;
        v45.BoundAdapterName = &a1->MiniportName;
        if ( v18 == -2147483647 )
          v45.MediaType = NdisMediumWan;
        else
          v45.MediaType = a1->MediaType;
        HighestFilter = a1->HighestFilter;
        if ( HighestFilter )
        {
          v45.XmitLinkSpeed = HighestFilter->XmitLinkSpeedIndicateUp;
          v45.RcvLinkSpeed = HighestFilter->RcvLinkSpeedIndicateUp;
          v45.MediaConnectState = HighestFilter->MediaConnectStateIndicateUp;
          MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
        }
        else
        {
          IfBlock = a1->IfBlock;
          v45.XmitLinkSpeed = a1->XmitLinkSpeed;
          v45.RcvLinkSpeed = a1->RcvLinkSpeed;
          v45.MediaConnectState = IfBlock->MediaConnectState;
          MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
        }
        v45.MediaDuplexState = MediaDuplexStateIndicateUp;
        v45.MtuSize = a1->TopFilterRestartAttributes.MtuSize;
        v45.MaxXmitLinkSpeed = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        v45.MaxRcvLinkSpeed = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        v45.LookaheadSize = a1->TopFilterRestartAttributes.LookaheadSize;
        v45.SupportedPacketFilters = a1->TopFilterRestartAttributes.SupportedPacketFilters;
        v45.MaxMulticastListSize = a1->TopFilterRestartAttributes.MaxMulticastListSize;
        v45.PhysicalMediumType = a1->PhysicalMediumType;
        v45.RcvScaleCapabilities = &a1->TopRecvScaleCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x14u )
          v45.PowerManagementCapabilitiesEx = &a1->PMAdvertisedCapabilities;
        else
          v45.PowerManagementCapabilities = &a1->PMCapabilities61;
        Offload = a1->Offload;
        if ( Offload )
        {
          if ( Offload->SupportsTopOffload == 1 )
            v45.DefaultOffloadConfiguration = &Offload->TopCapabilities;
          if ( Offload->SupportsTopTcpConnectionOffload == 1 )
            v45.TcpConnectionOffloadCapabilities = &Offload->TopTcpConnectionOffloadCapabilities;
        }
        HDSplitCurrentConfig = v45.HDSplitCurrentConfig;
        if ( a1->HDSplitCurrentConfig )
          HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
        TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
        v45.HDSplitCurrentConfig = HDSplitCurrentConfig;
        ReceiveFilterCapabilities = v45.ReceiveFilterCapabilities;
        if ( TopReceiveFilterCurrentCapabilities )
          ReceiveFilterCapabilities = TopReceiveFilterCurrentCapabilities;
        TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
        v45.ReceiveFilterCapabilities = ReceiveFilterCapabilities;
        NicSwitchCapabilities = v45.NicSwitchCapabilities;
        if ( TopNicSwitchCurrentCapabilities )
          NicSwitchCapabilities = TopNicSwitchCurrentCapabilities;
        v45.NicSwitchCapabilities = NicSwitchCapabilities;
        if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a2->MinorNdisVersion >= 0x1Eu )
        {
          NDKBlock = ndisGetNDKBlock(a1);
          if ( NDKBlock )
          {
            v35 = *((_BYTE *)NDKBlock + 24);
            v45.NDKCapabilities = (_NDIS_NDK_CAPABILITIES *)((char *)NDKBlock + 32);
            v45.NDKEnabled = v35;
          }
          else
          {
            v45.NDKEnabled = 0;
            v45.NDKCapabilities = 0LL;
          }
        }
        if ( v16 >= 4u )
        {
          if ( a1->SriovCurrentCapabilities )
          {
            v45.SriovCapabilities = a1->SriovCurrentCapabilities;
            if ( (unsigned int)ndisIovGetNicSwitchList(a1, &v45.NicSwitchArray) )
              goto LABEL_54;
          }
        }
        v28 = a1->IfBlock;
        v45.MacAddressLength = v28->ifPhysAddress.Length;
        memmove(v45.CurrentMacAddress, v28->ifPhysAddress.Address, v45.MacAddressLength);
        ndisIfQueryBindingMiniportIfIndex(
          a1,
          &v45.BoundIfIndex,
          &v45.BoundIfNetluid,
          &v45.LowestIfIndex,
          &v45.LowestIfNetluid);
        v29 = a1->IfBlock;
        v45.AccessType = a1->TopFilterRestartAttributes.AccessType;
        v45.DirectionType = v29->DirectionType;
        v45.ConnectionType = a1->TopFilterRestartAttributes.ConnectionType;
        v45.IfType = v29->ifType;
        v45.IfConnectorPresent = v29->ifConnectorPresent;
        v45.DataBackFillSize = a1->TopFilterRestartAttributes.DataBackFillSize;
        v45.ContextBackFillSize = a1->TopFilterRestartAttributes.ContextBackFillSize;
        v45.MacOptions = a1->TopFilterRestartAttributes.MacOptions;
        v45.CompartmentId = v29->CompartmentId;
        if ( !(unsigned int)ndisGetPortList(a1, &v45.ActivePorts) )
        {
          BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)a2;
          *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
          BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
          *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
          BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
          KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
          a2->BindingAdapter = a1;
          v7 = 0;
          Blink = ndisInvokeBindAdapter(a2, BugCheckParameter3, &v45);
          if ( Blink == 259 )
          {
            ndisWaitForKernelObject(&BugCheckParameter3[4]);
            Blink = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
          }
          if ( Blink )
            goto LABEL_50;
          if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
          {
            if ( !ndisReferenceOpenByHandle((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
              KeBugCheckEx(
                0x7Cu,
                0x16uLL,
                (ULONG_PTR)a2,
                (ULONG_PTR)BugCheckParameter3,
                (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
            v39 = 1;
            ndisIndicateInitialStateToBinding((struct _NDIS_OPEN_BLOCK *)BugCheckParameter3[0].Header.WaitListHead.Blink);
          }
          if ( MiniportSupportsReceiveThrottle(a1) )
          {
LABEL_49:
            ndisNotifyWmiBindUnbind(a1, a2, 1u);
LABEL_50:
            ExFreePoolWithTag(Destination.Buffer, 0);
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_ZZL(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                v31,
                v33,
                0x1Cu,
                BugCheckParameter4,
                (__int64)&a2->Name);
            if ( (byte_1C00E71C1 & 2) != 0 )
              McTemplateK0jqxzd_EtwWriteTransfer(
                v32,
                v31,
                &a1->InterfaceGuid,
                (__int64)&a1->InterfaceGuid,
                a1->IfIndex,
                a1->NetLuid.Value,
                a2->Name.Buffer,
                Blink);
            goto LABEL_54;
          }
          if ( a2->IsIPv4 == 1 )
          {
            v36 = 0;
          }
          else if ( a2->IsIPv6 == 1 )
          {
            v36 = 1;
          }
          else
          {
            if ( a2->IsNdisTest6 != 1 )
              goto LABEL_49;
            v36 = 2;
          }
          ndisBindUnbindPeriodicReceives(v30, v36);
          goto LABEL_49;
        }
        ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_54:
        RELEASE_PROT_MUTEX(a2);
        if ( v39 )
        {
          ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2);
          BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
        }
        if ( v7 && Blink )
          ndisNotifyBindFailure(a1, a2);
LABEL_57:
        ndisDereferenceProtocol(a2, v5, 8u, v6);
        goto LABEL_58;
      }
      if ( MinorNdisVersion >= 0x14u )
      {
        v16 = 3;
        v17 = 280;
        goto LABEL_15;
      }
      if ( MinorNdisVersion )
      {
        v16 = 2;
        v17 = 256;
        goto LABEL_15;
      }
    }
    v16 = 1;
    v17 = 248;
    goto LABEL_15;
  }
  Blink = -1073741823;
LABEL_58:
  if ( v45.ActivePorts )
    ExFreePoolWithTag(v45.ActivePorts, 0);
  if ( v45.NicSwitchArray )
    ExFreePoolWithTag(v45.NicSwitchArray, 0);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x1Du,
      (struct _GUID *)&WPP_c0a815a5a1e837f23c65c3f22de35f07_Traceguids,
      (char)a1,
      a2);
  return Blink;
}
