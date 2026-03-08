/*
 * XREFs of UsbhAddDevice @ 0x1C0041E10
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhRawWait @ 0x1C0019670 (UsbhRawWait.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhReferenceListOpen @ 0x1C00418C8 (UsbhReferenceListOpen.c)
 *     UsbhAssignHubNumber @ 0x1C0042370 (UsbhAssignHubNumber.c)
 *     UsbhModuleDispatch @ 0x1C0043D00 (UsbhModuleDispatch.c)
 *     UsbhReleaseHubNumber @ 0x1C0043EA0 (UsbhReleaseHubNumber.c)
 *     Usbh_FDO_Pnp_State @ 0x1C0044348 (Usbh_FDO_Pnp_State.c)
 *     UsbhLogAlloc @ 0x1C0048920 (UsbhLogAlloc.c)
 */

__int64 __fastcall UsbhAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  struct _DEVICE_OBJECT *v3; // r14
  char *DeviceExtension; // rbx
  NTSTATUS v6; // esi
  PDEVICE_OBJECT v7; // rcx
  PDEVICE_OBJECT v9; // rax
  __m128i si128; // xmm0
  PDEVICE_OBJECT v11; // rax
  PDEVICE_OBJECT v12; // rax
  PDEVICE_OBJECT v13; // rax
  PDEVICE_OBJECT v14; // rax
  PDEVICE_OBJECT v15; // rax
  PDEVICE_OBJECT v16; // rax
  int v17; // edi
  _DWORD *v18; // rax
  int v19; // ecx
  int v20; // edx
  KIRQL v21; // al
  _DWORD *v22; // rax
  __int64 v23; // r9
  __int64 v24; // r10
  int v25; // r11d
  PDEVICE_OBJECT SourceDevice; // [rsp+80h] [rbp+40h] BYREF

  SourceDevice = 0LL;
  v3 = 0LL;
  DeviceExtension = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x14u,
      (__int64)&WPP_9b0a5a2624623ceb7c2c6a1dede7f127_Traceguids);
  v6 = IoCreateDevice(
         DriverObject,
         (WPP_MAIN_CB.Dpc.TargetInfoAsUlong << 12) + 5280,
         0LL,
         0x8600u,
         0x80u,
         0,
         &SourceDevice);
  if ( v6 >= 0 )
  {
    if ( !SourceDevice )
      return 3221225473LL;
    DeviceExtension = (char *)SourceDevice->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg((__int64)SourceDevice, (ULONG_PTR)DriverObject);
    *(_DWORD *)DeviceExtension = 541218120;
    *((_QWORD *)DeviceExtension + 1) = USBHUB_Triage_Info;
  }
  v7 = SourceDevice;
  if ( !SourceDevice )
    return 3221225473LL;
  if ( v6 >= 0 )
  {
    v9 = IoAttachDeviceToDeviceStack(SourceDevice, TargetDevice);
    v7 = SourceDevice;
    v3 = v9;
    if ( !v9 )
    {
      IoDeleteDevice(SourceDevice);
      return 3221225473LL;
    }
  }
  if ( !v7 )
    UsbhTrapFatal_Dbg(0LL, (ULONG_PTR)DriverObject);
  if ( v6 < 0 )
    UsbhTrapFatal_Dbg((__int64)v7, (ULONG_PTR)DriverObject);
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 1224), 0x42554855u, 0, 0, 0x20u);
  *((_QWORD *)DeviceExtension + 150) = SourceDevice;
  *((_QWORD *)DeviceExtension + 149) = TargetDevice;
  *((_QWORD *)DeviceExtension + 171) = Usbh_FDO_WaitPnpAdd;
  *((_QWORD *)DeviceExtension + 151) = v3;
  *((_QWORD *)DeviceExtension + 100) = DeviceExtension + 2936;
  *((_DWORD *)DeviceExtension + 340) = 1;
  *((_DWORD *)DeviceExtension + 685) = 1;
  KeInitializeEvent((PRKEVENT)(DeviceExtension + 2744), NotificationEvent, 0);
  KeInitializeSemaphore((PRKSEMAPHORE)DeviceExtension + 155, 1, 1);
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  *(__m128i *)(DeviceExtension + 1288) = si128;
  *(__m128i *)(DeviceExtension + 1268) = si128;
  KeInitializeSpinLock((PKSPIN_LOCK)DeviceExtension + 632);
  UsbhRawWait(Usbh_Long_AddDevice);
  UsbhAssignHubNumber(SourceDevice);
  UsbhLogAlloc(SourceDevice, DeviceExtension + 880, WPP_MAIN_CB.Dpc.TargetInfoAsUlong);
  v11 = SourceDevice;
  *((_QWORD *)DeviceExtension + 175) = SourceDevice;
  *((_QWORD *)DeviceExtension + 173) = 2017613128LL;
  *((_QWORD *)DeviceExtension + 174) = v11;
  *((_DWORD *)DeviceExtension + 374) = 1734964085;
  *((_DWORD *)DeviceExtension + 362) = 1734964085;
  *((_DWORD *)DeviceExtension + 358) = 1734964085;
  *((_DWORD *)DeviceExtension + 354) = 1734964085;
  *((_DWORD *)DeviceExtension + 365) = 1734964085;
  *((_DWORD *)DeviceExtension + 368) = 1734964085;
  *((_DWORD *)DeviceExtension + 371) = 1734964085;
  *((_DWORD *)DeviceExtension + 376) = 1734964085;
  *((_DWORD *)DeviceExtension + 384) = 0;
  v12 = SourceDevice;
  *((_QWORD *)DeviceExtension + 197) = SourceDevice;
  *((_QWORD *)DeviceExtension + 196) = v12;
  *((_QWORD *)DeviceExtension + 195) = 2017613128LL;
  *((_DWORD *)DeviceExtension + 418) = 1734964085;
  *((_DWORD *)DeviceExtension + 406) = 1734964085;
  *((_DWORD *)DeviceExtension + 402) = 1734964085;
  *((_DWORD *)DeviceExtension + 398) = 1734964085;
  *((_DWORD *)DeviceExtension + 409) = 1734964085;
  *((_DWORD *)DeviceExtension + 412) = 1734964085;
  *((_DWORD *)DeviceExtension + 415) = 1734964085;
  *((_DWORD *)DeviceExtension + 420) = 1734964085;
  v13 = SourceDevice;
  *((_QWORD *)DeviceExtension + 219) = SourceDevice;
  *((_QWORD *)DeviceExtension + 218) = v13;
  *((_DWORD *)DeviceExtension + 434) = 2017613128;
  *((_DWORD *)DeviceExtension + 435) = 4;
  *((_DWORD *)DeviceExtension + 462) = 1734964085;
  *((_DWORD *)DeviceExtension + 450) = 1734964085;
  *((_DWORD *)DeviceExtension + 446) = 1734964085;
  *((_DWORD *)DeviceExtension + 442) = 1734964085;
  *((_DWORD *)DeviceExtension + 453) = 1734964085;
  *((_DWORD *)DeviceExtension + 456) = 1734964085;
  *((_DWORD *)DeviceExtension + 459) = 1734964085;
  *((_DWORD *)DeviceExtension + 464) = 1734964085;
  v14 = SourceDevice;
  *((_QWORD *)DeviceExtension + 241) = SourceDevice;
  *((_DWORD *)DeviceExtension + 478) = 2017613128;
  *((_DWORD *)DeviceExtension + 479) = 5;
  *((_QWORD *)DeviceExtension + 240) = v14;
  *((_DWORD *)DeviceExtension + 506) = 1734964085;
  *((_DWORD *)DeviceExtension + 494) = 1734964085;
  *((_DWORD *)DeviceExtension + 490) = 1734964085;
  *((_DWORD *)DeviceExtension + 486) = 1734964085;
  *((_DWORD *)DeviceExtension + 497) = 1734964085;
  *((_DWORD *)DeviceExtension + 500) = 1734964085;
  *((_DWORD *)DeviceExtension + 503) = 1734964085;
  *((_DWORD *)DeviceExtension + 508) = 1734964085;
  v15 = SourceDevice;
  *((_QWORD *)DeviceExtension + 263) = SourceDevice;
  *((_QWORD *)DeviceExtension + 262) = v15;
  *((_DWORD *)DeviceExtension + 522) = 2017613128;
  *((_DWORD *)DeviceExtension + 523) = 6;
  *((_DWORD *)DeviceExtension + 550) = 1734964085;
  *((_DWORD *)DeviceExtension + 538) = 1734964085;
  *((_DWORD *)DeviceExtension + 534) = 1734964085;
  *((_DWORD *)DeviceExtension + 530) = 1734964085;
  *((_DWORD *)DeviceExtension + 541) = 1734964085;
  *((_DWORD *)DeviceExtension + 544) = 1734964085;
  *((_DWORD *)DeviceExtension + 547) = 1734964085;
  *((_DWORD *)DeviceExtension + 552) = 1734964085;
  v16 = SourceDevice;
  *((_QWORD *)DeviceExtension + 285) = SourceDevice;
  *((_QWORD *)DeviceExtension + 284) = v16;
  *((_DWORD *)DeviceExtension + 566) = 2017613128;
  *((_DWORD *)DeviceExtension + 567) = 8;
  *((_DWORD *)DeviceExtension + 594) = 1734964085;
  *((_DWORD *)DeviceExtension + 582) = 1734964085;
  *((_DWORD *)DeviceExtension + 578) = 1734964085;
  *((_DWORD *)DeviceExtension + 574) = 1734964085;
  *((_DWORD *)DeviceExtension + 585) = 1734964085;
  *((_DWORD *)DeviceExtension + 588) = 1734964085;
  *((_DWORD *)DeviceExtension + 591) = 1734964085;
  *((_DWORD *)DeviceExtension + 596) = 1734964085;
  IoRegisterShutdownNotification(SourceDevice);
  v17 = UsbhReferenceListOpen((__int64)SourceDevice);
  if ( v17 >= 0 )
  {
    v18 = FdoExt((__int64)SourceDevice);
    LOBYTE(v19) = 1;
    UsbhModuleDispatch(v19, v20, (_DWORD)SourceDevice, 0, 0LL, (__int64)(v18 + 346));
    SourceDevice->Flags |= 0x2000u;
    SourceDevice->Flags &= ~0x80u;
    v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
    *((_DWORD *)DeviceExtension + 314) = 1;
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v21);
    v22 = FdoExt((__int64)SourceDevice);
    v17 = Usbh_FDO_Pnp_State(v22 + 346, 1LL);
  }
  Log((__int64)SourceDevice, 2, 1749116004, 0LL, v17);
  if ( (v17 & 0xC0000000) == 0xC0000000 )
  {
    Log((__int64)SourceDevice, v25, 1749115937, v23, v24);
    UsbhReleaseHubNumber(SourceDevice);
    IoDetachDevice(v3);
    IoDeleteDevice(SourceDevice);
  }
  return (unsigned int)v17;
}
