/*
 * XREFs of IoReportRootDevice @ 0x140802F20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _CmSetDeviceRegProp @ 0x140684F2C (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     _CmCreateDevice @ 0x140789278 (_CmCreateDevice.c)
 *     IopGetRootDeviceId @ 0x140803168 (IopGetRootDeviceId.c)
 *     PnpCleanupDeviceRegistryValues @ 0x14088039C (PnpCleanupDeviceRegistryValues.c)
 *     _CmDeleteDevice @ 0x140A5E810 (_CmDeleteDevice.c)
 */

NTSTATUS __stdcall IoReportRootDevice(PDRIVER_OBJECT DriverObject)
{
  PDRIVER_EXTENSION DriverExtension; // rsi
  NTSTATUS result; // eax
  NTSTATUS appended; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v6; // rcx
  __int16 v7; // di
  int v8; // eax
  char v9; // r14
  HANDLE v10; // rdi
  HANDLE v11; // r8
  wchar_t *pszFormat; // [rsp+30h] [rbp-D8h]
  unsigned int v13; // [rsp+38h] [rbp-D0h]
  __int64 v14; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h] BYREF
  _WORD v21[200]; // [rsp+A8h] [rbp-60h] BYREF
  char v22; // [rsp+238h] [rbp+130h] BYREF

  DriverExtension = DriverObject->DriverExtension;
  SourceString.Buffer = v21;
  *(_QWORD *)&DestinationString.Length = 26345472LL;
  *(_QWORD *)&SourceString.Length = 26214400LL;
  LODWORD(v16) = 0;
  LOWORD(v14) = 0;
  Handle = 0LL;
  DestinationString.Buffer = (wchar_t *)&v22;
  P = 0LL;
  result = IopGetRootDeviceId(&DriverExtension->ServiceKeyName, &SourceString);
  if ( result < 0 )
    return result;
  if ( SourceString.Length > 0x18Eu )
    return -1073741773;
  RtlCopyUnicodeString(&DestinationString, &SourceString);
  appended = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( appended >= 0 )
  {
    PpDevNodeLockTree(1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    appended = RtlAppendUnicodeToString(&SourceString, L"\\");
    if ( appended >= 0 )
    {
      ppszDestEnd = &v21[(unsigned __int64)SourceString.Length >> 1];
      RtlStringCchPrintfExW(
        ppszDestEnd,
        (400 - (unsigned __int64)SourceString.Length) >> 1,
        &ppszDestEnd,
        0LL,
        0,
        L"%04u",
        0LL);
      v6 = &ppszDestEnd[-((unsigned __int64)SourceString.Length >> 1)] - v21;
      if ( (_DWORD)v6 == -1 )
        v7 = 400 - SourceString.Length;
      else
        v7 = 2 * v6;
      SourceString.Length += v7;
      v8 = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)SourceString.Buffer, 983103, &Handle, &v14, 0);
      v9 = v14;
      appended = v8;
      if ( v8 >= 0 )
      {
        if ( !(_BYTE)v14 )
          goto LABEL_9;
        v10 = Handle;
        v11 = Handle;
        v13 = DestinationString.Length + 4;
        pszFormat = DestinationString.Buffer;
        *(_DWORD *)&DestinationString.Buffer[((unsigned __int64)v13 >> 1) - 2] = 0;
        appended = CmSetDeviceRegProp(
                     *(__int64 *)&PiPnpRtlCtx,
                     (__int64)SourceString.Buffer,
                     (__int64)v11,
                     2u,
                     7u,
                     (__int64)pszFormat,
                     v13,
                     0);
        if ( appended >= 0 )
        {
          LODWORD(v16) = 32;
          appended = CmSetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       (__int64)SourceString.Buffer,
                       (__int64)v10,
                       0xBu,
                       4u,
                       (__int64)&v16,
                       4u,
                       0);
          if ( appended >= 0 )
          {
            BYTE1(v14) = -1;
            appended = PnpSetObjectProperty(
                         *(__int64 *)&PiPnpRtlCtx,
                         (__int64)SourceString.Buffer,
                         1u,
                         (__int64)v10,
                         0LL,
                         (__int64)&DEVPKEY_Device_Reported,
                         17,
                         (__int64)&v14 + 1,
                         1u,
                         0);
            if ( appended >= 0 )
            {
              appended = CmSetDeviceRegProp(
                           *(__int64 *)&PiPnpRtlCtx,
                           (__int64)SourceString.Buffer,
                           (__int64)v10,
                           5u,
                           1u,
                           (__int64)DriverExtension->ServiceKeyName.Buffer,
                           (unsigned int)DriverExtension->ServiceKeyName.Length + 2,
                           0);
              if ( appended >= 0 )
              {
                DriverObject->Flags |= 0x800u;
                PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8, 0, 0LL, 0LL, 0LL, 0LL);
                goto LABEL_9;
              }
            }
          }
        }
      }
      if ( v9 )
      {
        CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, SourceString.Buffer, 0LL);
        PnpCleanupDeviceRegistryValues(&SourceString);
      }
    }
  }
LABEL_9:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PpDevNodeUnlockTree(1);
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return appended;
}
