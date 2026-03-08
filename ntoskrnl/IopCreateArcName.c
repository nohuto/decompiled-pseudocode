/*
 * XREFs of IopCreateArcName @ 0x14086D7D8
 * Callers:
 *     IoCreateArcName @ 0x14086D7C0 (IoCreateArcName.c)
 *     IopCreateArcNamesDisk @ 0x140B54B24 (IopCreateArcNamesDisk.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x1403891CC (IopCreateUnicodeFromAnsiBuffer.c)
 *     RtlStringCchPrintfA @ 0x140389204 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     IopBuildSynchronousFsdRequest @ 0x1407F8DE0 (IopBuildSynchronousFsdRequest.c)
 *     IopVerifyDiskSignature @ 0x1408607B0 (IopVerifyDiskSignature.c)
 *     IoCreateSymbolicLink @ 0x14086DC10 (IoCreateSymbolicLink.c)
 *     VhdiVerifyBootDisk @ 0x140A70CE0 (VhdiVerifyBootDisk.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateArcName(PDEVICE_OBJECT DeviceObject, int a2)
{
  void *v3; // r12
  int v4; // r15d
  _DWORD *Pool2; // rsi
  __int64 v6; // rax
  __int64 OutputBufferLength; // rdi
  IRP *v8; // rbx
  NTSTATUS Status; // ebx
  IRP *v10; // rbx
  unsigned int v11; // eax
  __int64 i; // rdx
  IRP *v13; // rbx
  char v14; // bl
  __int64 v15; // rdi
  __int64 *v16; // r11
  const wchar_t *v18; // r8
  const char *v19; // r15
  int v20; // edi
  unsigned int v21; // r14d
  void *v22; // rax
  __int64 v23; // rax
  IRP *v24; // rbx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  char v27; // al
  bool v28; // zf
  unsigned __int8 *v29; // rcx
  __int64 v30; // r8
  int v31; // edx
  int v32; // eax
  PVOID OutputBuffer; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h] BYREF
  int v42; // [rsp+C0h] [rbp-40h]
  char v43[64]; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t pszDest[64]; // [rsp+110h] [rbp+10h] BYREF

  v41 = 0LL;
  v42 = 0;
  v3 = 0LL;
  v40 = 0LL;
  v4 = 0;
  Pool2 = 0LL;
  v6 = IoArcTableListHead;
  LODWORD(OutputBufferLength) = 4096;
  SymbolicLinkName = 0LL;
  DestinationString = 0LL;
  v39 = 0LL;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  while ( 1 )
  {
    if ( (__int64 *)v6 == &IoArcTableListHead )
    {
      if ( a2 == -1 )
      {
        v8 = IoBuildDeviceIoControlRequest(0x2D1080u, DeviceObject, 0LL, 0, &v41, 0xCu, 0, &Object, &IoStatusBlock);
        if ( !v8 )
          return (unsigned int)-1073741670;
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v8);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
      }
      else
      {
        HIDWORD(v41) = a2;
      }
      v10 = IoBuildDeviceIoControlRequest(0x70000u, DeviceObject, 0LL, 0, &v39, 0x18u, 0, &Object, &IoStatusBlock);
      if ( v10 )
      {
        KeInitializeEvent(&Object, NotificationEvent, 0);
        Status = IofCallDriver(DeviceObject, v10);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status < 0 )
          return (unsigned int)Status;
        v11 = HIDWORD(v40);
        if ( HIDWORD(v40) < 0x200 )
          v11 = 512;
        v28 = DeviceObject->DeviceType == 2;
        HIDWORD(v40) = v11;
        if ( !v28 )
        {
          for ( i = 4096LL; ; i = OutputBufferLength )
          {
            Pool2 = (_DWORD *)ExAllocatePool2(64LL, i, 1866624841LL);
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            v13 = IoBuildDeviceIoControlRequest(
                    0x70050u,
                    DeviceObject,
                    0LL,
                    0,
                    Pool2,
                    OutputBufferLength,
                    0,
                    &Object,
                    &IoStatusBlock);
            if ( !v13 )
            {
              Status = -1073741670;
              goto LABEL_36;
            }
            KeResetEvent(&Object);
            Status = IofCallDriver(DeviceObject, v13);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status != -1073741789 )
              break;
            ExFreePoolWithTag(Pool2, 0);
            OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
          }
          if ( Status < 0 )
            goto LABEL_36;
          if ( *Pool2 != 2 && (*Pool2 || Pool2[1] || Pool2[2]) )
          {
            v14 = 0;
            goto LABEL_30;
          }
          v4 = Pool2[3];
LABEL_29:
          v14 = 1;
LABEL_30:
          v15 = IoArcTableListHead;
          v16 = &IoArcTableListHead;
          while ( 1 )
          {
            if ( (__int64 *)v15 == v16 )
            {
              Status = -1073741637;
              goto LABEL_36;
            }
            if ( !*(_BYTE *)(v15 + 72) && !*(_QWORD *)(v15 + 64) )
            {
              if ( v14 )
              {
                if ( *(_BYTE *)(v15 + 36) )
                  goto LABEL_34;
                v28 = *(_DWORD *)(v15 + 32) == v4;
              }
              else
              {
                if ( !IopVerifyDiskSignature((__int64)Pool2, v15, &v37) )
                  goto LABEL_34;
                if ( *(_QWORD *)(v15 + 56) )
                {
                  v27 = VhdiVerifyBootDisk(DeviceObject);
                  v16 = &IoArcTableListHead;
                  if ( !v27 )
                    goto LABEL_34;
                }
                if ( *Pool2 )
                  goto LABEL_44;
                v28 = *(_DWORD *)(v15 + 32) == Pool2[3];
              }
              if ( v28 )
              {
LABEL_44:
                *(_QWORD *)(v15 + 64) = DeviceObject;
                v18 = L"\\Device\\CdRom%d";
                if ( DeviceObject->DeviceType != 2 )
                  v18 = L"\\Device\\Harddisk%d\\Partition0";
                RtlStringCchPrintfW(pszDest, 0x40uLL, v18, HIDWORD(v41));
                RtlInitUnicodeString(&DestinationString, pszDest);
                v19 = *(const char **)(v15 + 24);
                RtlStringCchPrintfA(v43, 0x40uLL, "\\ArcName\\%s", v19);
                Status = IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v43);
                if ( Status >= 0 )
                {
                  IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                  RtlFreeUnicodeString(&SymbolicLinkName);
                  if ( DeviceObject->DeviceType == 2 )
                  {
                    if ( (unsigned int)InitializationPhase < 2 )
                    {
                      v29 = *(unsigned __int8 **)(v15 + 24);
                      v30 = *(_QWORD *)(KeLoaderBlock_0 + 184) - (_QWORD)v29;
                      do
                      {
                        v31 = v29[v30];
                        v32 = *v29 - v31;
                        if ( v32 )
                          break;
                        ++v29;
                      }
                      while ( v31 );
                      if ( !v32 )
                        DeviceObject->Flags |= 0x100u;
                    }
                  }
                  else if ( Pool2[1] )
                  {
                    Status = 0;
                    v20 = 1;
                    do
                    {
                      LODWORD(OutputBuffer) = v20;
                      v21 = v20;
                      RtlStringCchPrintfW(
                        pszDest,
                        0x40uLL,
                        L"\\Device\\Harddisk%d\\Partition%d",
                        HIDWORD(v41),
                        OutputBuffer);
                      RtlInitUnicodeString(&DestinationString, pszDest);
                      RtlStringCchPrintfA(v43, 0x40uLL, "\\ArcName\\%spartition(%d)", v19, v20);
                      if ( IopCreateUnicodeFromAnsiBuffer(&SymbolicLinkName, v43) >= 0 )
                      {
                        IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
                        RtlFreeUnicodeString(&SymbolicLinkName);
                      }
                      ++v20;
                    }
                    while ( v21 < Pool2[1] );
                  }
                }
LABEL_36:
                if ( Pool2 )
                  ExFreePoolWithTag(Pool2, 0);
                if ( !v3 )
                  return (unsigned int)Status;
LABEL_60:
                ExFreePoolWithTag(v3, 0);
                return (unsigned int)Status;
              }
            }
LABEL_34:
            v15 = *(_QWORD *)v15;
          }
        }
        v37 = 0x8000LL;
        v22 = (void *)ExAllocatePool2(72LL, v11, 538996553LL);
        v3 = v22;
        if ( v22 )
        {
          v23 = IopBuildSynchronousFsdRequest(
                  3u,
                  (__int64)DeviceObject,
                  v22,
                  HIDWORD(v40),
                  &v37,
                  (__int64)&Object,
                  (__int64)&IoStatusBlock);
          v24 = (IRP *)v23;
          if ( !v23 )
          {
            Status = -1073741670;
            goto LABEL_60;
          }
          *(_BYTE *)(*(_QWORD *)(v23 + 184) - 70LL) |= 2u;
          KeInitializeEvent(&Object, NotificationEvent, 0);
          Status = IofCallDriver(DeviceObject, v24);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
            goto LABEL_60;
          v25 = 0LL;
          v26 = (unsigned __int64)HIDWORD(v40) >> 2;
          if ( v26 )
          {
            do
              v4 += *((_DWORD *)v3 + v25++);
            while ( v25 < v26 );
          }
          v4 = -v4;
          goto LABEL_29;
        }
      }
      return (unsigned int)-1073741670;
    }
    if ( *(PDEVICE_OBJECT *)(v6 + 64) == DeviceObject )
      return 0LL;
    v6 = *(_QWORD *)v6;
  }
}
