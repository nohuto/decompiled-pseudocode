/*
 * XREFs of UsbhInitialize @ 0x1C002CE20
 * Callers:
 *     <none>
 * Callees:
 *     UsbhSyncSendInternalIoctl @ 0x1C0004A70 (UsbhSyncSendInternalIoctl.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhConfigureUsbHub @ 0x1C0029DB0 (UsbhConfigureUsbHub.c)
 *     UsbhGetExtendedHubInformation @ 0x1C002BEBC (UsbhGetExtendedHubInformation.c)
 *     UsbhGetHubClassDescriptor @ 0x1C002C09C (UsbhGetHubClassDescriptor.c)
 *     UsbhGetHubCount @ 0x1C002C420 (UsbhGetHubCount.c)
 *     UsbhGetHubDeviceInformation @ 0x1C002C4A8 (UsbhGetHubDeviceInformation.c)
 *     UsbhGetHubPowerStatus @ 0x1C002C868 (UsbhGetHubPowerStatus.c)
 *     UsbhGetTopOfBusStack @ 0x1C002CD18 (UsbhGetTopOfBusStack.c)
 *     UsbhInitializeTtHub @ 0x1C002D268 (UsbhInitializeTtHub.c)
 *     UsbhIsHighSpeedCapable @ 0x1C002D368 (UsbhIsHighSpeedCapable.c)
 *     UsbhLogStartFailure @ 0x1C002D464 (UsbhLogStartFailure.c)
 *     UsbhWait @ 0x1C002E204 (UsbhWait.c)
 *     Usbh_UsbdQueryContollerType @ 0x1C002E45C (Usbh_UsbdQueryContollerType.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     UsbhCheckHubErrata @ 0x1C005182C (UsbhCheckHubErrata.c)
 *     UsbhRegisterPowerCallback @ 0x1C00591B0 (UsbhRegisterPowerCallback.c)
 *     UsbhQueryParentHubConfig @ 0x1C005A8D8 (UsbhQueryParentHubConfig.c)
 */

