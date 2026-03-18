/*
 * XREFs of UsbhInitializeDevice @ 0x1C001E90C
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C00015D0 (UsbhUnlinkPdoDeviceHandle.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     __security_check_cookie @ 0x1C001F330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001F800 (memset.c)
 *     UsbhWait @ 0x1C002D834 (UsbhWait.c)
 *     UsbhClearTt @ 0x1C003664C (UsbhClearTt.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005AF58 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhInitializeDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // rax
  unsigned int v9; // edi
  int v11[24]; // [rsp+50h] [rbp-98h] BYREF

  v6 = PdoExt(a2);
  FdoExt(a1);
  Log(a1, 4, 1768843588, *((_QWORD *)v6 + 145), *(unsigned __int16 *)(a3 + 4));
  memset(&v11[1], 0, 0x54uLL);
  if ( (FdoExt(a1)[640] & 0x8000000) != 0 )
    UsbhWait(a1, 50LL);
  v11[0] = 1;
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( *((_QWORD *)v8 + 533) )
  {
    v9 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, int *))v8 + 533))(
           *((_QWORD *)v8 + 529),
           *((_QWORD *)v7 + 145),
           v11);
    if ( (v9 & 0xC0000000) != 0xC0000000 )
      goto LABEL_5;
  }
  else
  {
    v9 = -1073741822;
  }
  if ( v11[1] == 1 )
  {
    v6[705] = 1073807361;
  }
  else if ( v11[1] == 3 )
  {
    v6[705] = v11[2] != 0 ? 1073807365 : 1073807360;
  }
  UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740856, 0);
  UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 31, (int)v11, 88, v9, v11[5], usbfile_bus_c, 6513, 0);
  UsbhEtwLogHubEventWithExtraData(
    a1,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_FAILURE,
    *(unsigned __int16 *)(a3 + 4),
    v11,
    88);
  UsbhClearTt(a1);
LABEL_5:
  v6[355] &= ~0x40000000u;
  return v9;
}
