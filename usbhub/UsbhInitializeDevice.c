__int64 __fastcall UsbhInitializeDevice(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edi
  int v11[24]; // [rsp+60h] [rbp-98h] BYREF

  v6 = PdoExt(a2);
  FdoExt(a1);
  Log(a1, 4, 1768843588, *(_QWORD *)(v6 + 1160), *(unsigned __int16 *)(a3 + 4));
  memset(&v11[1], 0, 0x54uLL);
  if ( (*(_DWORD *)(FdoExt(a1) + 2560) & 0x8000000) != 0 )
    UsbhWait(a1, 50LL);
  v11[0] = 1;
  v7 = PdoExt(a2);
  v8 = FdoExt(a1);
  if ( *(_QWORD *)(v8 + 4264) )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v8 + 4264))(
           *(_QWORD *)(v8 + 4232),
           *(_QWORD *)(v7 + 1160),
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
    *(_DWORD *)(v6 + 2820) = 1073807361;
  }
  else if ( v11[1] == 3 )
  {
    *(_DWORD *)(v6 + 2820) = v11[2] != 0 ? 1073807365 : 1073807360;
  }
  UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740856LL, 0LL);
  UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 31, (int)v11, 88, v9, v11[5], usbfile_bus_c, 6513, 0);
  UsbhEtwLogHubEventWithExtraData(
    a1,
    &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_FAILURE,
    *(unsigned __int16 *)(a3 + 4),
    v11,
    88);
  UsbhClearTt(a1);
LABEL_5:
  *(_DWORD *)(v6 + 1420) &= ~0x40000000u;
  return v9;
}
