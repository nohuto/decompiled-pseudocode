/*
 * XREFs of RaidAdapterDeviceControlIrp @ 0x1C000B738
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C000B140 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaidAdapterScsiMiniportIoctlWithAddress @ 0x1C00067E8 (RaidAdapterScsiMiniportIoctlWithAddress.c)
 *     RaidCompleteRequestEx @ 0x1C0009080 (RaidCompleteRequestEx.c)
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA24 (RaidAcquireAdapterRemoveLock.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C000BD80 (RaIsDeviceDFxPoweredDown.c)
 *     RaForwardIrp @ 0x1C00159CC (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C001D620 (__security_check_cookie.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C002A4A8 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaAdapterProtocolCommandIoctl @ 0x1C002AD8C (RaAdapterProtocolCommandIoctl.c)
 *     RaAdapterSetTemperatureThresholdIoctl @ 0x1C002AE1C (RaAdapterSetTemperatureThresholdIoctl.c)
 *     RaidAdapterHwFirmwareActivateIoctl @ 0x1C002CEC8 (RaidAdapterHwFirmwareActivateIoctl.c)
 *     RaidAdapterHwFirmwareDownloadIoctl @ 0x1C002CFC0 (RaidAdapterHwFirmwareDownloadIoctl.c)
 *     RaidAdapterHwFirmwareGetInfoIoctl @ 0x1C002D178 (RaidAdapterHwFirmwareGetInfoIoctl.c)
 *     RaidAdapterMiniportProcessServiceRequest @ 0x1C002D4CC (RaidAdapterMiniportProcessServiceRequest.c)
 *     RaidAdapterPowerCapIoctl @ 0x1C002D67C (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterQueryBootLunsIoctl @ 0x1C002D970 (RaidAdapterQueryBootLunsIoctl.c)
 *     RaidAdapterRpmbRequest @ 0x1C002E6BC (RaidAdapterRpmbRequest.c)
 *     RaidAdapterScsiGetAddressIoctl @ 0x1C002E9A4 (RaidAdapterScsiGetAddressIoctl.c)
 *     RaidAdapterScsiGetCapabilitiesIoctl @ 0x1C002E9FC (RaidAdapterScsiGetCapabilitiesIoctl.c)
 *     RaidAdapterScsiGetInquiryDataIoctl @ 0x1C002EA78 (RaidAdapterScsiGetInquiryDataIoctl.c)
 *     RaidAdapterSetBootLunIoctl @ 0x1C002F7FC (RaidAdapterSetBootLunIoctl.c)
 *     RaidAdapterSetLedState @ 0x1C002F8D8 (RaidAdapterSetLedState.c)
 *     RaidAdapterStorageBreakReservationIoctl @ 0x1C00302F4 (RaidAdapterStorageBreakReservationIoctl.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C00303A8 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C00303EC (RaidAdapterStorageResetBusIoctl.c)
 *     RaidAdapterStorageSetPropertyIoctl @ 0x1C0030430 (RaidAdapterStorageSetPropertyIoctl.c)
 *     WPP_SF_qqDD @ 0x1C0033830 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C00345E4 (RaInsertDFxQueue.c)
 *     RaidAdapterStorageQueryPropertyIoctl @ 0x1C0072880 (RaidAdapterStorageQueryPropertyIoctl.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterPassThrough @ 0x1C0078B5C (RaidAdapterPassThrough.c)
 */

