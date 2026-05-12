/*
 * XREFs of RaUnitDeviceControlIrp @ 0x1C000B178
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C000B0D0 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitStoragePowerIdle @ 0x1C000218C (RaUnitStoragePowerIdle.c)
 *     RaUnitStoragePowerActive @ 0x1C0002218 (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005C08 (RaUnitScsiMiniportIoctl.c)
 *     RaidCompleteRequestEx @ 0x1C0009010 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000B5D0 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000B614 (RaUnitAcquireRemoveLock.c)
 *     RaIsDeviceDFxPoweredDown @ 0x1C000BD10 (RaIsDeviceDFxPoweredDown.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00151D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaUnitTelemetryIdIoctl @ 0x1C001AEB0 (RaUnitTelemetryIdIoctl.c)
 *     RaUnitStreamsIoctl @ 0x1C001C810 (RaUnitStreamsIoctl.c)
 *     RaUnitHwFirmwareGetInfoIoctl @ 0x1C001C990 (RaUnitHwFirmwareGetInfoIoctl.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     McTemplateK0pddd_EtwWriteTransfer @ 0x1C002A488 (McTemplateK0pddd_EtwWriteTransfer.c)
 *     RaidAdapterStorageDeviceResetIoctl @ 0x1C0030388 (RaidAdapterStorageDeviceResetIoctl.c)
 *     RaidAdapterStorageResetBusIoctl @ 0x1C00303CC (RaidAdapterStorageResetBusIoctl.c)
 *     WPP_SF_qqD @ 0x1C00337B0 (WPP_SF_qqD.c)
 *     WPP_SF_qqDD @ 0x1C0033810 (WPP_SF_qqDD.c)
 *     RaInsertDFxQueue @ 0x1C00345C4 (RaInsertDFxQueue.c)
 *     RaUnitAttributeManagement @ 0x1C0046F44 (RaUnitAttributeManagement.c)
 *     RaUnitGetQOSIoctl @ 0x1C00478F0 (RaUnitGetQOSIoctl.c)
 *     RaUnitHwFirmwareActivateIoctl @ 0x1C0047A00 (RaUnitHwFirmwareActivateIoctl.c)
 *     RaUnitHwFirmwareDownloadIoctl @ 0x1C0047A74 (RaUnitHwFirmwareDownloadIoctl.c)
 *     RaUnitPowerCapIoctl @ 0x1C0047AE8 (RaUnitPowerCapIoctl.c)
 *     RaUnitProtocolCommandIoctl @ 0x1C0047B90 (RaUnitProtocolCommandIoctl.c)
 *     RaUnitSetQOSIoctl @ 0x1C0047DF4 (RaUnitSetQOSIoctl.c)
 *     RaUnitSetTemperatureThresholdIoctl @ 0x1C0048340 (RaUnitSetTemperatureThresholdIoctl.c)
 *     RaUnitSmartDataIoctl @ 0x1C00485F8 (RaUnitSmartDataIoctl.c)
 *     RaUnitStorageSetPropertyIoctl @ 0x1C0049B68 (RaUnitStorageSetPropertyIoctl.c)
 *     RaidUnitSetLedState @ 0x1C004BEAC (RaidUnitSetLedState.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C0072480 (RaUnitStorageQueryPropertyIoctl.c)
 *     RaUnitScsiGetAddressIoctl @ 0x1C0073CBC (RaUnitScsiGetAddressIoctl.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaUnitRegisterForIdleDetection @ 0x1C0075884 (RaUnitRegisterForIdleDetection.c)
 *     RaUnitScsiPassThroughIoctl @ 0x1C007B234 (RaUnitScsiPassThroughIoctl.c)
 *     RaUnitStorageBreakReservationIoctl @ 0x1C007B380 (RaUnitStorageBreakReservationIoctl.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x1C007B44C (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageDumpNotification @ 0x1C007B590 (RaUnitStorageDumpNotification.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C007B60C (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaUnitStorageGetIdlePowerUpReason @ 0x1C007B7B4 (RaUnitStorageGetIdlePowerUpReason.c)
 */

