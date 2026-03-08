/*
 * XREFs of IoVolumeDeviceNameToGuidPath @ 0x14072BD40
 * Callers:
 *     IoVolumeDeviceToGuidPath @ 0x14072BBD0 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuid @ 0x140947B50 (IoVolumeDeviceNameToGuid.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1403D4010 (_wcsnicmp.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IoGetDeviceObjectPointer @ 0x140720950 (IoGetDeviceObjectPointer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoVolumeDeviceNameToGuidPath(const void **a1, unsigned __int16 *a2)
{
  int v2; // eax
  LARGE_INTEGER *OutputBuffer; // rdi
  char v6; // r13
  ULONG v7; // r14d
  __int64 Pool2; // rax
  void *v9; // r15
  NTSTATUS DeviceObjectPointer; // ebx
  struct _DEVICE_OBJECT *v11; // r12
  IRP *v12; // rax
  ULONG OutputBufferLength; // ebx
  IRP *v14; // rax
  unsigned int v15; // r14d
  const wchar_t *v16; // r12
  unsigned __int16 v17; // ax
  void *v18; // rax
  char v20; // [rsp+50h] [rbp-59h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-51h] BYREF
  PFILE_OBJECT FileObject; // [rsp+60h] [rbp-49h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-9h] BYREF

  v2 = *(unsigned __int16 *)a1;
  v20 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  OutputBuffer = 0LL;
  v6 = 0;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  if ( (unsigned __int16)v2 > 0xF000u )
    return (unsigned int)-1073741811;
  v7 = v2 + 26;
  Pool2 = ExAllocatePool2(256LL, (unsigned int)(v2 + 26), 541536836LL);
  v9 = (void *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  *(_DWORD *)Pool2 = 0;
  *(_WORD *)(Pool2 + 4) = 0;
  *(_DWORD *)(Pool2 + 8) = 0;
  *(_WORD *)(Pool2 + 12) = 0;
  *(_DWORD *)(Pool2 + 16) = 24;
  *(_WORD *)(Pool2 + 20) = *(_WORD *)a1;
  memmove((void *)(Pool2 + 24), a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString(&DestinationString, L"\\Device\\MountPointManager");
  DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0x80u, &FileObject, &DeviceObject);
  if ( DeviceObjectPointer >= 0 )
  {
    v6 = 1;
    OutputBuffer = &Timeout;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = DeviceObject;
    v12 = IoBuildDeviceIoControlRequest(0x6D0008u, DeviceObject, v9, v7, &Timeout, 0x20u, 0, &Event, &IoStatusBlock);
    if ( v12 )
    {
      DeviceObjectPointer = IofCallDriver(v11, v12);
      if ( DeviceObjectPointer == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        DeviceObjectPointer = IoStatusBlock.Status;
      }
      if ( (int)(DeviceObjectPointer + 0x80000000) >= 0 && DeviceObjectPointer != -2147483643 )
        goto LABEL_18;
      OutputBufferLength = Timeout.LowPart + 32;
      if ( Timeout.LowPart + 32 > 0xFFFF )
      {
        DeviceObjectPointer = -1073741306;
        goto LABEL_18;
      }
      OutputBuffer = (LARGE_INTEGER *)ExAllocatePool2(256LL, OutputBufferLength, 541536836LL);
      if ( OutputBuffer )
      {
        v20 = 1;
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v14 = IoBuildDeviceIoControlRequest(
                0x6D0008u,
                v11,
                v9,
                v7,
                OutputBuffer,
                OutputBufferLength,
                0,
                &Event,
                &IoStatusBlock);
        if ( v14 )
        {
          DeviceObjectPointer = IofCallDriver(v11, v14);
          if ( DeviceObjectPointer == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            DeviceObjectPointer = IoStatusBlock.Status;
          }
          if ( DeviceObjectPointer >= 0 )
          {
            DeviceObjectPointer = -1073741275;
            v15 = 0;
            if ( OutputBuffer->HighPart )
            {
              while ( 1 )
              {
                v16 = (const wchar_t *)((char *)OutputBuffer + OutputBuffer[3 * v15 + 1].LowPart);
                DeviceObject = (PDEVICE_OBJECT)(3LL * v15);
                if ( !wcsnicmp(L"\\??\\Volume", v16, 0xAuLL) )
                  break;
                if ( ++v15 >= OutputBuffer->HighPart )
                  goto LABEL_18;
              }
              v17 = WORD2(OutputBuffer[(_QWORD)DeviceObject + 1].QuadPart);
              *a2 = v17;
              v17 += 2;
              a2[1] = v17;
              v18 = (void *)ExAllocatePool2(256LL, v17, 541536836LL);
              *((_QWORD *)a2 + 1) = v18;
              if ( v18 )
              {
                memmove(v18, v16, *a2);
                DeviceObjectPointer = 0;
                *(_WORD *)(*((_QWORD *)a2 + 1) + 2 * ((unsigned __int64)*a2 >> 1)) = 0;
              }
              else
              {
                DeviceObjectPointer = -1073741670;
                *(_DWORD *)a2 = 0;
              }
            }
          }
          goto LABEL_18;
        }
      }
    }
    DeviceObjectPointer = -1073741670;
  }
LABEL_18:
  ExFreePoolWithTag(v9, 0);
  if ( v20 )
    ExFreePoolWithTag(OutputBuffer, 0);
  if ( v6 )
    ObfDereferenceObject(FileObject);
  return (unsigned int)DeviceObjectPointer;
}
