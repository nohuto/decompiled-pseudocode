/*
 * XREFs of UsbhPdoInternalDeviceControl @ 0x1C0015370
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoReturnPortStatus @ 0x1C0015DF0 (UsbhFdoReturnPortStatus.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhFdoGetMsDescriptorPdo @ 0x1C002A894 (UsbhFdoGetMsDescriptorPdo.c)
 *     UsbhFdoReturnDeviceHandle @ 0x1C002A9F0 (UsbhFdoReturnDeviceHandle.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C002AAA8 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoSelectConfigurationPdo @ 0x1C002AC9C (UsbhFdoSelectConfigurationPdo.c)
 *     UsbhFdoSelectInterfacePdo @ 0x1C002AF54 (UsbhFdoSelectInterfacePdo.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1C002B084 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhPdoTrapFatal_Dbg @ 0x1C002D6F8 (UsbhPdoTrapFatal_Dbg.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     UsbhWait @ 0x1C002E204 (UsbhWait.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     UsbhFdoCyclePdoPort @ 0x1C00303A4 (UsbhFdoCyclePdoPort.c)
 *     UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003050C (UsbhFdoHandleFreeDumpDataIoctl.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C0030570 (UsbhFdoHandleGetDumpDataIoctl.c)
 *     UsbhFdoHandleNotifyForwardProgress @ 0x1C0030664 (UsbhFdoHandleNotifyForwardProgress.c)
 *     UsbhFdoRecordFailure @ 0x1C003074C (UsbhFdoRecordFailure.c)
 *     UsbhFdoResetPdoPort @ 0x1C0030944 (UsbhFdoResetPdoPort.c)
 *     UsbhFdoReturnControllerName @ 0x1C0030D44 (UsbhFdoReturnControllerName.c)
 *     UsbhFdoReturnDeviceBusInfo @ 0x1C0030DA8 (UsbhFdoReturnDeviceBusInfo.c)
 *     UsbhFdoReturnDeviceConfigInfo @ 0x1C0030E68 (UsbhFdoReturnDeviceConfigInfo.c)
 *     UsbhFdoReturnHubCount @ 0x1C0031078 (UsbhFdoReturnHubCount.c)
 *     UsbhFdoReturnHubName @ 0x1C0031120 (UsbhFdoReturnHubName.c)
 *     UsbhFdoReturnRootHubPdo @ 0x1C00311C0 (UsbhFdoReturnRootHubPdo.c)
 *     UsbhFdoReturnTopologyAddress @ 0x1C00312B0 (UsbhFdoReturnTopologyAddress.c)
 *     UsbhFdoSubmitPdoIdleNotification @ 0x1C003136C (UsbhFdoSubmitPdoIdleNotification.c)
 *     UsbhSetPdo_AllowIo @ 0x1C003D708 (UsbhSetPdo_AllowIo.c)
 *     UsbhIdleIrp_Event @ 0x1C0057F68 (UsbhIdleIrp_Event.c)
 */

