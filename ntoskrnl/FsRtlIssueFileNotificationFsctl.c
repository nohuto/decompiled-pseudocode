/*
 * XREFs of FsRtlIssueFileNotificationFsctl @ 0x140835E18
 * Callers:
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     IopInitializeCrashDump @ 0x140834B28 (IopInitializeCrashDump.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     PopResizeHiberFile @ 0x140985EE0 (PopResizeHiberFile.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlIssueFileNotificationFsctl(PFILE_OBJECT FileObject, __int64 a2, __int128 *a3)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  PIRP v6; // rax
  IRP *v7; // rdx
  __int128 v8; // xmm0
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+58h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+1Fh] BYREF
  _DWORD v13[2]; // [rsp+80h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+88h] [rbp+37h]

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  v14 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v6 = IoBuildDeviceIoControlRequest(0x90204u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return -1073741670;
  v8 = *a3;
  v13[0] = 1;
  v13[1] = 1;
  v14 = v8;
  v6->AssociatedIrp.MasterIrp = (struct _IRP *)v13;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
