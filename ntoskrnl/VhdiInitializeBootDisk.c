__int64 __fastcall VhdiInitializeBootDisk(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _QWORD *v3; // r14
  const void *v4; // r15
  _DWORD *v5; // r12
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  HANDLE v8; // rcx
  _DWORD *v9; // rbx
  unsigned int v10; // esi
  ULONG DiskCount; // r13d
  void *VolumeVhdFilePath; // rax
  ULONG OutputBufferLength; // edi
  _DWORD *OutputBuffer; // rax
  NTSTATUS v15; // eax
  int v16; // ecx
  bool v17; // zf
  unsigned int VolumeNumber; // edi
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  wchar_t pszDest[64]; // [rsp+B0h] [rbp-50h] BYREF

  v20 = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v3 = *(_QWORD **)a2;
  v4 = *(const void **)(a2 + 8);
  if ( !*(_QWORD *)a2 )
    return 3221225485LL;
  if ( !v4 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  v5 = *(_DWORD **)(a2 + 24);
  if ( !v5 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(const char **)(a1 + 184)) )
    return 3221225473LL;
  ConfigurationInformation = IoGetConfigurationInformation();
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0;
  DiskCount = ConfigurationInformation->DiskCount;
  Handle = 0LL;
  if ( DiskCount )
  {
    do
    {
      if ( RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v10) >= 0
        && RtlInitUnicodeStringEx(&DestinationString, pszDest) >= 0 )
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( Handle )
        {
          ZwClose(Handle);
          Handle = 0LL;
        }
        if ( ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
        {
          VolumeVhdFilePath = (void *)VhdiQueryVolumeVhdFilePath(Handle);
          if ( VolumeVhdFilePath )
          {
            ExFreePoolWithTag(VolumeVhdFilePath, 0x42646856u);
          }
          else
          {
            if ( v9 )
              ExFreePoolWithTag(v9, 0);
            for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
            {
              OutputBuffer = (_DWORD *)ExAllocatePool2(64LL, OutputBufferLength, 0x42646856u);
              v9 = OutputBuffer;
              if ( !OutputBuffer )
                break;
              v15 = ZwDeviceIoControlFile(
                      Handle,
                      0LL,
                      0LL,
                      0LL,
                      &IoStatusBlock,
                      0x70050u,
                      0LL,
                      0,
                      OutputBuffer,
                      OutputBufferLength);
              if ( v15 != -1073741789 )
              {
                if ( v15 >= 0 )
                {
                  v16 = *(_DWORD *)v3;
                  if ( *v9 == *(_DWORD *)v3 )
                  {
                    if ( v16 )
                    {
                      if ( v16 != 1 )
                        break;
                      v17 = RtlCompareMemory(v9 + 2, v4, 0x10uLL) == 16;
                    }
                    else
                    {
                      v17 = RtlCompareMemory(v9 + 2, v4, 4uLL) == 4;
                    }
                    if ( v17 && (int)VhdiGetPartitionNumber(v9, v3, &v20) >= 0 )
                    {
                      VolumeNumber = VhdiGetVolumeNumber((__int64)Handle, v10, v20, v5);
                      goto LABEL_35;
                    }
                  }
                }
                break;
              }
              ExFreePoolWithTag(v9, 0);
            }
          }
        }
      }
      ++v10;
    }
    while ( v10 < DiskCount );
    v8 = Handle;
  }
  VolumeNumber = -1073741810;
  if ( v9 )
  {
LABEL_35:
    ExFreePoolWithTag(v9, 0x42646856u);
    v8 = Handle;
  }
  if ( v8 )
    ZwClose(v8);
  return VolumeNumber;
}
