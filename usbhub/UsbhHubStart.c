__int64 __fastcall UsbhHubStart(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  int v5; // edi
  __int64 inited; // rdi
  _DWORD *v7; // rax
  __int64 *v8; // rbx
  int v9; // r10d
  int v10; // r8d
  __int64 v12; // [rsp+28h] [rbp-30h]

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        Log(*(_QWORD *)(a1 + 8), 2, 1919243092, 0LL, 0LL);
        LODWORD(inited) = UsbhReinitialize(*(_QWORD *)(a1 + 8), a1);
        if ( (int)inited >= 0 )
          LODWORD(inited) = UsbhFdoSetD0Cold(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 0);
      }
      else
      {
        LODWORD(inited) = -1073741823;
      }
    }
    else
    {
      v7 = FdoExt(*(_QWORD *)(a1 + 8));
      v8 = (__int64 *)(v7 + 390);
      Log(*((_QWORD *)v7 + 196), 2, 1635341140, 0LL, (__int64)(v7 + 390));
      LODWORD(inited) = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v8, File, 1u, 0x20u);
      if ( (inited & 0xC0000000) != 0xC0000000 )
      {
        Log(v8[1], 8, 1700023634, *((_QWORD *)v4 + 346), 0LL);
        UsbhEnableTimerObject(v8[1], *((_QWORD *)v4 + 346), 1000, 0, (__int64)v8, 0x49577473u);
        inited = (int)Usbh_HubRootHubInitNotification(v8[1], (__int64)v8, (__int64)UsbhInitCallback);
        Log(v8[1], 8, 1919445358, inited, 0LL);
        if ( (inited & 0xC0000000) == 0xC0000000 && (_DWORD)inited != -1073741536 )
        {
          Log(v8[1], v9, 2018790738, *((_QWORD *)v4 + 346), 0LL);
          UsbhDisableTimerObject(v8[1], *((_QWORD *)v4 + 346));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v12) = inited;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0xEu,
              (__int64)&WPP_9b0a5a2624623ceb7c2c6a1dede7f127_Traceguids,
              v12);
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v8, 0x20u);
        }
      }
    }
  }
  else
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1937331028, 0LL, 0LL);
    LODWORD(inited) = UsbhFinishStart(*(_QWORD *)(a1 + 8), a1);
    v10 = 5;
    if ( (int)inited < 0 )
      v10 = 9;
    UsbhDispatch_BusEvent(*(_QWORD *)(a1 + 8), a1, v10);
  }
  return (unsigned int)inited;
}