__int64 __fastcall UsbhPdoInternalDeviceControl(_QWORD *BugCheckParameter3, IRP *BugCheckParameter4)
{
  _IO_STACK_LOCATION *v2; // rax
  __int64 v5; // rbx
  unsigned int LowPart; // ebp
  __int64 v7; // rcx
  __int64 result; // rax
  int v9; // r14d
  __int64 v10; // r15
  KSPIN_LOCK *v11; // r12
  KIRQL v12; // al
  KIRQL v13; // r13
  __int64 Pool2; // rax
  __int64 v15; // r15
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // r9
  struct _DEVICE_OBJECT *v19; // r9
  PDEVICE_OBJECT *DeviceExtension; // r8
  __int64 v21; // rdx
  _IO_SECURITY_CONTEXT *SecurityContext; // rcx
  NTSTATUS v23; // eax
  __int64 v24; // rbp
  unsigned int v25; // ebx
  _QWORD *v26; // r14
  KIRQL v27; // r12
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  int v30; // eax
  _QWORD *v31; // rdx
  unsigned int v32; // ebp
  unsigned int v33; // ebp
  unsigned int v34; // ebp
  unsigned int v35; // ebp
  unsigned int Status; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // [rsp+60h] [rbp+8h]

  CurrentStackLocation = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  if ( !BugCheckParameter3 )
LABEL_135:
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = BugCheckParameter3[8];
  if ( !v5 )
LABEL_143:
    UsbhTrapFatal_Dbg(BugCheckParameter3, 0LL);
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v2 = BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
  LowPart = v2->Parameters.Read.ByteOffset.LowPart;
  switch ( LowPart )
  {
    case 0x220FB3u:
      UsbhWait(*(_QWORD *)(v5 + 1184), 100LL);
      if ( *(_BYTE *)(v5 + 2741) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              3,
              10,
              (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        }
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903939, 0LL, *(_QWORD *)(v5 + 1184));
        UsbhSetPdo_AllowIo(v7, BugCheckParameter3);
        BugCheckParameter4->IoStatus.Status = 0;
        IofCompleteRequest(BugCheckParameter4, 0);
        *(_QWORD *)(v5 + 2784) = 0LL;
        *(_BYTE *)(v5 + 2741) = 0;
        return 0LL;
      }
      if ( *(_DWORD *)(v5 + 784) == 2 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            11,
            (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
        Log(*(_QWORD *)(v5 + 1184), 256, 1397903953, 0LL, *(_QWORD *)(v5 + 1184));
        *(_QWORD *)(v5 + 2784) = BugCheckParameter4;
LABEL_16:
        BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        return 259LL;
      }
LABEL_60:
      v9 = 1232023609;
      break;
    case 0x220FABu:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          0xC0000000,
          3,
          12,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 1184));
      Log(*(_QWORD *)(v5 + 1184), 256, 1397903944, 0LL, *(_QWORD *)(v5 + 1184));
      *(_QWORD *)(v5 + 2792) = BugCheckParameter4;
      goto LABEL_16;
    case 0x220463u:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          0xC0000000,
          1,
          13,
          (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
          *(_QWORD *)(v5 + 840));
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      *(_DWORD *)(v5 + 1432) |= 0x80000u;
      return 0LL;
    default:
      if ( LowPart > 0x220420 )
      {
        if ( LowPart > 0x22044F )
        {
          switch ( LowPart )
          {
            case 0x491404u:
              v9 = 1232023857;
              goto LABEL_61;
            case 0x491408u:
              v9 = 1232023858;
              goto LABEL_61;
            case 0x49140Fu:
              v9 = 1232023859;
              goto LABEL_61;
          }
        }
        else
        {
          switch ( LowPart )
          {
            case 0x22044Fu:
              v9 = 1232023856;
              goto LABEL_61;
            case 0x220424u:
              v9 = 1232023602;
              goto LABEL_61;
            case 0x22042Cu:
              v9 = 1232023652;
              goto LABEL_61;
            case 0x220433u:
              v9 = 1232023607;
              goto LABEL_61;
            case 0x220437u:
              v9 = 1232023608;
              goto LABEL_61;
            case 0x22043Bu:
              v9 = 1232023606;
              goto LABEL_61;
          }
        }
LABEL_56:
        v9 = v2->Parameters.Read.ByteOffset.LowPart;
        break;
      }
      if ( LowPart == 2229280 )
      {
        v9 = 1232023603;
      }
      else
      {
        switch ( LowPart )
        {
          case 0x220003u:
            v9 = 1232023604;
            break;
          case 0x220007u:
            goto LABEL_60;
          case 0x22000Fu:
            v9 = 1232023601;
            break;
          case 0x220013u:
            v9 = 1232023605;
            break;
          case 0x220017u:
            v9 = 1232023649;
            break;
          case 0x22001Bu:
            v9 = 1232023600;
            break;
          case 0x22001Fu:
            v9 = 1232023650;
            break;
          case 0x220020u:
            v9 = 1232023651;
            break;
          case 0x220027u:
            v9 = 1232023653;
            break;
          case 0x22002Bu:
            v9 = 1232023654;
            break;
          default:
            goto LABEL_56;
        }
      }
      break;
  }
