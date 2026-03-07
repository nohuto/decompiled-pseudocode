__int64 __fastcall RawQueryFsSizeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  bool v5; // cf
  struct _DEVICE_OBJECT *v10; // rdi
  IRP *v11; // rax
  NTSTATUS Status; // ebx
  bool v13; // al
  LARGE_INTEGER v14; // r8
  IRP *v15; // rax
  NTSTATUS v16; // eax
  IRP *v17; // rax
  NTSTATUS v18; // eax
  unsigned __int64 v19; // rcx
  LONGLONG v20; // rax
  struct _KEVENT Event; // [rsp+50h] [rbp-49h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-31h] BYREF
  LARGE_INTEGER OutputBuffer; // [rsp+78h] [rbp-21h] BYREF
  LARGE_INTEGER Timeout[2]; // [rsp+80h] [rbp-19h] BYREF
  __int64 v25; // [rsp+90h] [rbp-9h]
  LARGE_INTEGER v26; // [rsp+98h] [rbp-1h] BYREF
  LARGE_INTEGER v27; // [rsp+A0h] [rbp+7h]
  __int128 v28; // [rsp+A8h] [rbp+Fh]

  v26.QuadPart = 0LL;
  OutputBuffer.QuadPart = 0LL;
  v5 = *a4 < 0x18u;
  v25 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  *(_OWORD *)&Timeout[0].LowPart = 0LL;
  v28 = 0LL;
  if ( v5 )
    return 2147483653LL;
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = *(struct _DEVICE_OBJECT **)(*(_QWORD *)(a1 + 192) + 16LL);
  v11 = IoBuildDeviceIoControlRequest(0x70000u, v10, 0LL, 0, Timeout, 0x18u, 0, &Event, &IoStatusBlock);
  if ( !v11 )
    goto LABEL_25;
  Status = IofCallDriver(v10, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( (v10->Characteristics & 4) != 0 )
    {
      v13 = 0;
      v14.QuadPart = 0LL;
      v27.QuadPart = 0LL;
LABEL_21:
      v19 = HIDWORD(v25);
      *(_DWORD *)(a3 + 20) = HIDWORD(v25);
      *(_DWORD *)(a3 + 16) = 1;
      if ( v13 )
        v20 = v14.QuadPart / v19;
      else
        v20 = Timeout[0].QuadPart * Timeout[1].HighPart * (int)v25;
      *(_QWORD *)(a3 + 8) = v20;
      *(_QWORD *)a3 = v20;
      *a4 -= 24;
      Status = 0;
      goto LABEL_26;
    }
    KeResetEvent(&Event);
    v15 = IoBuildDeviceIoControlRequest(0x7405Cu, v10, 0LL, 0, &OutputBuffer, 8u, 0, &Event, &IoStatusBlock);
    if ( v15 )
    {
      v16 = IofCallDriver(v10, v15);
      if ( v16 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v16 = IoStatusBlock.Status;
      }
      v14 = OutputBuffer;
      v27 = OutputBuffer;
      if ( v16 >= 0 )
      {
        v13 = 1;
        goto LABEL_21;
      }
      KeResetEvent(&Event);
      v17 = IoBuildDeviceIoControlRequest(0x74004u, v10, 0LL, 0, &v26, 0x20u, 0, &Event, &IoStatusBlock);
      if ( v17 )
      {
        v18 = IofCallDriver(v10, v17);
        if ( v18 == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v18 = IoStatusBlock.Status;
        }
        v14 = v27;
        v13 = v18 >= 0;
        goto LABEL_21;
      }
    }
LABEL_25:
    Status = -1073741670;
    goto LABEL_26;
  }
  *a4 = 0;
LABEL_26:
  RawEndOperation(a1, a2);
  return (unsigned int)Status;
}
