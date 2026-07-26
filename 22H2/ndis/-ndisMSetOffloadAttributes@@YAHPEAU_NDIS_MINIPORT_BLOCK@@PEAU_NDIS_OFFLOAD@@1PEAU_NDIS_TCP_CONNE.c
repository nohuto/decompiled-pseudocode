/*
 * XREFs of ?ndisMSetOffloadAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD@@1PEAU_NDIS_TCP_CONNECTION_OFFLOAD@@2@Z @ 0x1C0024A74
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00230C0 (NdisMSetMiniportAttributes.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x1C0130258 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisValidateOffloadCapability@@YAEPEAU_NDIS_OFFLOAD@@@Z @ 0x1C0024A54 (-ndisValidateOffloadCapability@@YAEPEAU_NDIS_OFFLOAD@@@Z.c)
 *     ?ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0024E7C (-ndisMAllocateMiniportOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z @ 0x1C008FAD8 (-ndisValidateConnectionOffload@@YAEPEAU_NDIS_TCP_CONNECTION_OFFLOAD@@@Z.c)
 */

__int64 __fastcall ndisMSetOffloadAttributes(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OFFLOAD *a2,
        struct _NDIS_OFFLOAD *Src,
        struct _NDIS_TCP_CONNECTION_OFFLOAD *a4,
        struct _NDIS_TCP_CONNECTION_OFFLOAD *Srca)
{
  size_t v9; // rbx
  unsigned int Flags; // r14d
  unsigned int v11; // r13d
  size_t v12; // r8
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  unsigned int v14; // ebx
  _NDIS_OFFLOAD *p_MiniportInitialConfig; // rcx
  __int128 v16; // xmm1
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v20; // xmm0
  __int128 v21; // xmm1
  __int64 v22; // rax
  _NDIS_OFFLOAD *p_MiniportHardwareCapabilities; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  _NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rax
  _NDIS_MINIPORT_OFFLOAD *v37; // rax
  _NDIS_OFFLOAD *p_MiniportCurrentConfig; // rcx
  _NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> v39; // xmm1
  _NDIS_MINIPORT_OFFLOAD *v40; // rax
  _NDIS_MINIPORT_OFFLOAD *v41; // rax
  size_t v43; // r14
  size_t Size; // r8
  _NDIS_MINIPORT_OFFLOAD *v45; // rax
  _NDIS_MINIPORT_OFFLOAD *v46; // rax
  char v47[8]; // [rsp+30h] [rbp-D0h]
  __int128 v48; // [rsp+48h] [rbp-B8h]
  __int128 v49; // [rsp+58h] [rbp-A8h]
  struct _NDIS_TCP_CONNECTION_OFFLOAD v50; // [rsp+68h] [rbp-98h] BYREF
  struct _NDIS_TCP_CONNECTION_OFFLOAD v51; // [rsp+80h] [rbp-80h] BYREF
  struct _NDIS_OFFLOAD v52; // [rsp+A0h] [rbp-60h] BYREF
  struct _NDIS_OFFLOAD v53; // [rsp+180h] [rbp+80h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_cf208d18948535781faf8aaae63f05ed_Traceguids,
      (char)a1,
      a2);
  v9 = 216LL;
  memset(&v52, 0, sizeof(v52));
  memset(&v53, 0, sizeof(v53));
  Flags = 0;
  v48 = 0LL;
  memset(&v50, 0, sizeof(v50));
  v49 = 0LL;
  memset(&v51, 0, sizeof(v51));
  if ( a2 && !Src )
    goto LABEL_32;
  if ( a4 )
  {
    if ( !Srca )
      goto LABEL_32;
    v43 = 20LL;
    Size = a4->Header.Size;
    if ( a4->Header.Size >= 0x14u )
      Size = 20LL;
    memmove(&v50, a4, Size);
    if ( Srca->Header.Size < 0x14u )
      v43 = Srca->Header.Size;
    memmove(&v51, Srca, v43);
    if ( !ndisValidateConnectionOffload(&v50) || !ndisValidateConnectionOffload(&v51) )
      goto LABEL_32;
    Flags = v50.Flags;
    v11 = v51.Flags;
    v48 = *(_OWORD *)&v50.Header.Type;
    v49 = *(_OWORD *)&v51.Header.Type;
  }
  else
  {
    v11 = 0;
  }
  if ( a2 )
  {
    v12 = a2->Header.Size;
    if ( a2->Header.Size >= 0xD8u )
      v12 = 216LL;
    memmove(&v52, a2, v12);
    if ( Src->Header.Size < 0xD8u )
      v9 = Src->Header.Size;
    memmove(&v53, Src, v9);
    if ( !ndisValidateOffloadCapability(&v52) || !ndisValidateOffloadCapability(&v53) )
      goto LABEL_32;
    if ( (a1->DeviceFlags & 2) != 0 )
    {
      v52.Flags &= 0xFFFFFFF9;
      v53.Flags &= 0xFFFFFFF9;
    }
    if ( (a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion)
      && a2->Header.Revision >= 2u
      && a2->IPsecV2.Encapsulation
      && !a1->DriverHandle->MiniportDriverCharacteristics.DirectOidRequestHandler )
    {
LABEL_32:
      v14 = -1073741637;
      goto LABEL_29;
    }
  }
  Offload = a1->Offload;
  if ( Offload || (v14 = ndisMAllocateMiniportOffload(a1)) == 0 && (Offload = a1->Offload) != 0LL )
  {
    if ( a2 )
    {
      Offload->SupportsOffload = 1;
      p_MiniportInitialConfig = &a1->Offload->MiniportInitialConfig;
      v16 = *(_OWORD *)((char *)&v52.Checksum.IPv4Receive + 4);
      *(_OWORD *)&p_MiniportInitialConfig->Header.Type = *(_OWORD *)&v52.Header.Type;
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 4) = v16;
      v17 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v52.LsoV1.IPv4 + 12);
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v52.Checksum.IPv6Receive
                                                                                          + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportInitialConfig->LsoV1.IPv4 + 12) = v17;
      v18 = *(_OWORD *)&v52.LsoV2.IPv4.Encapsulation;
      *(_OWORD *)&p_MiniportInitialConfig->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v52.IPsecV1.Supported.IPv4Options;
      *(_OWORD *)&p_MiniportInitialConfig->LsoV2.IPv4.Encapsulation = v18;
      *(_OWORD *)&p_MiniportInitialConfig->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v52.LsoV2.IPv6.MaxOffLoadSize;
      p_MiniportInitialConfig = (_NDIS_OFFLOAD *)((char *)p_MiniportInitialConfig + 128);
      p_MiniportInitialConfig[-1].UdpSegmentation.IPv6 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)&v52.IPsecV2.Encapsulation;
      v19 = *(_OWORD *)&v52.Rsc.IPv4.Enabled;
      *(_OWORD *)&p_MiniportInitialConfig->Header.Type = *(_OWORD *)&v52.IPsecV2.UdpEsp;
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv4Receive + 4) = v19;
      v20 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v52.EncapsulationTypes;
      *(_OWORD *)((char *)&p_MiniportInitialConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)&v52.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
      v21 = *(_OWORD *)&v52.UdpSegmentation.IPv4.MaxOffLoadSize;
      v22 = *((_QWORD *)&v52.UdpSegmentation.IPv6 + 1);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportInitialConfig->LsoV1.IPv4 + 12) = v20;
      *(_OWORD *)&p_MiniportInitialConfig->IPsecV1.Supported.IPv4Options = v21;
      *(_QWORD *)&p_MiniportInitialConfig->LsoV2.IPv4.Encapsulation = v22;
      p_MiniportHardwareCapabilities = &a1->Offload->MiniportHardwareCapabilities;
      v24 = *(_OWORD *)((char *)&v53.Checksum.IPv4Receive + 4);
      *(_OWORD *)&p_MiniportHardwareCapabilities->Header.Type = *(_OWORD *)&v53.Header.Type;
      v25 = *(_OWORD *)((char *)&v53.Checksum.IPv6Receive + 4);
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv4Receive + 4) = v24;
      v26 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v53.LsoV1.IPv4 + 12);
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv6Receive + 4) = v25;
      v27 = *(_OWORD *)&v53.IPsecV1.Supported.IPv4Options;
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportHardwareCapabilities->LsoV1.IPv4 + 12) = v26;
      v28 = *(_OWORD *)&v53.LsoV2.IPv4.Encapsulation;
      *(_OWORD *)&p_MiniportHardwareCapabilities->IPsecV1.Supported.IPv4Options = v27;
      v29 = *(_OWORD *)&v53.LsoV2.IPv6.MaxOffLoadSize;
      *(_OWORD *)&p_MiniportHardwareCapabilities->LsoV2.IPv4.Encapsulation = v28;
      v30 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)&v53.IPsecV2.Encapsulation;
      *(_OWORD *)&p_MiniportHardwareCapabilities->LsoV2.IPv6.MaxOffLoadSize = v29;
      p_MiniportHardwareCapabilities = (_NDIS_OFFLOAD *)((char *)p_MiniportHardwareCapabilities + 128);
      v31 = *(_OWORD *)&v53.IPsecV2.UdpEsp;
      p_MiniportHardwareCapabilities[-1].UdpSegmentation.IPv6 = v30;
      v32 = *(_OWORD *)&v53.Rsc.IPv4.Enabled;
      *(_OWORD *)&p_MiniportHardwareCapabilities->Header.Type = v31;
      v33 = *(_OWORD *)&v53.EncapsulatedPacketTaskOffloadVxlan.MaxHeaderSizeSupported;
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv4Receive + 4) = v32;
      v34 = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v53.EncapsulationTypes;
      *(_OWORD *)((char *)&p_MiniportHardwareCapabilities->Checksum.IPv6Receive + 4) = v33;
      v35 = *(_OWORD *)&v53.UdpSegmentation.IPv4.MaxOffLoadSize;
      v36 = *((_QWORD *)&v53.UdpSegmentation.IPv6 + 1);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportHardwareCapabilities->LsoV1.IPv4 + 12) = v34;
      *(_OWORD *)&p_MiniportHardwareCapabilities->IPsecV1.Supported.IPv4Options = v35;
      *(_QWORD *)&p_MiniportHardwareCapabilities->LsoV2.IPv4.Encapsulation = v36;
      v37 = a1->Offload;
      p_MiniportCurrentConfig = &v37->MiniportCurrentConfig;
      v37 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v37 + 440);
      *(_OWORD *)&p_MiniportCurrentConfig->Header.Type = *(_OWORD *)&v37->SupportsOffload;
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v37->MiniportCurrentConfig.Checksum.IPv4Transmit
                                                                                          + 4);
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v37->MiniportCurrentConfig.Checksum.IPv6Transmit
                                                                                          + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportCurrentConfig->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v37->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
      *(_OWORD *)&p_MiniportCurrentConfig->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v37->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
      *(_OWORD *)&p_MiniportCurrentConfig->LsoV2.IPv4.Encapsulation = *(_OWORD *)&v37->MiniportCurrentConfig.IPsecV1.IPv4AH;
      *(_OWORD *)&p_MiniportCurrentConfig->LsoV2.IPv6.MaxOffLoadSize = *(_OWORD *)&v37->MiniportCurrentConfig.LsoV2.IPv4.MinSegmentCount;
      p_MiniportCurrentConfig = (_NDIS_OFFLOAD *)((char *)p_MiniportCurrentConfig + 128);
      v39 = *(_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6> *)((char *)&v37->MiniportCurrentConfig.LsoV2.IPv6 + 12);
      v37 = (_NDIS_MINIPORT_OFFLOAD *)((char *)v37 + 128);
      p_MiniportCurrentConfig[-1].UdpSegmentation.IPv6 = v39;
      *(_OWORD *)&p_MiniportCurrentConfig->Header.Type = *(_OWORD *)&v37->SupportsOffload;
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv4Receive + 4) = *(_OWORD *)((char *)&v37->MiniportCurrentConfig.Checksum.IPv4Transmit
                                                                                          + 4);
      *(_OWORD *)((char *)&p_MiniportCurrentConfig->Checksum.IPv6Receive + 4) = *(_OWORD *)((char *)&v37->MiniportCurrentConfig.Checksum.IPv6Transmit
                                                                                          + 4);
      *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_MiniportCurrentConfig->LsoV1.IPv4 + 12) = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)&v37->MiniportCurrentConfig.LsoV1.IPv4.MaxOffLoadSize;
      *(_OWORD *)&p_MiniportCurrentConfig->IPsecV1.Supported.IPv4Options = *(_OWORD *)&v37->MiniportCurrentConfig.IPsecV1.Supported.AhEspCombined;
      *(_QWORD *)&p_MiniportCurrentConfig->LsoV2.IPv4.Encapsulation = *(_QWORD *)&v37->MiniportCurrentConfig.IPsecV1.IPv4AH;
      v40 = a1->Offload;
      v40->MiniportSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
      v40->MiniportSetEncapsulation.IPv4.Enabled = 2;
      v40->MiniportSetEncapsulation.IPv6.Enabled = 2;
      v41 = a1->Offload;
      v41->TopSetEncapsulation.Header = (_NDIS_OBJECT_HEADER)1835432;
      v41->TopSetEncapsulation.IPv4.Enabled = 2;
      v41->TopSetEncapsulation.IPv6.Enabled = 2;
    }
    if ( a4 )
    {
      a1->Offload->SupportsTcpConnectionOffload = 1;
      v45 = a1->Offload;
      *(_OWORD *)&v45->MiniportTcpConnectionOffloadCurrentConfig.Header.Type = v48;
      v45->MiniportTcpConnectionOffloadCurrentConfig.Flags = Flags;
      v46 = a1->Offload;
      *(_OWORD *)&v46->MiniportHwTcpConnectionOffloadCapabilities.Header.Type = v49;
      v46->MiniportHwTcpConnectionOffloadCapabilities.Flags = v11;
    }
    v14 = 0;
  }
LABEL_29:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v47 = v14;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_cf208d18948535781faf8aaae63f05ed_Traceguids,
      (char)a1,
      *(_QWORD *)v47);
  }
  return v14;
}
