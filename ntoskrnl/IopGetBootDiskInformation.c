/*
 * XREFs of IopGetBootDiskInformation @ 0x140B907EC
 * Callers:
 *     IoGetBootDiskInformation @ 0x140944440 (IoGetBootDiskInformation.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     IopBuildDeviceIoControlRequest @ 0x14024FAC0 (IopBuildDeviceIoControlRequest.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     RtlEqualString @ 0x1402D0DA0 (RtlEqualString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     RtlStringCchPrintfA @ 0x140389204 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     IopVerifyDiskSignature @ 0x1408607B0 (IopVerifyDiskSignature.c)
 *     IoGetConfigurationInformation @ 0x140872E30 (IoGetConfigurationInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetBootDiskInformation(__int64 a1, unsigned int a2)
{
  int v4; // r12d
  bool v6; // cf
  __int64 v7; // rbx
  __int64 v8; // rsi
  _QWORD **v9; // r13
  const char *v10; // rdx
  ULONG v11; // eax
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v13; // r15
  IRP *v14; // rax
  NTSTATUS Status; // eax
  ULONG_PTR v16; // rdx
  unsigned int i; // r14d
  IRP *v18; // rdi
  NTSTATUS v19; // edi
  _DWORD *Pool2; // rbx
  int v21; // eax
  _QWORD *j; // r14
  char v23; // al
  __int64 v24; // r15
  __int64 v25; // r13
  int v26; // [rsp+58h] [rbp-B0h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-ACh]
  __int64 v28; // [rsp+60h] [rbp-A8h]
  PFILE_OBJECT FileObject; // [rsp+68h] [rbp-A0h] BYREF
  struct _KEVENT FileObject_8; // [rsp+70h] [rbp-98h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+90h] [rbp-78h] BYREF
  _QWORD **v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  _QWORD **v35; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING ObjectName; // [rsp+B8h] [rbp-50h] BYREF
  STRING String1; // [rsp+C8h] [rbp-40h] BYREF
  STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+E8h] [rbp-20h] BYREF
  STRING String2; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v41; // [rsp+108h] [rbp+0h] BYREF
  __int64 v42; // [rsp+118h] [rbp+10h]
  char pszDest[128]; // [rsp+128h] [rbp+20h] BYREF
  char v44[128]; // [rsp+1A8h] [rbp+A0h] BYREF

  v34 = a1;
  v42 = 0LL;
  DestinationString = 0LL;
  DeviceObject = 0LL;
  SourceString = 0LL;
  FileObject = 0LL;
  ObjectName = 0LL;
  String1 = 0LL;
  v32 = 0LL;
  v41 = 0LL;
  memset(&FileObject_8, 0, sizeof(FileObject_8));
  String2 = 0LL;
  v4 = 0;
  v26 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  if ( (unsigned int)InitializationPhase >= 2 )
    return 3221225865LL;
  if ( a2 < 0x18 )
    return 3221225485LL;
  v6 = a2 < 0x40;
  v7 = KeLoaderBlock_0;
  v8 = 0LL;
  if ( !v6 )
    v8 = a1;
  v9 = *(_QWORD ***)(KeLoaderBlock_0 + 232);
  v10 = *(const char **)(KeLoaderBlock_0 + 184);
  v35 = v9;
  v33 = (_QWORD **)**v9;
  RtlInitAnsiString(&DestinationString, v10);
  RtlInitAnsiString(&String2, *(PCSZ *)(v7 + 192));
  v11 = 0;
  for ( LODWORD(v28) = 0; v11 < DiskCount; LODWORD(v28) = v11 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\Device\\Harddisk%d\\Partition0", v11);
    RtlInitAnsiString(&SourceString, pszDest);
    if ( RtlAnsiStringToUnicodeString(&ObjectName, &SourceString, 1u) < 0 )
      goto LABEL_55;
    DeviceObjectPointer = IoGetDeviceObjectPointer(&ObjectName, 0x80u, &FileObject, &DeviceObject);
    RtlFreeUnicodeString(&ObjectName);
    if ( DeviceObjectPointer < 0 )
      goto LABEL_55;
    v13 = DeviceObject;
    v14 = IopBuildDeviceIoControlRequest(
            458752,
            (__int64)DeviceObject,
            0LL,
            0,
            (__int64)&v41,
            0x18u,
            0,
            &FileObject_8,
            &v32);
    if ( !v14 )
      goto LABEL_11;
    LOWORD(FileObject_8.Header.Lock) = 0;
    FileObject_8.Header.WaitListHead.Blink = &FileObject_8.Header.WaitListHead;
    FileObject_8.Header.Size = 6;
    FileObject_8.Header.WaitListHead.Flink = &FileObject_8.Header.WaitListHead;
    FileObject_8.Header.SignalState = 0;
    Status = IofCallDriver(v13, v14);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&FileObject_8, Suspended, 0, 0, 0LL);
      Status = v32.Status;
    }
    if ( Status >= 0 )
    {
      v16 = 4096LL;
      for ( i = 4096; ; v16 = i )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, v16, 0x6F426F49u);
        if ( !Pool2 )
          break;
        v18 = IopBuildDeviceIoControlRequest(458832, (__int64)v13, 0LL, 0, (__int64)Pool2, i, 0, &FileObject_8, &v32);
        if ( !v18 )
          break;
        KeResetEvent(&FileObject_8);
        v19 = IofCallDriver(v13, v18);
        if ( v19 == 259 )
        {
          KeWaitForSingleObject(&FileObject_8, Suspended, 0, 0, 0LL);
          v19 = v32.Status;
        }
        if ( v19 != -1073741789 )
          goto LABEL_23;
        ExFreePoolWithTag(Pool2, 0);
        i *= 2;
      }
      v19 = -1073741670;
LABEL_23:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
      if ( v19 >= 0 )
      {
        v21 = HIDWORD(v42);
        if ( HIDWORD(v42) < 0x200 )
          v21 = 512;
        HIDWORD(v42) = v21;
        for ( j = *v9; j != v9; j = (_QWORD *)*j )
        {
          if ( v33 != v9 || DiskCount != 1 || *Pool2 )
          {
            v23 = IopVerifyDiskSignature((__int64)Pool2, (__int64)j, &v26);
            v4 = v26;
            if ( !v23 )
              continue;
          }
          v24 = 0LL;
          if ( Pool2[1] )
          {
            v25 = v34;
            do
            {
              if ( !v4 && !*Pool2 )
                v4 = Pool2[2];
              if ( Pool2[36 * v24 + 18] )
              {
                RtlStringCchPrintfA(v44, 0x80uLL, "%spartition(%d)", (const char *)j[3], Pool2[36 * v24 + 18]);
                RtlInitAnsiString(&String1, v44);
                if ( RtlEqualString(&String1, &DestinationString, 1u) )
                {
                  *(_DWORD *)(v25 + 16) = v4;
                  *(_QWORD *)v25 = *(_QWORD *)&Pool2[36 * v24 + 14];
                  if ( v8 )
                  {
                    if ( *Pool2 == 1 )
                    {
                      *(_BYTE *)(v8 + 56) = 1;
                      *(_OWORD *)(v8 + 24) = *(_OWORD *)(Pool2 + 2);
                    }
                    else
                    {
                      *(_BYTE *)(v8 + 56) = 0;
                    }
                  }
                }
                if ( RtlEqualString(&String1, &String2, 1u) )
                {
                  *(_DWORD *)(v25 + 20) = v4;
                  *(_QWORD *)(v25 + 8) = *(_QWORD *)&Pool2[36 * v24 + 14];
                  if ( *Pool2 == 1 )
                  {
                    if ( v8 )
                    {
                      *(_BYTE *)(v8 + 57) = 1;
                      *(_OWORD *)(v8 + 40) = *(_OWORD *)(Pool2 + 2);
                    }
                  }
                  else if ( v8 )
                  {
                    *(_BYTE *)(v8 + 57) = 0;
                  }
                }
              }
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < Pool2[1] );
            v9 = v35;
            v26 = v4;
          }
        }
LABEL_54:
        ExFreePoolWithTag(Pool2, 0);
        goto LABEL_55;
      }
      if ( Pool2 )
        goto LABEL_54;
    }
    else
    {
LABEL_11:
      ObfDereferenceObjectWithTag(FileObject, 0x746C6644u);
    }
LABEL_55:
    v11 = v28 + 1;
  }
  return 0LL;
}
