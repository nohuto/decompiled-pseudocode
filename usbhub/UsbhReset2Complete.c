__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  _DWORD *v7; // r12
  KSPIN_LOCK *v8; // rdi
  KIRQL v9; // al
  int FrameCounter; // eax
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // rdx
  char v16; // r12
  __int64 v17; // rdi
  KIRQL v18; // al
  __int64 v19; // rax
  KIRQL v20; // dl
  __int64 v21; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdi
  KIRQL v25; // di
  __int64 v27; // rax
  KIRQL v28; // dl
  int v29; // eax
  KIRQL v30; // al
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rdi
  unsigned int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rdx
  int v37; // r9d
  __int64 v38; // rdx
  int v39; // r9d
  int v40; // r9d
  int v41; // [rsp+20h] [rbp-A8h]
  int v42; // [rsp+28h] [rbp-A0h]
  int v43; // [rsp+30h] [rbp-98h]
  int v44; // [rsp+38h] [rbp-90h]
  KIRQL v45; // [rsp+50h] [rbp-78h]
  PVOID P; // [rsp+58h] [rbp-70h] BYREF
  unsigned int v47; // [rsp+60h] [rbp-68h]
  int v48; // [rsp+64h] [rbp-64h]
  int v49; // [rsp+68h] [rbp-60h]
  int v50; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v51[2]; // [rsp+70h] [rbp-58h] BYREF
  __int16 v52; // [rsp+78h] [rbp-50h]
  __int16 v53; // [rsp+7Ah] [rbp-4Eh]

  v49 = 0;
  v50 = 0;
  v53 = 0;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  Log(a1, 1024, 1884435043, a2, 0LL);
  P = (PVOID)FdoExt(a1);
  v7 = P;
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 3064);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, *(unsigned __int16 *)(a2 + 4), 0);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v11 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v51[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  LOWORD(FrameCounter) = *(_WORD *)(a2 + 4);
  v51[1] = v11;
  v52 = FrameCounter;
  Log(a1, 1024, 1701720625, a2, v11);
  if ( *(_DWORD *)(a2 + 544) )
  {
    UsbhWait(a1, 100LL);
  }
  else
  {
    Log(a1, 8, 2002872692, 15, 0LL);
    UsbhRawWait(v12);
  }
  v13 = (int)UsbhInitializeDevice(a1, a3, a2);
  UsbhEtwLogHubIrpEvent(
    a1,
    0LL,
    0LL,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE,
    *(unsigned __int16 *)(a2 + 4),
    0);
  Log(a1, 1024, 1701720626, *(unsigned __int16 *)(a2 + 4), v13);
  if ( (int)v13 < 0 )
  {
LABEL_15:
    if ( (v13 & 0xC0000000) == 0xC0000000 )
    {
LABEL_38:
      v32 = *(unsigned __int16 *)(a2 + 4);
      P = 0LL;
      Log(a1, 1024, 1936025137, v32, (int)v13);
      v33 = (int)UsbhAllocateTimeoutObject(a1, a2, &P);
      v34 = *(_DWORD *)(a2 + 544);
      if ( v34 < 3 && (int)v33 >= 0 )
      {
        Log(a1, 1024, 1936025138, v34, v33);
        UsbhDisablePort(a1);
        v35 = *(unsigned __int16 *)(a2 + 4);
        v36 = *(_QWORD *)(a2 + 376);
        ++*(_DWORD *)(a2 + 544);
        UsbhAcquireEnumBusLock(a1, v36, v35);
        UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897LL, 1LL);
        UsbhBusUnlatchPdo(a1, a3, a2, v37, 0LL);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, *(unsigned __int16 *)(a2 + 4), v33);
        UsbhResetPort(a1, a2, (__int64)P);
        return v6;
      }
      if ( P )
        ExFreePoolWithTag(P, 0);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v33);
      UsbhSetEnumerationFailed(a1, (int)v51, v33, v43, v44, 2065);
    }
    else
    {
      v23 = PdoExt(a3);
      v24 = v23;
      if ( !*(_BYTE *)(v23 + 2732) && (*(_DWORD *)(v23 + 1420) & 0x200) != 0 && (*(_DWORD *)(v23 + 1180) & 0x10) == 0 )
        UsbhBuildContainerID(a1, a3);
      if ( !*(_BYTE *)(v24 + 2732) )
        goto LABEL_19;
      if ( (v7[640] & 1) != 0 )
        UsbhBusIf_SetContainerIdForPort(a1, *(unsigned __int16 *)(v24 + 1428), v24 + 2716);
      if ( !*(_BYTE *)(v24 + 2732) )
      {
LABEL_19:
        if ( (v7[640] & 1) != 0 )
        {
          if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *(_WORD *)(v24 + 1428), v24 + 2716) >= 0 )
            *(_BYTE *)(v24 + 2732) = 1;
          LODWORD(v13) = 0;
        }
      }
      Log(a1, 1024, 1970032689, a3, a2);
      v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      *(_DWORD *)(a2 + 416) = 0;
      Log(a1, 1024, 1970032690, a3, a2);
      UsbhDerefPdo(a1, a3, 0LL, 0x7050444Fu);
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v25);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, *(unsigned __int16 *)(a2 + 4), v13);
      *(_DWORD *)(PdoExt(a3) + 2820) = 0;
      UsbhBusConnectPdo(a1, a2);
    }
    return 0;
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(_QWORD *)(a2 + 376);
  v47 = 0;
  v16 = 0;
  UsbhReleaseEnumBusLockEx(a1, v15, v14);
  v17 = *(_QWORD *)(a2 + 376);
  v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_DWORD *)(v17 + 136) = 1;
  *(_BYTE *)(v17 + 132) = v18;
  *(_DWORD *)(v17 + 88) = 2018460752;
  *(_DWORD *)(v17 + 92) = 12;
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))v17;
  *(_QWORD *)(v17 + 24) = KeGetCurrentThread();
  if ( a3 && *(_DWORD *)(PdoExt(a3) + 1124) == 3 )
  {
    Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
    v19 = *(_QWORD *)(a2 + 376);
    v16 = 1;
    LODWORD(v13) = 0;
    *(_DWORD *)(v19 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v20 = *(_BYTE *)(v19 + 132);
    *(_DWORD *)(v19 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v20);
  }
  else
  {
    v27 = *(_QWORD *)(a2 + 376);
    *(_DWORD *)(v27 + 136) = 0;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    v28 = *(_BYTE *)(v27 + 132);
    *(_DWORD *)(v27 + 88) = 1734964085;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v28);
    v29 = UsbhSetupDevice(a1);
    v13 = v29;
    UsbhEtwLogHubIrpEvent(
      a1,
      0LL,
      0LL,
      &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE,
      *(unsigned __int16 *)(a2 + 4),
      v29);
    Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v13);
  }
  while ( 1 )
  {
    if ( (int)v13 >= 0 )
    {
      v13 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v50);
      Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v13);
    }
    Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
    if ( (v13 & 0xC0000000) == 0xC0000000 )
      break;
    v21 = PdoExt(a3);
    v22 = v21;
    if ( (*(_DWORD *)(v21 + 1420) & 0x200) == 0 || v16 == 1 )
      goto LABEL_14;
    ++v47;
    v48 = 4;
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 2808));
    v45 = v30;
    if ( !*(_DWORD *)(v22 + 2816) )
    {
      v31 = PdoExt(a3);
      if ( (*(_DWORD *)(v31 + 1420) & 0x200) == 0
        || (v43 = v31 + 2128,
            LOWORD(v42) = *(_WORD *)(v31 + 1410),
            LOWORD(v41) = *(_WORD *)(v31 + 1408),
            v48 = USBD_AddDeviceToGlobalList(a3, a1, *(unsigned __int16 *)(v31 + 1428), 0LL, v41, v42),
            v48 == 1) )
      {
        *(_DWORD *)(v22 + 2816) = 1;
        KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 2808), v45);
        goto LABEL_14;
      }
      v30 = v45;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v22 + 2808), v30);
    if ( v48 == 3 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      UsbhException(
        a1,
        *(unsigned __int16 *)(a2 + 4),
        40,
        *(_QWORD *)(v22 + 2136),
        *(_DWORD *)(v22 + 2132),
        v13,
        0,
        usbfile_busfunc_c,
        1932,
        0);
      UsbhFreeID(v22 + 2128);
      *(_DWORD *)(v22 + 1420) &= ~0x200u;
      goto LABEL_14;
    }
    if ( v48 != 2 )
    {
      if ( v48 == 4 )
      {
        LODWORD(v13) = -1073741823;
        goto LABEL_38;
      }
LABEL_14:
      v7 = P;
      goto LABEL_15;
    }
    if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
    {
      LODWORD(v13) = -1073741823;
      *(_DWORD *)(a2 + 544) = 3;
      goto LABEL_38;
    }
    UsbhWait(a1, LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc));
    if ( v47 > HIDWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    {
      LODWORD(v13) = -1073741823;
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT,
        *(unsigned __int16 *)(a2 + 4),
        -1073741823);
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70, 0, 0, -1073741823, 0, usbfile_busfunc_c, 1987, 0);
      *(_DWORD *)(PdoExt(a3) + 2820) = 1073807363;
      goto LABEL_38;
    }
  }
  if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v13) )
  {
    Log(a1, 1024, 1701725522, v39, v38);
    UsbhDisablePort(a1);
    goto LABEL_14;
  }
  Log(a1, 1024, 1701720644, v39, v38);
  UsbhBusUnlatchPdo(a1, a3, a2, v40, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, *(unsigned __int16 *)(a2 + 4), v13);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 3LL;
}