__int64 __fastcall RaUnitDeviceControlIrp(_BYTE *Context, PIRP Irp, __int64 a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int LowPart; // r14d
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int QOSIoctl; // eax
  unsigned int inserted; // ebx
  unsigned int v13; // r8d
  __int64 v14; // r8
  _IO_STACK_LOCATION *v15; // rax
  int v16; // eax
  char v17; // r8
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 2955532 )
  {
    if ( Irp->RequestorMode )
    {
      v18 = -1073741808;
    }
    else if ( CurrentStackLocation->Parameters.Read.Length )
    {
      LOBYTE(Irp->AssociatedIrp.MasterIrp->Type) = (Context[448] & 4) == 0;
      v18 = 0;
      Irp->IoStatus.Information = 1LL;
    }
    else
    {
      Irp->IoStatus.Information = 0LL;
      v18 = -1073741789;
    }
    return RaidCompleteRequestEx(Irp, 0, v18);
  }
  if ( StorEtwLoggingEnabled )
  {
    IoGetActivityIdIrp(Irp, &v20);
    v7 = LowPart - 315412;
    if ( (unsigned int)v7 <= 0x34 && (v8 = 0x11000011000001LL, _bittest64(&v8, v7)) || LowPart == 315396 )
    {
      if ( (byte_1C0069843 & 1) != 0 )
        McTemplateK0pddd_EtwWriteTransfer(
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          (unsigned int)&EventPassThrough,
          (unsigned int)&v20,
          (_DWORD)Irp,
          Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
          Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
          LowPart);
    }
    else if ( (byte_1C0069842 & 4) != 0 )
    {
      McTemplateK0pddd_EtwWriteTransfer(
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        (unsigned int)&EventIOCTL,
        (unsigned int)&v20,
        (_DWORD)Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
    }
  }
  LOBYTE(a3) = 1;
  v9 = RaUnitAcquireRemoveLock(Context, Irp, a3);
  if ( v9 < 0 )
  {
    Irp->IoStatus.Information = 0LL;
    v18 = v9;
    return RaidCompleteRequestEx(Irp, 0, v18);
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      27LL,
      &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
      Context,
      Irp,
      LowPart);
  }
  if ( LowPart > 0x2D1CC8 )
  {
    if ( LowPart <= 0x2D5644 )
    {
      switch ( LowPart )
      {
        case 0x2D5644u:
          QOSIoctl = RaUnitStorageDumpNotification(Context, Irp);
          goto LABEL_15;
        case 0x2D1CCCu:
          QOSIoctl = RaidUnitSetLedState(Context, Irp);
          goto LABEL_15;
        case 0x2D280Cu:
          QOSIoctl = RaUnitTelemetryIdIoctl(Context, Irp);
          goto LABEL_15;
        case 0x2D2810u:
          QOSIoctl = RaUnitGetQOSIoctl(Context, Irp);
          goto LABEL_15;
        case 0x2D2828u:
        case 0x2D282Cu:
        case 0x2D2830u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitStreamsIoctl(Context, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D5000u:
          QOSIoctl = RaidAdapterStorageResetBusIoctl(*((_QWORD *)Context + 3), Irp);
          goto LABEL_15;
        case 0x2D5014u:
          QOSIoctl = RaUnitStorageBreakReservationIoctl(Context, Irp);
          goto LABEL_15;
        case 0x2D5020u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaidAdapterStorageDeviceResetIoctl(*((_QWORD *)Context + 3), Irp);
            goto LABEL_15;
          }
          break;
        default:
          goto LABEL_24;
      }
      goto LABEL_151;
    }
    switch ( LowPart )
    {
      case 0x2D9404u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitStorageDataSetManagementIoctl(Context, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
      case 0x2D940Cu:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitStorageSetPropertyIoctl(Context, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
      case 0x2DD200u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitSetTemperatureThresholdIoctl(Context, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
      case 0x2DD3C0u:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitProtocolCommandIoctl(Context, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
    }
    if ( LowPart != 3004036 )
    {
      switch ( LowPart )
      {
        case 0x2DDC04u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareDownloadIoctl(Context, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2DDC08u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareActivateIoctl(Context, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2DDC9Cu:
          QOSIoctl = RaUnitAttributeManagement(Context, Irp);
          goto LABEL_15;
        case 0x2DE814u:
          QOSIoctl = RaUnitSetQOSIoctl(Context, Irp);
          goto LABEL_15;
        default:
          goto LABEL_24;
      }
      goto LABEL_151;
    }
LABEL_138:
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      v19 = *((_QWORD *)Context + 3);
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      QOSIoctl = IofCallDriver(*(PDEVICE_OBJECT *)(v19 + 8), Irp);
      goto LABEL_15;
    }
    goto LABEL_151;
  }
  if ( LowPart == 2956488 )
  {
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitSmartDataIoctl(Context, Irp);
      goto LABEL_15;
    }
    goto LABEL_151;
  }
  if ( LowPart > 0x2D1400 )
  {
    if ( LowPart == 2954827 )
    {
      QOSIoctl = RaUnitStorageGetDumpInfoIoctl(Context, Irp);
      goto LABEL_15;
    }
    if ( LowPart != 2954880 )
    {
      switch ( LowPart )
      {
        case 0x2D1C00u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitHwFirmwareGetInfoIoctl(Context, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D1C80u:
          v15 = Irp->Tail.Overlay.CurrentStackLocation;
          Irp->IoStatus.Information = 0LL;
          if ( v15->Parameters.Create.Options < 0x10 )
            v16 = -1073741811;
          else
            v16 = RaUnitRegisterForIdleDetection(Context);
          v13 = v16;
          goto LABEL_25;
        case 0x2D1C84u:
          QOSIoctl = RaUnitStorageGetIdlePowerUpReason(Context, Irp);
          goto LABEL_15;
        case 0x2D1C88u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitStoragePowerActive((__int64)Context, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D1C8Cu:
          QOSIoctl = RaUnitStoragePowerIdle((__int64)Context, Irp);
          goto LABEL_15;
        case 0x2D1C94u:
          if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
          {
            QOSIoctl = RaUnitPowerCapIoctl(Context, Irp);
            goto LABEL_15;
          }
          break;
        case 0x2D1CA0u:
          QOSIoctl = RaUnitStorageDiagnosticIoctl(Context, Irp);
          goto LABEL_15;
        default:
          goto LABEL_24;
      }
      goto LABEL_151;
    }
    goto LABEL_138;
  }
  if ( LowPart != 2954240 )
  {
    if ( LowPart > 0x4D014 )
    {
      switch ( LowPart )
      {
        case 0x4D02Cu:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_151;
          }
          v17 = 0;
          break;
        case 0x4D030u:
          if ( (unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
            && (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) == 0 )
          {
            goto LABEL_151;
          }
          v17 = 1;
          break;
        case 0x4D044u:
        case 0x4D048u:
          goto LABEL_96;
        default:
          goto LABEL_24;
      }
      QOSIoctl = RaUnitAtaPassThroughIoctl((__int64)Context, Irp, v17);
      goto LABEL_15;
    }
    switch ( LowPart )
    {
      case 0x4D014u:
        goto LABEL_96;
      case 0x41018u:
        QOSIoctl = RaUnitScsiGetAddressIoctl(Context, Irp);
        goto LABEL_15;
      case 0x41020u:
        QOSIoctl = RaUnitScsiGetDumpPointersIoctl(Context, Irp);
        goto LABEL_15;
      case 0x41024u:
        QOSIoctl = RaUnitScsiFreeDumpPointersIoctl(Context, Irp);
        goto LABEL_15;
      case 0x4D004u:
LABEL_96:
        if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
          || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
        {
          QOSIoctl = RaUnitScsiPassThroughIoctl(Context, Irp);
          goto LABEL_15;
        }
        goto LABEL_151;
    }
    if ( LowPart != 315400 )
    {
LABEL_24:
      v13 = -1073741808;
LABEL_25:
      QOSIoctl = RaidCompleteRequestEx(Irp, 0, v13);
      goto LABEL_15;
    }
    if ( !(unsigned __int8)RaIsDeviceDFxPoweredDown(*((_QWORD *)Context + 1))
      || (Irp->Tail.Overlay.CurrentStackLocation->Control & 1) != 0 )
    {
      QOSIoctl = RaUnitScsiMiniportIoctl((__int64)Context, Irp);
      goto LABEL_15;
    }
LABEL_151:
    inserted = RaInsertDFxQueue(v14, Irp);
    if ( !inserted )
      inserted = 259;
    goto LABEL_16;
  }
  QOSIoctl = RaUnitStorageQueryPropertyIoctl((int)Context, Irp);
LABEL_15:
  inserted = QOSIoctl;
LABEL_16:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqDD(
      WPP_GLOBAL_Control->AttachedDevice,
      28LL,
      &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids,
      Context,
      Irp,
      LowPart,
      inserted);
  }
  RaUnitReleaseRemoveLock(Context);
  return inserted;
}
