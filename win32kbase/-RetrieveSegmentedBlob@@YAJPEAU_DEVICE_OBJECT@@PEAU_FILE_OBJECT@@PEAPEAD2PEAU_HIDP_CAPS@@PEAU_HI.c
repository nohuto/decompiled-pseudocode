/*
 * XREFs of ?RetrieveSegmentedBlob@@YAJPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD2PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HIDP_VALUE_CAPS@@@Z @ 0x1C01E08B4
 * Callers:
 *     ?RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@U_HID_COLLECTION_INFORMATION@@GPEAK@Z @ 0x1C01E0604 (-RetrieveAndVerifySignature@@YAHPEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@GPEAU_HIDP_VALUE_CAPS@@PEA.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimHidP_GetUsageValueArray @ 0x1C00EFA58 (rimHidP_GetUsageValueArray.c)
 *     rimHidP_SetUsageValue @ 0x1C01B2248 (rimHidP_SetUsageValue.c)
 *     ?BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@PEAPEAD4@Z @ 0x1C01DFE00 (-BuildSignatureFeatureReport@@YAJPEAU_HIDP_CAPS@@PEAU_HIDP_VALUE_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_.c)
 */

int __fastcall RetrieveSegmentedBlob(
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a2,
        char **a3,
        char **a4,
        struct _HIDP_CAPS *a5,
        struct _HIDP_PREPARSED_DATA *a6,
        struct _HIDP_VALUE_CAPS *a7)
{
  int result; // eax
  char *OutputBuffer; // r12
  char *v12; // rsi
  int v13; // ebx
  PIRP v14; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  PIRP v19; // rax
  int v20; // edx
  int v21; // r8d
  NTSTATUS Status; // r9d
  PDEVICE_OBJECT v23; // rcx
  __int16 v24; // ax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  result = BuildSignatureFeatureReport(a5, 0LL, 0LL, 0LL, a4, a3);
  if ( result >= 0 )
  {
    OutputBuffer = *a4;
    v12 = *a3;
    v13 = 0;
    **a4 = a7->ReportID;
    while ( 1 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      rimHidP_SetUsageValue(2LL, a7->UsagePage, 0LL, 198LL, v13, (__int64)a6, (__int64)*a4, a5->FeatureReportByteLength);
      v14 = IoBuildDeviceIoControlRequest(
              0xB0191u,
              DeviceObject,
              *a4,
              a5->FeatureReportByteLength,
              0LL,
              0,
              0,
              &Event,
              &IoStatusBlock);
      if ( !v14 )
        break;
      v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
      result = IofCallDriver(DeviceObject, v14);
      if ( result == 259 )
      {
        LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v17,
            v18,
            (_DWORD)gRimLog,
            3,
            1,
            14,
            (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
        }
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        result = IoStatusBlock.Status;
      }
      if ( result >= 0 )
      {
        KeInitializeEvent(&Event, NotificationEvent, 0);
        v19 = IoBuildDeviceIoControlRequest(
                0xB0192u,
                DeviceObject,
                0LL,
                0,
                OutputBuffer,
                a5->FeatureReportByteLength,
                0,
                &Event,
                &IoStatusBlock);
        if ( !v19 )
        {
          v23 = WPP_GLOBAL_Control;
          LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v24 = 15;
LABEL_55:
            WPP_RECORDER_AND_TRACE_SF_(
              v23->AttachedDevice,
              v15,
              v16,
              (_DWORD)gRimLog,
              3,
              1,
              v24,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
            return -1073741668;
          }
          return -1073741668;
        }
        v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = a2;
        Status = IofCallDriver(DeviceObject, v19);
        if ( Status == 259 )
        {
          LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v20,
              v21,
              (_DWORD)gRimLog,
              3,
              1,
              16,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
          }
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status )
        {
          LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v20,
              v21,
              (_DWORD)gRimLog,
              3,
              1,
              17,
              (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
              Status);
          }
          return -1073741668;
        }
        result = rimHidP_GetUsageValueArray(
                   2LL,
                   a7->UsagePage,
                   0LL,
                   199LL,
                   (__int64)v12,
                   32,
                   (__int64)a6,
                   (__int64)OutputBuffer,
                   a5->FeatureReportByteLength);
        if ( result < 0 )
          return result;
        v12 += 32;
      }
      if ( (unsigned int)++v13 >= 8 )
        return result;
    }
    v23 = WPP_GLOBAL_Control;
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = 13;
      goto LABEL_55;
    }
    return -1073741668;
  }
  return result;
}