__int64 __fastcall UsbhInitialize(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  unsigned int v3; // r14d
  _DWORD *v5; // rbx
  unsigned int TopOfBusStack; // esi
  char *Src; // rax
  int v8; // r9d
  unsigned int v10; // ecx
  unsigned int v11; // ebp
  unsigned int v12; // r10d
  int v13; // r11d
  EVENT_TYPE v14; // ebp
  __int32 v15; // ecx
  __int32 v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  _DWORD *v19; // rax
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0;
  v3 = 0;
  v5 = FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 8, 1749634633, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      44,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  TopOfBusStack = UsbhGetTopOfBusStack((__int64)DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetRootHubPdo";
    v8 = 5505;
    goto LABEL_6;
  }
  TopOfBusStack = UsbhGetHubCount((__int64)DeviceObject, &v20);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubCount";
    v8 = 5516;
    goto LABEL_6;
  }
  if ( v20 > 6 )
  {
    UsbhLogStartFailure(
      (int)DeviceObject,
      -1073741823,
      7,
      5523,
      (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
      "hubCount > 6");
    return 3221225473LL;
  }
  TopOfBusStack = UsbhGetHubDeviceInformation((__int64)DeviceObject, a2);
  if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
  {
    Src = "GetHubDeviceInformation";
    v8 = 5533;
    goto LABEL_6;
  }
  if ( v5[633] == 1 )
  {
    if ( v5[634] == 2 )
      v5[640] |= 0x40u;
    if ( (unsigned __int8)UsbhIsHighSpeedCapable(DeviceObject) )
      v5[640] |= 0x8000u;
  }
  UsbhCheckHubErrata(v5);
  TopOfBusStack = UsbhConfigureUsbHub((__int64)DeviceObject);
  if ( (TopOfBusStack & 0xC0000000) != 0xC0000000 )
  {
    do
    {
      TopOfBusStack = UsbhGetHubClassDescriptor((__int64)DeviceObject, v5 + 734);
      if ( Usb_Disconnected(TopOfBusStack) )
        return TopOfBusStack;
      v11 = v10 >> 30;
      if ( v10 >> 30 == 3 && v3 > 3 )
      {
        Src = "GetHubClassDescriptor";
        v8 = 5585;
        goto LABEL_6;
      }
      if ( v3 )
        UsbhWait(DeviceObject, 10LL);
      ++v3;
    }
    while ( v11 == 3 );
    Log(
      (__int64)DeviceObject,
      8,
      1749634633,
      *(unsigned __int16 *)((char *)v5 + 2939),
      *((unsigned __int16 *)v5 + 1276));
    v14 = v13 - 7;
    if ( *((_WORD *)v5 + 1271) >= 0x200u )
    {
      if ( ((unsigned __int8)v12 & (unsigned __int8)v14) != 0 )
        *((_BYTE *)v5 + 3007) = v14;
      if ( ((unsigned __int8)v12 & (unsigned __int8)v13) != 0 )
        *((_BYTE *)v5 + 3009) = v14;
      if ( (v12 & 0x80u) != 0 )
        *((_BYTE *)v5 + 3008) = v14;
      if ( (v5[640] & 0x40) != 0 )
      {
        if ( ((v12 >> 5) & 3) != 0 )
        {
          v15 = ((v12 >> 5) & 3) - v14;
          if ( !v15 )
          {
            v5[753] = 16;
            goto LABEL_44;
          }
          v16 = v15 - v14;
          if ( !v16 )
          {
            v5[753] = 24;
            goto LABEL_44;
          }
          if ( v16 == v14 )
          {
            v5[753] = 32;
            goto LABEL_44;
          }
        }
        v5[753] = v13;
      }
    }
LABEL_44:
    UsbhGetHubPowerStatus((__int64)DeviceObject);
    if ( (v5[640] & 0x40) != 0 )
    {
      TopOfBusStack = UsbhInitializeTtHub(DeviceObject, a2);
      if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
      {
        Src = "InitializeTtHub";
        v8 = 5653;
        goto LABEL_6;
      }
    }
    TopOfBusStack = UsbhGetExtendedHubInformation((__int64)DeviceObject);
    if ( (TopOfBusStack & 0xC0000000) == 0xC0000000 )
    {
      Src = "Get Port attributes";
      v8 = 5664;
      goto LABEL_6;
    }
    Usbh_UsbdQueryContollerType(DeviceObject);
    v17 = v5[640];
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) )
      v18 = v17 & 0xFFEFFFFF;
    else
      v18 = v17 | 0x100000;
    v5[640] = v18;
    FdoExt((__int64)DeviceObject)[1053] = v14;
    FdoExt((__int64)DeviceObject)[1052] = v14;
    v5[1043] = 201;
    KeInitializeSpinLock((PKSPIN_LOCK)v5 + 522);
    *((_BYTE *)v5 + 4184) = 0;
    *((_QWORD *)v5 + 525) = v5 + 1048;
    *((_QWORD *)v5 + 524) = v5 + 1048;
    KeInitializeEvent((PRKEVENT)v5 + 204, NotificationEvent, v14);
    KeInitializeEvent((PRKEVENT)v5 + 205, v14, v14);
    v5[1221] = v14;
    UsbhQueryParentHubConfig(DeviceObject);
    v19 = FdoExt((__int64)DeviceObject);
    UsbhSyncSendInternalIoctl((__int64)DeviceObject, 0x22043Fu, (unsigned __int64)(v19 + 1298), 0LL);
    v5[1314] = dword_1C006B6D0;
    UsbhRegisterPowerCallback(DeviceObject);
    v5[640] |= 0x40000000u;
    return TopOfBusStack;
  }
  Src = "ConfigureUsbHub";
  v8 = 5566;
LABEL_6:
  UsbhLogStartFailure(
    (int)DeviceObject,
    TopOfBusStack,
    3,
    v8,
    (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\hub.c",
    Src);
  return TopOfBusStack;
}
