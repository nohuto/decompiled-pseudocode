/*
 * XREFs of UsbhQueryParentHubConfig @ 0x1C005B6A8
 * Callers:
 *     UsbhInitialize @ 0x1C002D870 (UsbhInitialize.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhFreeID @ 0x1C0051094 (UsbhFreeID.c)
 *     UsbhPropagateUxdState @ 0x1C005B5AC (UsbhPropagateUxdState.c)
 */

__int64 __fastcall UsbhQueryParentHubConfig(__int64 a1)
{
  PDEVICE_OBJECT *v2; // rbx
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  PIRP v5; // rax
  NTSTATUS v6; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  v2 = (PDEVICE_OBJECT *)FdoExt(a1);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0xCCuLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag + 2, 0, 0xC4uLL);
  *v4 = 1;
  v4[1] = 204;
  v5 = IoBuildDeviceIoControlRequest(0x22044Fu, v2[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v4;
    v6 = IofCallDriver(v2[151], v5);
    if ( v6 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v6 = 0;
    }
    if ( v6 >= 0 && IoStatusBlock.Status >= 0 && (v4[33] & 1) != 0 )
      UsbhPropagateUxdState(a1, v4 + 34);
    UsbhFreeID((__int64)(v4 + 7));
    UsbhFreeID((__int64)(v4 + 3));
    UsbhFreeID((__int64)(v4 + 11));
  }
  else
  {
    v6 = -1073741670;
  }
  ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
