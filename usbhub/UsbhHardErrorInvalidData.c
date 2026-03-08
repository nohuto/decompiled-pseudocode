/*
 * XREFs of UsbhHardErrorInvalidData @ 0x1C004CED0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhHardErrorInvalidData(__int64 a1, __int64 a2)
{
  int v5; // [rsp+28h] [rbp-30h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x17u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v5);
  }
  Log(a1, 1024, 1883852374, a2, 0LL);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhException(a1, *(_WORD *)(a2 + 4), 0x3Eu, (const void *)a2, 0xB70u, -1, -1, usbfile_busfunc_c, 1127, 0);
  return 3LL;
}
