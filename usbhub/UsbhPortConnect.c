__int64 __fastcall UsbhPortConnect(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rdx
  int Pdo; // ebp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // esi
  __int64 v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+28h] [rbp-50h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  v3 = 0LL;
  *(_DWORD *)(a2 + 544) = 0;
  *(_DWORD *)(a2 + 2408) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v16 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xEu,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v16);
  }
  Log(a1, 1024, 1883459406, a2, 0LL);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_START);
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 0);
  v5 = (_QWORD *)UsbhIncHubBusy(a1, a2 + 24, a1, 1129345907, 1);
  Pdo = UsbhCreatePdo(a1, a2);
  if ( v5 )
    UsbhDecHubBusy(a1, v6, v5);
  if ( Pdo >= 0 )
  {
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    _InterlockedExchange((volatile __int32 *)(a2 + 404), 0);
    v8 = MEMORY[0xFFFFF78000000008];
    v9 = MEMORY[0xFFFFF78000000008];
    v10 = MEMORY[0xFFFFF78000000008];
LABEL_9:
    v11 = 0LL;
    do
    {
      if ( (unsigned __int64)(v10 - v8) > 0x1E8480 && v3 > 1 )
      {
        UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_FAILURE);
        Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
        Log(a1, 1024, 1145205871, a2, *(unsigned __int16 *)(a2 + 4));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LODWORD(v15) = *(unsigned __int16 *)(a2 + 4);
          WPP_RECORDER_SF_d(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            0,
            1u,
            0xFu,
            (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
            v15);
        }
        return 0LL;
      }
      UsbhWait(a1, 0x14u);
      v10 = MEMORY[0xFFFFF78000000008];
      v12 = MEMORY[0xFFFFF78000000008] - v9;
      v9 = MEMORY[0xFFFFF78000000008];
      v11 += v12;
      if ( _InterlockedExchange((volatile __int32 *)(a2 + 404), 0) )
      {
        ++v3;
        goto LABEL_9;
      }
    }
    while ( v11 < 0xF4240 );
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DEBOUNCE_COMPLETE);
    v13 = UsbhAllocateTimeoutObject(a1, a2, &P);
    if ( v13 >= 0 )
    {
      UsbhResetPort(a1, a2, (__int64)P);
      _InterlockedExchange((volatile __int32 *)(a2 + 428), 9);
      return 1LL;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    UsbhDisablePort(a1, a2);
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    Usbh_ErrorDisconnect_PdoEvent(a1, *(_QWORD *)(a2 + 392), a2 + 24);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE);
    UsbhException(a1, *(_WORD *)(a2 + 4), 2u, 0LL, 0, v13, -1, usbfile_busfunc_c, 650, 0);
  }
  else
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_PDO_FAILURE);
    UsbhException(a1, *(_WORD *)(a2 + 4), 2u, 0LL, 0, Pdo, -1, usbfile_busfunc_c, 551, 0);
  }
  _InterlockedExchange((volatile __int32 *)(a2 + 428), 3);
  return 0LL;
}
