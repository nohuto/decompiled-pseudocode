__int64 __fastcall UsbhCloseDeviceConfiguration(__int64 a1, __int64 a2, _DWORD *a3)
{
  PDEVICE_OBJECT *v5; // rbp
  _DWORD *v6; // rbx
  _QWORD *Pool2; // rdi
  PIRP v9; // rax
  unsigned int Status; // ebx
  NTSTATUS v11; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 88LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v9 = IoBuildDeviceIoControlRequest(0x220003u, v5[152], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( v9 )
  {
    *(_DWORD *)Pool2 = 88;
    Pool2[1] = *((_QWORD *)v6 + 145);
    Pool2[3] = 0LL;
    v9->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
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
      *a3 = *((_DWORD *)Pool2 + 1);
  }
  else
  {
    Status = -1073741670;
  }
  ExFreePoolWithTag(Pool2, 0);
  return Status;
}
