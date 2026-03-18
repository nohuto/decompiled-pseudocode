/*
 * XREFs of UsbhPdoDevicePowerState @ 0x1C0005200
 * Callers:
 *     UsbhPdoPower_SetPower @ 0x1C0002AD0 (UsbhPdoPower_SetPower.c)
 * Callees:
 *     UsbhSet_D0_wQueued_Action @ 0x1C0001008 (UsbhSet_D0_wQueued_Action.c)
 *     UsbhPdoSetDx @ 0x1C0001178 (UsbhPdoSetDx.c)
 *     UsbhAcquireFdoPwrLock @ 0x1C00019E0 (UsbhAcquireFdoPwrLock.c)
 *     UsbhQueueWorkItemEx @ 0x1C0002868 (UsbhQueueWorkItemEx.c)
 *     UsbhSetPdoPowerState @ 0x1C0002CC0 (UsbhSetPdoPowerState.c)
 *     UsbhClearPdoIdleReady @ 0x1C0004AC0 (UsbhClearPdoIdleReady.c)
 *     UsbhSetPdoIdleReady @ 0x1C0004C18 (UsbhSetPdoIdleReady.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhSet_Pdo_Dx @ 0x1C000AFE0 (UsbhSet_Pdo_Dx.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhPoStartNextPowerIrp_Pdo @ 0x1C000DEEC (UsbhPoStartNextPowerIrp_Pdo.c)
 *     UsbhEtwLogDevicePowerEvent @ 0x1C000DFB0 (UsbhEtwLogDevicePowerEvent.c)
 *     UsbhDecPdoIoCount @ 0x1C000EE64 (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C000EF40 (UsbhIncPdoIoCount.c)
 *     WPP_RECORDER_SF_dd @ 0x1C002DDB8 (WPP_RECORDER_SF_dd.c)
 *     GET_FDO_POWER_STATE @ 0x1C002F9A0 (GET_FDO_POWER_STATE.c)
 *     UsbhReleaseFdoPwrLock @ 0x1C00313A8 (UsbhReleaseFdoPwrLock.c)
 *     UsbhPCE_BusDisconnect @ 0x1C00338F4 (UsbhPCE_BusDisconnect.c)
 */

