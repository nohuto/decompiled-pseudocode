__int64 __fastcall UsbhDispatch_BusEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  _DWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r15
  char v11; // cl
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    goto LABEL_33;
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  if ( a3 == 3 )
    UsbhSshBusBusy(a1, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_c14d5bcd548e31c8cc373c847eff1ef0_Traceguids,
      v3);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
      *(_DWORD *)v8 = 724267874;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a2;
      *(_QWORD *)(v8 + 24) = v3;
    }
  }
  v9 = *(_QWORD *)(a1 + 64);
  if ( !v9 )
LABEL_33:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeWaitForSingleObject((PVOID)(v9 + 2448), Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 76) = 2020889410;
  *(_DWORD *)(a2 + 84) = v3;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  v10 = *(int *)(v9 + 2440);
  *(_DWORD *)(a2 + 80) = v10;
  v11 = *(_DWORD *)(v9 + 832) + 1;
  *(_QWORD *)(v9 + 1336) = a2;
  v12 = v11 & 7;
  *(_DWORD *)(v9 + 832) = v12;
  v12 *= 32LL;
  *(_DWORD *)(v12 + v9 + 540) = v3;
  *(_DWORD *)(v12 + v9 + 544) = *(_DWORD *)(v9 + 2440);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      v14 = *(_QWORD *)(v13 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
      *(_DWORD *)v14 = 757953378;
      *(_QWORD *)(v14 + 8) = 0LL;
      *(_QWORD *)(v14 + 16) = a2;
      *(_QWORD *)(v14 + 24) = v10;
    }
  }
  switch ( (_DWORD)v10 )
  {
    case 4:
      return Usbh_BS_BusPause(a1, a2, (unsigned int)v3);
    case 3:
      return Usbh_BS_BusRun(a1, a2, (unsigned int)v3);
    case 1:
      return Usbh_BS_BusInit(a1, a2, (unsigned int)v3);
    case 2:
      return Usbh_BS_BusStop(a1, a2, (unsigned int)v3);
    case 5:
      return Usbh_BS_BusSuspend(a1, a2, (unsigned int)v3);
    case 6:
      return Usbh_BS_BusRemove(a1, a2, (unsigned int)v3);
  }
  UsbhReleaseBusStateLock(a1, a2, (unsigned int)v10);
  return (unsigned int)v10;
}
