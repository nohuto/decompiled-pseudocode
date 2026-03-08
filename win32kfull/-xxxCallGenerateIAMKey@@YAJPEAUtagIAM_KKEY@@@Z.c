/*
 * XREFs of ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01AF1AC
 * Callers:
 *     xxxGenerateIAMKey @ 0x1C0092EA4 (xxxGenerateIAMKey.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxCallGenerateIAMKey(union _LARGE_INTEGER *a1)
{
  NTSTATUS result; // eax
  IRP *v3; // rax
  NTSTATUS Status; // ebx
  __int64 v5; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-9h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+1Fh] BYREF
  __int128 v11; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v12; // [rsp+A8h] [rbp+3Fh]
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+47h] BYREF

  FileObject = 0LL;
  DeviceObject = 0LL;
  v12 = 0LL;
  DestinationString = 0LL;
  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    PushW32ThreadLock((__int64)DeviceObject, &v11, UserDereferenceObject);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x390004u, DeviceObject, 0LL, 0, &Timeout, 8u, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        UserSessionSwitchLeaveCrit(v5);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        EnterCrit(1LL, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
        a1[1] = Timeout;
    }
    else
    {
      Status = -1073741823;
    }
    PopAndFreeW32ThreadLock((__int64)&v11);
    return Status;
  }
  return result;
}
