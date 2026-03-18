/*
 * XREFs of RIMConfigureDeviceFeedback @ 0x1C00DBFA0
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C00A2104 (RIMUpdateDeviceForInputMode.c)
 *     _lambda_45e2658b615a226a62ee073301d92df2_::_lambda_invoker_cdecl_ @ 0x1C00D82A0 (_lambda_45e2658b615a226a62ee073301d92df2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C00DC348 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_SetUsageValue @ 0x1C018E94C (rimHidP_SetUsageValue.c)
 */

__int64 __fastcall RIMConfigureDeviceFeedback(struct _UNICODE_STRING *a1, int a2)
{
  PWSTR Buffer; // rax
  int v3; // r12d
  int Status; // ebx
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  int v8; // edx
  int v9; // r8d
  _BYTE *v10; // rax
  void *v11; // rdi
  int v12; // r8d
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // r8
  PIRP v16; // rax
  int v17; // r8d
  void *QuadPart; // rsi
  int v19; // edx
  struct _DEVICE_OBJECT *v20; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-59h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-49h] BYREF
  _DWORD v24[32]; // [rsp+80h] [rbp-29h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+110h] [rbp+67h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+120h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+128h] [rbp+7Fh] BYREF

  Buffer = a1[28].Buffer;
  v3 = a2;
  Status = 0;
  v6 = *((_QWORD *)Buffer + 2);
  v7 = Buffer[24];
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      4,
      1,
      72,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      (char)a1,
      v3);
  memset(v24, 0, 0x48uLL);
  if ( (unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(v6, v24) )
  {
    v10 = (_BYTE *)Win32AllocPoolZInit(v7, 1768321874);
    v11 = v10;
    if ( v10 )
    {
      v12 = HIWORD(v24[1]);
      v13 = v3 * (v24[11] - v24[10]);
      *v10 = BYTE2(v24[0]);
      Status = rimHidP_SetUsageValue(2, 14, v12, 35, v24[10] + v13 / 100, v6, (__int64)v10, v7);
      if ( Status >= 0 )
      {
        Timeout.QuadPart = 0LL;
        DeviceObject = 0LL;
        Handle = 0LL;
        Status = RIMGetDeviceObjectPointer(a1 + 13, v14, v15, &Handle, (PVOID *)&Timeout, &DeviceObject);
        if ( Status >= 0 )
        {
          memset(&Event, 0, sizeof(Event));
          KeInitializeEvent(&Event, NotificationEvent, 0);
          IoStatusBlock = 0LL;
          v16 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, v11, v7, 0LL, 0, 0, &Event, &IoStatusBlock);
          QuadPart = (void *)Timeout.QuadPart;
          v19 = (int)v16;
          if ( v16 )
          {
            v20 = DeviceObject;
            v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Timeout.QuadPart;
            Status = IofCallDriver(v20, v16);
            if ( Status == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
          }
          else
          {
            LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v17,
                (_DWORD)gRimLog,
                3,
                1,
                73,
                (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
            }
            Status = -1073741668;
          }
          ObfDereferenceObject(QuadPart);
          ZwClose(Handle);
        }
      }
      Win32FreePool((char *)v11);
    }
    else
    {
      Status = -1073741670;
    }
  }
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (_DWORD)gRimLog,
      2,
      1,
      74,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
