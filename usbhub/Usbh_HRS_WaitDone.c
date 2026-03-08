/*
 * XREFs of Usbh_HRS_WaitDone @ 0x1C003DDA0
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x1C001EC80 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhReleaseResetLock @ 0x1C0031DCC (UsbhReleaseResetLock.c)
 */

__int64 __fastcall Usbh_HRS_WaitDone(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v3 = a2;
  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  FdoExt(*(_QWORD *)(a1 + 8));
  v5 = *(_DWORD *)(a1 + 68);
  Log(*(_QWORD *)(a1 + 8), 16, 1920160085, a1, v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = v3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_ba2e62575cae3d6a8bb98b5a8ed3568a_Traceguids,
      v8);
  }
  if ( (_DWORD)v3 == 4 || (_DWORD)v3 == 7 )
  {
    v6 = UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, 1u);
    KeSetEvent((PRKEVENT)(v4 + 712), 0, 0);
  }
  else
  {
    return (unsigned int)UsbhReleaseResetLock(*(_QWORD *)(a1 + 8), a1, v5);
  }
  return v6;
}
