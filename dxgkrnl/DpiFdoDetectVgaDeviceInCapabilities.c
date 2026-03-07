__int64 __fastcall DpiFdoDetectVgaDeviceInCapabilities(__int64 a1)
{
  __int64 v1; // rdi
  PIRP v2; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // eax
  NTSTATUS v6; // eax
  struct _KEVENT Event; // [rsp+40h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  _DWORD v9[16]; // [rsp+70h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v1 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v2 )
  {
    memset(v9, 0, sizeof(v9));
    v2->IoStatus.Information = 0LL;
    v2->IoStatus.Status = -1073741637;
    v9[3] = -1;
    v9[2] = -1;
    CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
    v9[0] = 65600;
    CurrentStackLocation[-1].MinorFunction = 9;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v9;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v1 + 152), v2);
    if ( Status == 259 )
    {
      v6 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( v6 )
        WdLogSingleEntry1(2LL, v6);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
      return (v9[1] & 0x400000) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    WdLogSingleEntry1(6LL, -1073741670LL);
  }
  return 3221225473LL;
}
