/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C001870C
 * Callers:
 *     ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149E8 (-ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisOidPreLinkState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00185A0 (-ndisOidPreLinkState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C001F450 (-ndisPreOffloadAdminSettings@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0027EF4 (-ndisReadOffloadRegistry@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002DAD4 (-ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00385D0 (-ndisOidPreOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003B690 (-ndisPreSetPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003F6B0 (-ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@.c)
 *     ?ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0079F40 (-ndisOidPreIovBarResources@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A0B0 (-ndisOidPreIovCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007A710 (-ndisOidPreIovDeleteVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B1E0 (-ndisOidPreIovFreeVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B350 (-ndisOidPreIovGetVFVendorDeviceId@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovOverlyingAdapterInfo@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B830 (-ndisOidPreIovOverlyingAdapterInfo@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovPfLuid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007B920 (-ndisOidPreIovPfLuid@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovProbedBars@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BA50 (-ndisOidPreIovProbedBars@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BB80 (-ndisOidPreIovReadVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BCF0 (-ndisOidPreIovReadVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BE60 (-ndisOidPreIovResetVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007BFA0 (-ndisOidPreIovSetVFPowerState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C0E0 (-ndisOidPreIovVFParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovVfSerialNumber@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C600 (-ndisOidPreIovVfSerialNumber@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C730 (-ndisOidPreIovWriteVFConfigBlock@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C007C880 (-ndisOidPreIovWriteVFConfigSpace@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z @ 0x1C00922C4 (-ndisOidPrePMCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@E@Z.c)
 *     ?ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0093E6C (-ndisPreQueryPMParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreGetPciDeviceCustomProperties@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CE20 (-ndisOidPreGetPciDeviceCustomProperties@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreHDSplitCurrentConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CF80 (-ndisOidPreHDSplitCurrentConfig@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreMaxLinkSpeed@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009D3C0 (-ndisOidPreMaxLinkSpeed@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DD80 (-ndisOidPreQosCapabilities@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DEC0 (-ndisOidPreQosGetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E0A0 (-ndisOidPreQosSetParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009E400 (-ndisOidPreSetHDSplitParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreTcpConnectionOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009EA00 (-ndisOidPreTcpConnectionOffload@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreTcpConnectionOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009EB40 (-ndisOidPreTcpConnectionOffloadHwCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009EC70 (-ndisOidPreTcpConnectionOffloadParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009EFA8 (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C00AFEA0 (ndisMInvokeDirectOidRequest.c)
 *     ?ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00FC368 (-ndisFInvokeNetPnPEvent@@_Y2PAGE@@AHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C010824C (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 *     ?ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C011847C (-ndisMRawInvokeOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012BE18 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00ABD54 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qDD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        ...)
{
  unsigned __int64 v9; // rdi
  unsigned int v10; // esi
  int v12; // eax
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va, a7);
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v9 + 41) >= a2 )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 4LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v14, &a6);
}
