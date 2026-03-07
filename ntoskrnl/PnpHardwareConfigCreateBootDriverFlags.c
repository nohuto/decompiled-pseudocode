__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  _DWORD *Pool2; // rdi
  int Status; // ebx
  __int64 v6; // rcx
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  unsigned int v23; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v24[3]; // [rsp+54h] [rbp-45h] BYREF
  int v25; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v26; // [rsp+64h] [rbp-35h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  int v28; // [rsp+70h] [rbp-29h] BYREF
  ULONG OutputBuffer[2]; // [rsp+78h] [rbp-21h] BYREF
  HANDLE KeyHandle; // [rsp+80h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-1h] BYREF
  __int64 InputBuffer; // [rsp+C8h] [rbp+2Fh] BYREF
  int v34; // [rsp+D0h] [rbp+37h]

  *(_QWORD *)OutputBuffer = 0LL;
  v23 = 0;
  Pool2 = 0LL;
  InputBuffer = 0LL;
  v34 = 0;
  v25 = 0;
  v28 = 0;
  *(_QWORD *)&v24[1] = 0LL;
  v26 = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a2 )
    return (unsigned int)-1073741811;
  Status = PipHardwareConfigOpenKey(a1, 131097LL, &Handle);
  if ( Status >= 0 )
  {
    v24[0] = 4;
    Status = RegRtlQueryValue(Handle, L"BootDriverFlags", &v25, &v28, v24);
    if ( Status == -1073741772 )
    {
      v34 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      Status = ZwCreateEvent((PHANDLE)&v24[1], 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( Status >= 0 )
      {
        Status = ZwDeviceIoControlFile(
                   a2,
                   *(HANDLE *)&v24[1],
                   0LL,
                   0LL,
                   &IoStatusBlock,
                   0x2D1400u,
                   &InputBuffer,
                   0xCu,
                   OutputBuffer,
                   8u);
        if ( Status == 259 )
        {
          Status = ZwWaitForSingleObject(*(HANDLE *)&v24[1], 0, 0LL);
          if ( Status < 0 )
            goto LABEL_4;
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(256LL, OutputBuffer[1], 1852403792LL);
          if ( !Pool2 )
          {
            Status = -1073741670;
            goto LABEL_4;
          }
          ZwResetEvent(*(__int64 *)&v24[1], 0LL);
          Status = ZwDeviceIoControlFile(
                     a2,
                     *(HANDLE *)&v24[1],
                     0LL,
                     0LL,
                     &IoStatusBlock,
                     0x2D1400u,
                     &InputBuffer,
                     0xCu,
                     Pool2,
                     OutputBuffer[1]);
          if ( Status == 259 )
          {
            Status = ZwWaitForSingleObject(*(HANDLE *)&v24[1], 0, 0LL);
            if ( Status < 0 )
              goto LABEL_4;
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
            goto LABEL_4;
          v6 = 0LL;
          if ( *(_QWORD *)&PiPnpRtlCtx )
            v6 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
          Status = SysCtxRegOpenKey(
                     v6,
                     2147483650LL,
                     (__int64)L"System\\CurrentControlSet\\Control",
                     0,
                     1u,
                     (__int64)&KeyHandle);
          if ( Status < 0 )
            goto LABEL_4;
          v24[0] = 4;
          Status = RegRtlQueryValue(KeyHandle, L"BootDriverFlags", &v25, &v26, v24);
          if ( Status < 0 )
            goto LABEL_4;
          v7 = v26 & 0xFFFFFFE3;
          v23 = v26 & 0xFFFFFFE3;
          v8 = Pool2[7];
          if ( v8 > 10 )
          {
            v17 = v8 - 11;
            if ( !v17 )
              goto LABEL_51;
            v18 = v17 - 1;
            if ( !v18 )
            {
              v16 = v7 | 8;
              goto LABEL_50;
            }
            v19 = v18 - 1;
            if ( !v19 )
            {
              v16 = v7 | 0x1C;
              goto LABEL_50;
            }
            v20 = v19 - 1;
            if ( !v20 )
              goto LABEL_47;
            v21 = v20 - 1;
            if ( !v21 )
              goto LABEL_47;
            v22 = v21 - 1;
            if ( !v22 )
              goto LABEL_47;
            v15 = v22 - 1;
            if ( !v15 )
            {
LABEL_51:
              Status = RegRtlSetValue(Handle, L"BootDriverFlags", 4u, &v23, 4u);
              goto LABEL_4;
            }
          }
          else
          {
            if ( v8 == 10 )
              goto LABEL_51;
            v9 = v8 - 1;
            if ( !v9 )
              goto LABEL_51;
            v10 = v9 - 1;
            if ( !v10 )
              goto LABEL_51;
            v11 = v10 - 1;
            if ( !v11 )
              goto LABEL_51;
            v12 = v11 - 1;
            if ( !v12 )
              goto LABEL_51;
            v13 = v12 - 1;
            if ( !v13 )
              goto LABEL_51;
            v14 = v13 - 1;
            if ( !v14 )
              goto LABEL_51;
            v15 = v14 - 1;
            if ( !v15 )
            {
              v16 = v7 | 0x14;
LABEL_50:
              v23 = v16;
              goto LABEL_51;
            }
          }
          if ( (unsigned int)(v15 - 1) >= 2 )
          {
LABEL_47:
            v23 = v26;
            goto LABEL_51;
          }
          goto LABEL_51;
        }
      }
    }
  }
LABEL_4:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( *(_QWORD *)&v24[1] )
    ZwClose(*(HANDLE *)&v24[1]);
  return (unsigned int)Status;
}
