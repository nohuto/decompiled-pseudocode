void __fastcall Usbh_PCE_SD_Resume_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // [rsp+28h] [rbp-20h]
  KIRQL v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0;
  FdoExt(a1);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x30u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v11,
      a3);
  }
  v8 = UsbhLockPcqWithTag(a1, a2, 13, &v12, 0);
  if ( v8 == 1 || v8 == 6 )
  {
    Log(a1, 512, 825782321, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhFlushPortChangeQueue(a1, a2);
    v10 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v10 + a2 + 1384) = 2;
    UsbhSetPcqEventStatus(a1, a2, 2LL, 10);
    KeResetEvent((PRKEVENT)(a2 + 472));
  }
  else
  {
    v9 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v8;
    *(_DWORD *)(v9 + a2 + 1384) = v8;
  }
  UsbhUnlockPcqWithTag(a1, a2, v12);
}