__int64 __fastcall UsbhPdoDevicePowerState(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  __int64 v6; // r15
  __int64 v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  __int64 v9; // rbx
  unsigned int LowPart; // edi
  int v11; // r12d
  KIRQL v12; // al
  bool v13; // zf
  KIRQL v14; // dl
  __int64 v15; // rdi
  KIRQL v16; // al
  int v17; // ecx
  int v18; // edi
  unsigned int v19; // edi
  __int64 v20; // rax
  void *v21; // r8
  __int64 v23; // r8
  int v24; // edi
  int v25; // ecx
  __int64 v26; // r8
  __int64 v27; // r8
  __int64 v28; // rdi
  KIRQL v29; // dl
  __int64 v30; // r8
  __int64 v31; // rax
  BOOLEAN v32; // r9
  unsigned int v33; // [rsp+80h] [rbp+18h]

  v6 = PdoExt(a2);
  FdoExt(a1);
  v7 = PdoExt(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7 + 944;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v33 = LowPart;
  Log(a1, 16, 1885622372, a2, (__int64)a3);
  v11 = UsbhIncPdoIoCount(a2, a3, 1884311383LL, 0LL);
  if ( (v11 & 0xC0000000) != 0xC0000000 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *(_DWORD *)(v9 + 136) = 1;
    *(_BYTE *)(v9 + 132) = v12;
    *(_DWORD *)(v9 + 88) = 2018460752;
    *(_DWORD *)(v9 + 92) = 12;
    WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v9;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    v13 = *(_DWORD *)(PdoExt(a2) + 1124) == 3;
    *(_DWORD *)(v9 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    *(_DWORD *)(v9 + 88) = 1734964085;
    v14 = *(_BYTE *)(v9 + 132);
    if ( !v13 )
    {
      v19 = -1073741810;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
LABEL_29:
      UsbhPCE_BusDisconnect(a1, v9, *(unsigned __int16 *)(v6 + 1428));
      goto LABEL_11;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v14);
    v15 = FdoExt(a1);
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v15 + 5056));
    v17 = *(_DWORD *)(v15 + 4172);
    *(_BYTE *)(v15 + 5064) = v16;
    *(_DWORD *)(v9 + 40) = v17;
    *(_DWORD *)(v9 + 44) = 126;
    *(_DWORD *)(v9 + 32) = 844055622;
    *(_DWORD *)(v9 + 36) = 1986356304;
    *(_QWORD *)(v9 + 24) = KeGetCurrentThread();
    *(_QWORD *)(v15 + 1344) = v9;
    v18 = *(_DWORD *)(PdoExt(a2) + 1128);
    if ( v33 == 1 )
    {
      UsbhEtwLogDevicePowerEvent(
        v6,
        a3,
        &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_DISPATCH,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        0);
      *(_QWORD *)(v6 + 2552) = MEMORY[0xFFFFF78000000014];
      v24 = v18 - 1;
      if ( v24 )
      {
        if ( v24 != 6 )
        {
          FdoExt(*(_QWORD *)(v9 + 8));
          v25 = *(_DWORD *)(FdoExt(*(_QWORD *)(v9 + 8)) + 4172);
          if ( v25 != 210 )
          {
            switch ( v25 )
            {
              case 201:
              case 206:
              case 209:
              case 211:
                break;
              case 212:
              case 213:
                goto LABEL_41;
              default:
                UsbhSetPdoPowerState(v9, a2, v26, 6, 3);
                goto LABEL_46;
            }
          }
          if ( (int)UsbhSet_D0_wQueued_Action(a1, v9, a2, (__int64)a3) >= 0 )
          {
            KeResetEvent((PRKEVENT)(v6 + 2360));
            UsbhSetPdoPowerState(v9, a2, v27, 2, 6);
            v28 = FdoExt(a1);
            FdoExt(*(_QWORD *)(v9 + 8));
            *(_DWORD *)(v9 + 32) = 1734964085;
            v29 = *(_BYTE *)(v28 + 5064);
            *(_QWORD *)(v28 + 1344) = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)(v28 + 5056), v29);
            return 259LL;
          }
LABEL_41:
          UsbhSetPdoPowerState(v9, a2, v26, 6, 3);
          v19 = 0;
          if ( (unsigned int)GET_FDO_POWER_STATE(v9) == 213 )
            v19 = -1073741810;
          UsbhReleaseFdoPwrLock(a1, v9);
LABEL_9:
          if ( v19 != -1073741810 && v19 != -1073741667 )
            goto LABEL_11;
          goto LABEL_29;
        }
        UsbhSetPdoPowerState(v9, a2, v23, 7, 13);
        UsbhReleaseFdoPwrLock(a1, v9);
        Log(a1, 16, 2003059760, 0, *(unsigned __int16 *)(v6 + 1428));
        KeWaitForSingleObject((PVOID)(v6 + 2360), Executive, 0, v32, 0LL);
      }
      else
      {
        UsbhSetPdoPowerState(v9, a2, v23, 1, 2);
LABEL_46:
        UsbhReleaseFdoPwrLock(a1, v9);
      }
      v19 = 0;
    }
    else if ( v33 - 2 > 2 )
    {
      v19 = -1073741811;
      UsbhReleaseFdoPwrLock(a1, v9);
    }
    else
    {
      UsbhEtwLogDevicePowerEvent(
        v6,
        a3,
        &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_DISPATCH,
        CurrentStackLocation->Parameters.Read.ByteOffset.LowPart,
        0);
      if ( *(_DWORD *)(PdoExt(a2) + 788) == v33 )
      {
        v19 = 0;
        UsbhReleaseFdoPwrLock(a1, v9);
      }
      else
      {
        if ( *(_DWORD *)(v6 + 1152) == 2 )
        {
          if ( !CurrentStackLocation->Parameters.Create.EaLength )
          {
            if ( !*(_BYTE *)(v6 + 2733) )
            {
              *(_BYTE *)(v6 + 2733) = 1;
              UsbhQueueWorkItemEx(a1, 1u, (int)&UsbhSetPdoSelectiveSuspendedKey, a2, 0, 2001228627, 0LL);
            }
            if ( v33 == 4
              && (*(_DWORD *)(PdoExt(a2) + 1180) & 0x10) != 0
              && (*(_DWORD *)(v6 + 1420) & 0xC00000) == 0xC00000 )
            {
              KeSetEvent((PRKEVENT)(v6 + 2920), 0, 0);
              *(_DWORD *)(v6 + 1420) = *(_DWORD *)(v6 + 1420) & 0xFAFFFFFF | 0x4000000;
            }
          }
          v19 = UsbhPdoSetDx(v9, a2, (__int64)a3);
          goto LABEL_9;
        }
        v19 = -1073741130;
        UsbhReleaseFdoPwrLock(a1, v9);
      }
    }
LABEL_11:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        v33,
        1,
        22,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        *(_WORD *)(v6 + 1428),
        v33);
    UsbhSet_Pdo_Dx(a2, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
    *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
    v20 = PdoExt(a2);
    UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v20 + 1184), a2, a3, 2101LL);
    v21 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_DX_COMPLETE;
    if ( v33 == 1 )
      v21 = &USBHUB_ETW_EVENT_DEVICE_POWER_SET_D0_COMPLETE;
    UsbhEtwLogDevicePowerEvent(v6, a3, v21, CurrentStackLocation->Parameters.Read.ByteOffset.LowPart, 0);
    a3->IoStatus.Status = v19;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v19;
  }
  if ( *(_BYTE *)(v6 + 2740) )
  {
    UsbhAcquireFdoPwrLock(a1, v9, 126, 1986356304);
    if ( LowPart == 1 )
    {
      UsbhSetPdoPowerState(v9, a2, v30, 1, 2);
      UsbhReleaseFdoPwrLock(a1, v9);
      UsbhClearPdoIdleReady(a1, a2, (__int64)a3);
    }
    else
    {
      UsbhSetPdoPowerState(v9, a2, v30, 4, 4);
      UsbhReleaseFdoPwrLock(a1, v9);
      UsbhSetPdoIdleReady(a1, a2, (__int64)a3);
    }
    UsbhSet_Pdo_Dx(a2, LowPart);
  }
  Log(a1, 16, 1886545441, v11, (__int64)a3);
  *(_QWORD *)(v6 + 2560) = MEMORY[0xFFFFF78000000014];
  v31 = PdoExt(a2);
  UsbhPoStartNextPowerIrp_Pdo(*(_QWORD *)(v31 + 1184), a2, a3, 1910LL);
  a3->IoStatus.Status = 0;
  IofCompleteRequest(a3, 0);
  return 0LL;
}
