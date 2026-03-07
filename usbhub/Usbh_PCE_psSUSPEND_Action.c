void __fastcall Usbh_PCE_psSUSPEND_Action(__int64 a1, __int64 a2, char a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  KIRQL v9; // dl
  __int64 v10; // rcx
  KIRQL NewIrql; // [rsp+58h] [rbp+10h] BYREF

  NewIrql = 0;
  FdoExt(a1);
  Log(a1, 512, 825782320, a2, *(unsigned __int16 *)(a2 + 4));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      47,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  UsbhLockPcqWithTag(a1, a2, 18, (unsigned int)&NewIrql, 0);
  UsbhFlushPortChangeQueue(a1, a2);
  Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
  v8 = *(_DWORD *)(a2 + 12);
  v9 = NewIrql;
  v10 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v10 + a2 + 1384) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v9);
}
