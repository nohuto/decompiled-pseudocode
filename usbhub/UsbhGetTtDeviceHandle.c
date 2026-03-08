/*
 * XREFs of UsbhGetTtDeviceHandle @ 0x1C0038740
 * Callers:
 *     UsbhCreateDevice @ 0x1C0002364 (UsbhCreateDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetTtDeviceHandle(__int64 a1, __int64 *a2, __int64 a3, _NAMED_PIPE_CREATE_PARAMETERS *a4)
{
  PDEVICE_OBJECT *v8; // rbp
  __int64 v9; // r9
  PIRP v11; // rax
  IRP *v12; // rdx
  _IO_STACK_LOCATION *v13; // rax
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v8 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 4, 1735682096, (__int64)a2, a3);
  if ( ((_DWORD)v8[320] & 1) != 0 )
  {
    Log(a1, 4, 1735682097, v9, 0LL);
    *a2 = 0LL;
    return 0LL;
  }
  else
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoBuildDeviceIoControlRequest(0x22043Bu, v8[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11->Tail.Overlay.CurrentStackLocation - 1;
      if ( !v13 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      v13->Parameters.WMI.ProviderId = (unsigned __int64)a2;
      v13->Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)a3;
      v13->Parameters.CreatePipe.Parameters = a4;
      Status = IofCallDriver(v8[151], v12);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      else
      {
        IoStatusBlock.Status = Status;
      }
      Log(a1, 4, 1735682136, *a2, Status);
      return (unsigned int)IoStatusBlock.Status;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
