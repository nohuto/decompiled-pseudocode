/*
 * XREFs of CreateVmSharedMemorySection @ 0x1C02750B0
 * Callers:
 *     ?CreateSection@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAAJ_KPEAPEAX@Z @ 0x1C0261A30 (-CreateSection@CCrossContainerGuestReadWriteSharedSectionMarshaler@DirectComposition@@EEAAJ_KPEA.c)
 * Callees:
 *     StringFromGuid @ 0x1C02752BC (StringFromGuid.c)
 */

__int64 __fastcall CreateVmSharedMemorySection(void **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // rcx
  NTSTATUS appended; // ebx
  void *FileHandle; // [rsp+68h] [rbp-39h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+70h] [rbp-31h] BYREF
  void *SectionHandle; // [rsp+80h] [rbp-21h] BYREF
  union _LARGE_INTEGER AllocationSize; // [rsp+88h] [rbp-19h] BYREF
  UNICODE_STRING Source; // [rsp+90h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp+2Fh] BYREF

  FileHandle = 0LL;
  SectionHandle = 0LL;
  v5 = *a4;
  memset(&ObjectAttributes, 0, 44);
  AllocationSize.QuadPart = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  IoStatusBlock = 0LL;
  Source = 0LL;
  Destination = 0LL;
  if ( v5 > 0 )
  {
    Destination.MaximumLength = 224;
    Destination.Buffer = (PWSTR)ExAllocatePool2(64LL, 224LL, 1801932115LL);
    if ( Destination.Buffer )
    {
      appended = RtlAppendUnicodeToString(
                   &Destination,
                   L"\\Device\\vmsmb\\VSMB-{dcc079ae-60ba-4d07-847c-3493609c0870}\\SharedMemory$\\");
      if ( appended >= 0 )
      {
        appended = StringFromGuid(a2, &Source);
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( appended >= 0 )
          {
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 64;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            appended = ZwCreateFile(
                         &FileHandle,
                         3u,
                         &ObjectAttributes,
                         &IoStatusBlock,
                         &AllocationSize,
                         0x80u,
                         0,
                         3u,
                         0,
                         0LL,
                         0);
            if ( appended >= 0 )
            {
              appended = ZwCreateSection(&SectionHandle, 6u, 0LL, 0LL, 4u, 0x8000000u, FileHandle);
              if ( appended >= 0 )
                *a1 = SectionHandle;
            }
          }
        }
      }
    }
    else
    {
      appended = -1073741670;
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  else
  {
    appended = -1073741582;
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x6B674D53u);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)appended;
}