LABEL_61:
  v10 = BugCheckParameter3[8];
  if ( !v10 )
    goto LABEL_143;
  if ( *(_DWORD *)v10 != 1329877064 )
    UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
  v11 = (KSPIN_LOCK *)(v10 + 1216);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 1216));
  v13 = v12;
  if ( *(_DWORD *)(v10 + 784) == 2 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 1216), v12);
    if ( LowPart == 2228227 )
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) = -2147482880;
    BugCheckParameter4->IoStatus.Status = -1073741810;
    IofCompleteRequest(BugCheckParameter4, 0);
    return 3221225486LL;
  }
  Pool2 = ExAllocatePool2(64LL, 40LL, 1112885333LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 24) = BugCheckParameter4;
    v15 = v10 + 1224;
    *(_DWORD *)(Pool2 + 32) = v9;
    *(_DWORD *)Pool2 = 1330201673;
    v16 = (_QWORD *)(Pool2 + 8);
    v17 = *(_QWORD **)(v15 + 8);
    if ( *v17 != v15 )
      goto LABEL_105;
    *v16 = v15;
    v16[1] = v17;
    *v17 = v16;
    *(_QWORD *)(v15 + 8) = v16;
  }
  else
  {
    ++*(_DWORD *)(v10 + 1264);
  }
  KeReleaseSpinLock(v11, v13);
  if ( LowPart > 0x220420 )
  {
    if ( LowPart > 0x220443 )
    {
      v32 = LowPart - 2229327;
      if ( v32 )
      {
        v33 = v32 - 2916;
        if ( v33 )
        {
          v34 = v33 - 2557009;
          if ( v34 )
          {
            v35 = v34 - 4;
            if ( v35 )
            {
              if ( v35 == 7 )
              {
                return UsbhFdoHandleNotifyForwardProgress(
                         *(_QWORD *)(v5 + 1184),
                         BugCheckParameter3,
                         BugCheckParameter4);
              }
              else
              {
LABEL_129:
                Status = BugCheckParameter4->IoStatus.Status;
                BugCheckParameter4->IoStatus.Status = Status;
                IofCompleteRequest(BugCheckParameter4, 0);
                UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
                return Status;
              }
            }
            else
            {
              return UsbhFdoHandleFreeDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
            }
          }
          else
          {
            return UsbhFdoHandleGetDumpDataIoctl(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          }
        }
        else
        {
          return UsbhFdoResetPdoPort(
                   *(PDEVICE_OBJECT *)(v5 + 1184),
                   (ULONG_PTR)BugCheckParameter3,
                   (ULONG_PTR)BugCheckParameter4);
        }
      }
      else
      {
        return UsbhFdoReturnDeviceConfigInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
      }
    }
    else if ( LowPart == 2229315 )
    {
      return UsbhIdleIrp_Event(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, 7LL, 0);
    }
    else
    {
      switch ( LowPart )
      {
        case 0x220424u:
          return UsbhFdoReturnControllerName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
        case 0x22042Cu:
LABEL_90:
          BugCheckParameter4->IoStatus.Status = -1073741637;
          IofCompleteRequest(BugCheckParameter4, 0);
          UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
          return 3221225659LL;
        case 0x220433u:
          v18 = 0LL;
          goto LABEL_120;
        case 0x220437u:
          LOBYTE(v18) = 1;
LABEL_120:
          result = UsbhFdoReturnDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4, v18);
          break;
        case 0x22043Bu:
          result = UsbhFdoReturnTtDeviceHandle(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          break;
        case 0x22043Fu:
          result = UsbhFdoReturnTopologyAddress(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
          break;
        default:
          goto LABEL_129;
      }
    }
    return result;
  }
  if ( LowPart == 2229280 )
    return UsbhFdoReturnDeviceBusInfo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
  switch ( LowPart )
  {
    case 0x220003u:
      v19 = *(struct _DEVICE_OBJECT **)(v5 + 1184);
      if ( !v19 )
        goto LABEL_135;
      DeviceExtension = (PDEVICE_OBJECT *)v19->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), 0LL);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(*(_QWORD *)(v5 + 1184), v19->DeviceExtension);
      v21 = BugCheckParameter3[8];
      if ( !v21 )
        goto LABEL_143;
      if ( *(_DWORD *)v21 != 1329877064 )
        UsbhTrapFatal_Dbg(BugCheckParameter3, v21);
      SecurityContext = BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->AccessState = *(_ACCESS_STATE **)(v21 + 1160);
      switch ( WORD1(SecurityContext->SecurityQos) )
      {
        case 0:
          return UsbhFdoSelectConfigurationPdo(v19, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
        case 1:
          return UsbhFdoSelectInterfacePdo(v19, BugCheckParameter3, BugCheckParameter4);
        case 0x13:
          if ( (*(_DWORD *)(v21 + 1432) & 0x80000) == 0 )
            goto LABEL_91;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_q(
              WPP_GLOBAL_Control->DeviceExtension,
              v21,
              1,
              19,
              (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids,
              *(_QWORD *)(v21 + 840));
          }
          goto LABEL_90;
        case 0x1E:
        case 0x30:
        case 0x31:
          return UsbhFdoValidateConnectionPdo(v19, BugCheckParameter3, BugCheckParameter4);
        case 0x2A:
          return UsbhFdoGetMsDescriptorPdo(v19, BugCheckParameter3, BugCheckParameter4);
        default:
LABEL_91:
          ++BugCheckParameter4->CurrentLocation;
          ++BugCheckParameter4->Tail.Overlay.CurrentStackLocation;
          v23 = IofCallDriver(DeviceExtension[152], BugCheckParameter4);
          v24 = BugCheckParameter3[8];
          v25 = v23;
          if ( !v24 )
            goto LABEL_143;
          if ( *(_DWORD *)v24 != 1329877064 )
            UsbhTrapFatal_Dbg(BugCheckParameter3, BugCheckParameter3[8]);
          v26 = (_QWORD *)(v24 + 1224);
          v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v24 + 1216));
          v28 = *(_QWORD **)(v24 + 1224);
          if ( v28 == (_QWORD *)(v24 + 1224) || !v28 )
            goto LABEL_97;
          break;
      }
      break;
    case 0x220007u:
      return UsbhFdoResetPdoPort(
               *(PDEVICE_OBJECT *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    case 0x22000Fu:
      return UsbhFdoReturnRootHubPdo(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    case 0x220013u:
      return UsbhFdoReturnPortStatus(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    case 0x220017u:
      BugCheckParameter4->IoStatus.Status = 0;
      IofCompleteRequest(BugCheckParameter4, 0);
      UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      return 0LL;
    case 0x22001Bu:
      return UsbhFdoReturnHubCount(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    case 0x22001Fu:
      return UsbhFdoCyclePdoPort(*(_QWORD *)(v5 + 1184), (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    case 0x220020u:
      return UsbhFdoReturnHubName(*(_QWORD *)(v5 + 1184), BugCheckParameter3, BugCheckParameter4);
    case 0x220027u:
      return UsbhFdoSubmitPdoIdleNotification(
               *(_QWORD *)(v5 + 1184),
               (ULONG_PTR)BugCheckParameter3,
               (ULONG_PTR)BugCheckParameter4);
    case 0x22002Bu:
      return UsbhFdoRecordFailure(*(_QWORD *)(v5 + 1184), (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    default:
      goto LABEL_129;
  }
  do
  {
    v29 = (_QWORD *)*v28;
    if ( (IRP *)v28[2] == BugCheckParameter4 )
    {
      if ( (_QWORD *)v29[1] == v28 )
      {
        v31 = (_QWORD *)v28[1];
        if ( (_QWORD *)*v31 == v28 )
        {
          *v31 = v29;
          v29[1] = v31;
          ExFreePoolWithTag(v28 - 1, 0);
          goto LABEL_99;
        }
      }
LABEL_105:
      __fastfail(3u);
    }
    v28 = (_QWORD *)*v28;
  }
  while ( v29 != v26 );
LABEL_97:
  v30 = *(_DWORD *)(v24 + 1264);
  if ( !v30 )
    UsbhPdoTrapFatal_Dbg((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  *(_DWORD *)(v24 + 1264) = v30 - 1;
LABEL_99:
  if ( (_QWORD *)*v26 != v26 || *(_DWORD *)(v24 + 1264) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 1216), v27);
    return v25;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v24 + 1216), v27);
    KeSetEvent((PRKEVENT)(v24 + 1240), 0, 0);
    return v25;
  }
}