__int64 __fastcall RaidAdapterDeviceControlIrp(__int64 a1, __int64 a2)
{
  signed int v4; // ebx
  __int64 v5; // r8
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int InquiryDataIoctl; // eax
  unsigned int inserted; // ebx
  struct _DEVICE_OBJECT *v13; // rcx
  unsigned int v14; // r8d
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v15 = 0LL;
  v4 = RaidAcquireAdapterRemoveLock();
  v6 = *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(a2, &v15);
    if ( v6 == 315396 || (v7 = v6 - 315412, (unsigned int)v7 <= 0x34) && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) )
    {
      if ( (byte_1C0069843 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
          (unsigned int)&EventPassThrough,
          (unsigned int)&v15,
          a2,
          **(_BYTE **)(a2 + 184),
          *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
          v6);
    }
    else if ( (byte_1C0069842 & 4) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL),
        (unsigned int)&EventIOCTL,
        (unsigned int)&v15,
        a2,
        **(_BYTE **)(a2 + 184),
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 1LL),
        v6);
    }
  }
  if ( v4 < 0 )
  {
    *(_QWORD *)(a2 + 56) = 0LL;
    return RaidCompleteRequestEx((PIRP)a2, 0, v4);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
      a1,
      a2,
      HIWORD(v6),
      (v6 >> 2) & 0xFFF);
  }
  if ( v6 > 0x2D1C98 )
  {
    if ( v6 > 0x2DD200 )
    {
      switch ( v6 )
      {
        case 0x2DD3C0u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaAdapterProtocolCommandIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x2DD684u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterSetBootLunIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x2DDC04u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterHwFirmwareDownloadIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x2DDC08u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterHwFirmwareActivateIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x32C000u:
        case 0x32C038u:
          InquiryDataIoctl = RaForwardIrp(*(_QWORD *)(a1 + 24), a2);
          goto LABEL_18;
      }
    }
    else
    {
      switch ( v6 )
      {
        case 0x2DD200u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaAdapterSetTemperatureThresholdIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x2D1CA0u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterDiagnosticIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x2D1CCCu:
          InquiryDataIoctl = RaidAdapterSetLedState(a1, a2);
          goto LABEL_18;
        case 0x2D5000u:
          InquiryDataIoctl = RaidAdapterStorageResetBusIoctl(a1, a2);
          goto LABEL_18;
        case 0x2D5014u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
            || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
          {
            InquiryDataIoctl = RaidAdapterStorageBreakReservationIoctl(a1, a2);
            goto LABEL_18;
          }
          goto LABEL_104;
        case 0x2D5020u:
          InquiryDataIoctl = RaidAdapterStorageDeviceResetIoctl(a1, a2);
          goto LABEL_18;
        case 0x2D940Cu:
          InquiryDataIoctl = RaidAdapterStorageSetPropertyIoctl(a1, a2);
          goto LABEL_18;
      }
    }
LABEL_91:
    v14 = -1073741637;
    goto LABEL_28;
  }
  if ( v6 == 2956440 )
  {
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
      || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
    {
      InquiryDataIoctl = RaidAdapterRpmbRequest(a1, a2);
      goto LABEL_18;
    }
    goto LABEL_104;
  }
  if ( v6 <= 0x4D038 )
  {
    switch ( v6 )
    {
      case 0x4D038u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          return RaidAdapterMiniportProcessServiceRequest(a1, a2);
        }
        goto LABEL_104;
      case 0x4100Cu:
        InquiryDataIoctl = RaidAdapterScsiGetInquiryDataIoctl(a1, a2);
        goto LABEL_18;
      case 0x41010u:
        InquiryDataIoctl = RaidAdapterScsiGetCapabilitiesIoctl(a1, a2);
        goto LABEL_18;
      case 0x41018u:
        InquiryDataIoctl = RaidAdapterScsiGetAddressIoctl(a1, a2);
        goto LABEL_18;
      case 0x4101Cu:
        v13 = *(struct _DEVICE_OBJECT **)(a1 + 32);
        *(_BYTE *)(a1 + 106) = 1;
        IoInvalidateDeviceRelations(v13, BusRelations);
        v14 = 0;
LABEL_28:
        InquiryDataIoctl = RaidCompleteRequestEx((PIRP)a2, 0, v14);
        goto LABEL_18;
    }
    if ( v6 != 315396 )
    {
      if ( v6 == 315400 )
      {
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterScsiMiniportIoctlWithAddress(a1, (IRP *)a2, 0, 0, 0, 2);
          goto LABEL_18;
        }
LABEL_104:
        inserted = RaInsertDFxQueue(v9, a2);
        if ( !inserted )
          inserted = 259;
        goto LABEL_19;
      }
      if ( v6 != 315412 )
        goto LABEL_91;
      goto LABEL_37;
    }
LABEL_59:
    v5 = 0LL;
    goto LABEL_60;
  }
  if ( v6 == 315460 )
    goto LABEL_59;
  if ( v6 == 315464 )
  {
LABEL_37:
    LOBYTE(v5) = 1;
LABEL_60:
    InquiryDataIoctl = RaidAdapterPassThrough(a1, a2, v5);
    goto LABEL_18;
  }
  if ( v6 != 2954240 )
  {
    switch ( v6 )
    {
      case 0x2D1680u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterQueryBootLunsIoctl(a1, a2);
          goto LABEL_18;
        }
        goto LABEL_104;
      case 0x2D1C00u:
        InquiryDataIoctl = RaidAdapterHwFirmwareGetInfoIoctl(a1, a2);
        goto LABEL_18;
      case 0x2D1C94u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
          || (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) != 0 )
        {
          InquiryDataIoctl = RaidAdapterPowerCapIoctl(a1, a2);
          goto LABEL_18;
        }
        goto LABEL_104;
    }
    goto LABEL_91;
  }
  if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*(_QWORD *)(a1 + 8))
    && (*(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) & 1) == 0 )
  {
    goto LABEL_104;
  }
  InquiryDataIoctl = RaidAdapterStorageQueryPropertyIoctl(a1, a2);
LABEL_18:
  inserted = InquiryDataIoctl;
LABEL_19:
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 280));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids,
      a1,
      a2,
      v6,
      inserted);
  }
  return inserted;
}
