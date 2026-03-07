__int64 __fastcall UsbhCreatePdo(__int64 a1, __int64 a2)
{
  ULONG v3; // edi
  __int64 v5; // rcx
  _DWORD *v6; // r13
  __int64 v7; // rbx
  __int64 v8; // r9
  int v9; // r10d
  char *DeviceExtension; // rdi
  struct _UNICODE_STRING v11; // xmm0
  __int64 v12; // r9
  __int64 v13; // r10
  const WCHAR *Pool2; // rax
  WCHAR *v15; // r15
  ULONG v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // r10
  int v25; // r8d
  int v26; // r11d
  __int64 v27; // r9
  __int64 v28; // r10
  __m128i si128; // xmm0
  int v30; // eax
  __int16 v31; // r8
  __int64 v32; // rdx
  struct _UNICODE_STRING DeviceName; // [rsp+40h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+B0h] [rbp+50h] BYREF
  int NewIrql; // [rsp+B8h] [rbp+58h] BYREF
  int v38; // [rsp+BCh] [rbp+5Ch]

  DeviceObject = 0LL;
  v3 = 0;
  DeviceName = 0LL;
  DestinationString = 0LL;
  Log(a1, 256, 1666204751, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x1Au,
      (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids);
  v6 = FdoExt(a1);
  do
  {
    LODWORD(v7) = UsbhMakePdoName(v5, &DeviceName, v3);
    if ( (int)v7 >= 0 )
    {
      LODWORD(v7) = IoCreateDevice(
                      (PDRIVER_OBJECT)WPP_MAIN_CB.Queue.ListEntry.Blink,
                      0xBF8u,
                      &DeviceName,
                      0x22u,
                      0,
                      0,
                      &DeviceObject);
      if ( (int)v7 >= 0 )
        break;
      RtlFreeUnicodeString(&DeviceName);
    }
    ++v3;
  }
  while ( (_DWORD)v7 == -1073741771 );
  Log(a1, 256, 1668310065, a2, (int)v7);
  if ( DeviceObject )
  {
    if ( (int)v7 < 0 )
      return (unsigned int)v7;
    DeviceObject->StackSize = *(_BYTE *)(*((_QWORD *)v6 + 151) + 76LL) + 1;
    DeviceObject->Flags |= 0x2000u;
    Log(a1, v9, 1666204721, v8, (__int64)DeviceObject);
    DeviceExtension = (char *)DeviceObject->DeviceExtension;
    *(_DWORD *)DeviceExtension = 1329877064;
    v11 = DeviceName;
    *((_DWORD *)DeviceExtension + 588) = -1;
    *((_QWORD *)DeviceExtension + 145) = 0xFEFEFEFEFEFEFEFEuLL;
    *((struct _UNICODE_STRING *)DeviceExtension + 167) = v11;
    *((_DWORD *)DeviceExtension + 288) = 0;
    *((_DWORD *)DeviceExtension + 295) = *(_DWORD *)(*((_QWORD *)v6 + 377) + 4LL * *(unsigned __int16 *)(a2 + 4));
    *((_DWORD *)DeviceExtension + 196) = 1;
    *((_DWORD *)DeviceExtension + 596) = 1;
    *((_DWORD *)DeviceExtension + 742) = 1000;
    SET_PDO_HWPNPSTATE((__int64)DeviceObject, 1, 7);
    *((_QWORD *)DeviceExtension + 120) = DeviceObject;
    *((_DWORD *)DeviceExtension + 236) = 2017613128;
    *((_DWORD *)DeviceExtension + 264) = 1734964085;
    *((_DWORD *)DeviceExtension + 252) = 1734964085;
    *((_DWORD *)DeviceExtension + 248) = 1734964085;
    *((_DWORD *)DeviceExtension + 244) = 1734964085;
    *((_DWORD *)DeviceExtension + 255) = 1734964085;
    *((_DWORD *)DeviceExtension + 258) = 1734964085;
    *((_DWORD *)DeviceExtension + 261) = 1734964085;
    *((_DWORD *)DeviceExtension + 266) = 1734964085;
    *((_DWORD *)DeviceExtension + 237) = 1;
    *((_QWORD *)DeviceExtension + 119) = a1;
    *((_QWORD *)DeviceExtension + 120) = DeviceObject;
    *((_QWORD *)DeviceExtension + 317) = MEMORY[0xFFFFF78000000014];
    NewIrql = 0;
    LOBYTE(v38) = 0;
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 2360), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 2920), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 1240), NotificationEvent, 0);
    *((_QWORD *)DeviceExtension + 154) = DeviceExtension + 1224;
    *((_QWORD *)DeviceExtension + 153) = DeviceExtension + 1224;
    KeInitializeEvent((PRKEVENT)DeviceExtension + 54, NotificationEvent, 1u);
    *((_QWORD *)DeviceExtension + 160) = DeviceExtension + 1272;
    *((_QWORD *)DeviceExtension + 159) = DeviceExtension + 1272;
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 2056), SynchronizationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 2944), SynchronizationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(DeviceExtension + 2896), SynchronizationEvent, 1u);
    KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 351);
    KeInitializeEvent((PRKEVENT)DeviceExtension + 115, SynchronizationEvent, 0);
    Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1704), (__int64)UsbhDriverNotFoundTimer);
    *(_QWORD *)v12 = 1332899156LL;
    *(_QWORD *)(v12 + 48) = v13;
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)(v12 + 72) = 1145980532;
    Pool2 = (const WCHAR *)ExAllocatePool2(64LL, 16LL, 1112885333LL);
    v15 = (WCHAR *)Pool2;
    if ( !Pool2 )
    {
      LODWORD(v7) = -1073741670;
LABEL_32:
      Log(a1, 256, 1346653985, (__int64)DeviceObject, (int)v7);
      Usbh_ErrorDisconnect_PdoEvent(a1, (__int64)DeviceObject, a2 + 24);
      return (unsigned int)v7;
    }
    RtlInitUnicodeString(&DestinationString, Pool2);
    v16 = *(unsigned __int16 *)(a2 + 4);
    DestinationString.MaximumLength = 16;
    LODWORD(v7) = RtlIntegerToUnicodeString(v16, 0xAu, &DestinationString);
    if ( (v7 & 0xC0000000) == 0xC0000000 )
    {
      ExFreePoolWithTag(v15, 0);
      goto LABEL_31;
    }
    *((_QWORD *)DeviceExtension + 269) = v15;
    *((_DWORD *)DeviceExtension + 537) = DestinationString.MaximumLength;
    Log(a1, 256, 1668310066, a2, (__int64)v15);
    v17 = UsbhBuildDeviceID(a1, 0LL, (__int64)(DeviceExtension + 2080));
    v7 = v17;
    v18 = a1;
    if ( (v17 & 0xC0000000) == 0xC0000000 )
    {
      v19 = 1668302129;
    }
    else
    {
      v20 = UsbhBuildHardwareID(a1, 0LL, (__int64)(DeviceExtension + 2096));
      v7 = v20;
      v18 = a1;
      if ( (v20 & 0xC0000000) == 0xC0000000 )
      {
        v19 = 1668302130;
      }
      else
      {
        v21 = UsbhBuildCompatibleID(a1, 0LL, (__int64)(DeviceExtension + 2112));
        v7 = v21;
        if ( (v21 & 0xC0000000) == 0xC0000000 )
        {
          v19 = 1668302131;
        }
        else
        {
          v22 = UsbhConnectPdoToHub((__int64)DeviceObject, a1);
          v7 = v22;
          if ( (v22 & 0xC0000000) == 0xC0000000 )
          {
            v19 = 1668302132;
          }
          else
          {
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 152);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 293);
            *((_QWORD *)DeviceExtension + 284) = DeviceExtension + 2264;
            *((_QWORD *)DeviceExtension + 283) = DeviceExtension + 2264;
            IoCsqInitialize(
              (PIO_CSQ)(DeviceExtension + 2280),
              (PIO_CSQ_INSERT_IRP)UsbhInsertPdoWakeIrp,
              (PIO_CSQ_REMOVE_IRP)UsbhRemovePdoWakeIrp,
              (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoWakeIrp,
              (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoWakeIrpLock,
              (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoWakeIrpLock,
              (PIO_CSQ_COMPLETE_CANCELED_IRP)UsbhCompleteCanceledPdoWakeIrp);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 191);
            KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 256);
            *((_QWORD *)DeviceExtension + 182) = DeviceExtension + 1448;
            *((_QWORD *)DeviceExtension + 181) = DeviceExtension + 1448;
            IoCsqInitialize(
              (PIO_CSQ)(DeviceExtension + 1464),
              UsbhInsertPdoIdleIrp,
              UsbhRemovePdoIdleIrp,
              (PIO_CSQ_PEEK_NEXT_IRP)UsbhPeekNextPdoIdleIrp,
              (PIO_CSQ_ACQUIRE_LOCK)UsbhAcquirePdoIdleIrpLock,
              (PIO_CSQ_RELEASE_LOCK)UsbhReleasePdoIdleIrpLock,
              UsbhCompleteCanceledPdoIdleIrp);
            Log(a1, 0x2000, 1768843604, (__int64)(DeviceExtension + 1544), (__int64)UsbhIdleIrpRetryTimer);
            *(_QWORD *)(v23 + 48) = v24;
            *(_QWORD *)v23 = 1332899156LL;
            *(_DWORD *)(v23 + 8) = 0;
            *(_DWORD *)(v23 + 72) = 1231318117;
            Log(a1, v26, v25, (__int64)(DeviceExtension + 1624), (__int64)UsbhSS_WakeIrpRetryTimer);
            *(_QWORD *)v27 = 1332899156LL;
            *(_QWORD *)(v27 + 48) = v28;
            *(_DWORD *)(v27 + 8) = 0;
            *(_DWORD *)(v27 + 72) = 1144018785;
            KeInitializeSemaphore((PRKSEMAPHORE)(DeviceExtension + 2568), 1, 1);
            si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
            *((__m128i *)DeviceExtension + 57) = si128;
            *(__m128i *)(DeviceExtension + 892) = si128;
            v30 = UsbhIncPdoIoCount((__int64)DeviceObject, (__int64)DeviceObject, 1162637161, 0);
            v7 = v30;
            if ( (v30 & 0xC0000000) == 0xC0000000 )
              goto LABEL_31;
            *((_DWORD *)DeviceExtension + 356) |= 1u;
            *((_QWORD *)DeviceExtension + 105) = DeviceObject;
            *((_WORD *)DeviceExtension + 714) = *(_WORD *)(a2 + 4);
            *((_QWORD *)DeviceExtension + 382) = *(_QWORD *)(a2 + 2920);
            *((_DWORD *)DeviceExtension + 298) = v6[1259];
            *((_DWORD *)DeviceExtension + 282) = 1;
            *((_DWORD *)DeviceExtension + 197) = 1;
            *((_DWORD *)DeviceExtension + 198) = 1;
            *((_DWORD *)DeviceExtension + 684) = 0;
            DeviceExtension[2740] = 0;
            LOBYTE(NewIrql) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
            v38 = 1;
            WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
            UsbhSetPortData(a1, DeviceObject, &NewIrql);
            UsbhGetLocationIdString(a1, (__int64)DeviceObject, v31, (__int64)(DeviceExtension + 2224));
            v38 = 0;
            WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
            KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, NewIrql);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v32,
                1u,
                0x1Bu,
                (__int64)&WPP_939f5a741f6d330202eecd1a59aa0212_Traceguids,
                DeviceObject);
            }
            v19 = 1346654051;
          }
        }
        v18 = a1;
      }
    }
    Log(v18, 256, v19, (__int64)DeviceObject, v7);
LABEL_31:
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      DeviceObject->Flags &= ~0x80u;
      UsbhSshSetPortsBusyState(a1, *(_WORD *)(a2 + 4), 2, 1);
      SET_PDO_SWPNPSTATE((__int64)DeviceObject, 100, 6);
      return (unsigned int)v7;
    }
    goto LABEL_32;
  }
  LODWORD(v7) = -1073741670;
  return (unsigned int)v7;
}
