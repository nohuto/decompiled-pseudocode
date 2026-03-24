/*
 * XREFs of UsbhCloseDeviceConfiguration @ 0x1C0054120
 * Callers:
 *     UsbhPdoPnp_StopDevice @ 0x1C00577B0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memset @ 0x1C001E180 (memset.c)
 */

__int64 __fastcall UsbhCloseDeviceConfiguration(__int64 a1, __int64 a2, _DWORD *a3)
{
  PDEVICE_OBJECT *v5; // rbp
  _DWORD *v6; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdi
  PIRP v9; // rax
  unsigned int Status; // ebx
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  PoolWithTag = ExAllocatePoolWithTag(SHIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory), 0x58uLL, 0x42554855u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x58uLL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = IoBuildDeviceIoControlRequest(0x220003u, v5[152], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v9 )
  {
    *(_DWORD *)v8 = 88;
    v8[1] = *((_QWORD *)v6 + 145);
    v8[3] = 0LL;
    v9->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v8;
    v11 = IofCallDriver(v5[152], v9);
    Status = v11;
    if ( v11 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    else
    {
      IoStatusBlock.Status = v11;
    }
    if ( a3 )
      *a3 = *((_DWORD *)v8 + 1);
  }
  else
  {
    Status = -1073741670;
  }
  ExFreePoolWithTag(v8, 0);
  return Status;
}
