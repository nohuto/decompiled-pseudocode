__int64 __fastcall BuildSignatureFeatureReport(
        struct _HIDP_CAPS *a1,
        struct _HIDP_VALUE_CAPS *a2,
        struct _DEVICE_OBJECT *a3,
        struct _FILE_OBJECT *a4,
        char **a5,
        char **a6)
{
  unsigned __int64 FeatureReportByteLength; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v7; // rsi
  char **v8; // r15
  char **v9; // r13
  unsigned int Status; // r14d
  int v11; // eax
  __int64 OutputBuffer; // rbx
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r10
  char v16; // r12
  struct _DEVICE_OBJECT *v17; // rsi
  struct _FILE_OBJECT *v18; // r14
  PIRP v19; // rax
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v24; // rbx
  int v25; // eax
  __int64 Pool2; // rsi
  _QWORD *v27; // rax
  __int64 v28; // r10
  __int64 v29; // rsi
  unsigned __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 *v35; // [rsp+78h] [rbp-90h] BYREF
  struct _HIDP_CAPS **v36; // [rsp+80h] [rbp-88h]
  __int64 v37; // [rsp+88h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-60h] BYREF
  PVOID BackTrace[20]; // [rsp+B8h] [rbp-50h] BYREF
  PVOID v41[26]; // [rsp+158h] [rbp+50h] BYREF
  struct _HIDP_CAPS *v42; // [rsp+238h] [rbp+130h] BYREF
  struct _HIDP_VALUE_CAPS *v43; // [rsp+240h] [rbp+138h]
  PDEVICE_OBJECT DeviceObject; // [rsp+248h] [rbp+140h]
  struct _FILE_OBJECT *v45; // [rsp+250h] [rbp+148h]

  v45 = a4;
  DeviceObject = a3;
  v43 = a2;
  v42 = a1;
  FeatureReportByteLength = a1->FeatureReportByteLength;
  v7 = gpLeakTrackingAllocator;
  v8 = a5;
  v9 = a6;
  Status = -1073741811;
  memset(&Event, 0, sizeof(Event));
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  v32 = 68LL;
  LODWORD(a5) = 1768321877;
  v33 = FeatureReportByteLength;
  IoStatusBlock = 0LL;
  if ( !v11 )
  {
    OutputBuffer = ExAllocatePool2(68LL, (unsigned int)FeatureReportByteLength, 1768321877LL);
    if ( OutputBuffer )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
    goto LABEL_21;
  }
  if ( v11 != 1 )
  {
    if ( v11 == 2 )
    {
      a6 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              1768321877,
              (unsigned __int64 *)&a6) )
      {
        v35 = &v32;
        v36 = (struct _HIDP_CAPS **)&a5;
        OutputBuffer = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                         (__int64)v7,
                         (__int64)&v35,
                         &v33);
        goto LABEL_21;
      }
      v16 = 0;
      if ( FeatureReportByteLength < 0x1000 || (FeatureReportByteLength & 0xFFF) != 0 )
      {
        FeatureReportByteLength += 16LL;
        v16 = 1;
        v33 = FeatureReportByteLength;
      }
      OutputBuffer = ExAllocatePool2(v15, FeatureReportByteLength, v14);
      if ( OutputBuffer )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v16 && (unsigned __int64)(OutputBuffer & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v7,
                 (const void *)OutputBuffer,
                 (__int64)a6,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            OutputBuffer += 16LL;
            goto LABEL_21;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v7,
                    OutputBuffer,
                    (__int64)a6,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          *v8 = (char *)OutputBuffer;
LABEL_25:
          if ( v43 && (v17 = DeviceObject) != 0LL && (v18 = v45) != 0LL )
          {
            *(_BYTE *)OutputBuffer = v43->ReportID;
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v19 = IoBuildDeviceIoControlRequest(
                    0xB0192u,
                    v17,
                    0LL,
                    0,
                    (PVOID)OutputBuffer,
                    v42->FeatureReportByteLength,
                    0,
                    &Event,
                    &IoStatusBlock);
            v21 = (int)v19;
            if ( !v19 )
            {
              LOBYTE(v21) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v21,
                  v20,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  10,
                  (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
              }
              goto LABEL_37;
            }
            v19->Tail.Overlay.CurrentStackLocation[-1].FileObject = v18;
            Status = IofCallDriver(v17, v19);
            if ( Status == 259 )
            {
              LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v22,
                  v23,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  11,
                  (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
              }
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              Status = IoStatusBlock.Status;
            }
            if ( Status )
            {
              LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_D(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v22,
                  v23,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  12,
                  (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
                  Status);
              }
              goto LABEL_37;
            }
          }
          else
          {
            Status = 0;
          }
          v24 = gpLeakTrackingAllocator;
          v34 = 260LL;
          LODWORD(v42) = 1768321877;
          v25 = *(_DWORD *)gpLeakTrackingAllocator;
          v37 = 256LL;
          switch ( v25 )
          {
            case 0:
              Pool2 = ExAllocatePool2(260LL, 256LL, 1768321877LL);
              if ( Pool2 )
                _InterlockedIncrement64((volatile signed __int64 *)v24 + 14);
              goto LABEL_73;
            case 1:
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x69667355u) )
              {
                v27 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, 272LL, (unsigned int)v42);
                Pool2 = (__int64)v27;
                if ( !v27
                  || (_InterlockedIncrement64((volatile signed __int64 *)v24 + 14),
                      *v27 = 1768321877LL,
                      Pool2 = (__int64)(v27 + 2),
                      v27 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v24 + 1),
                    0x69667355uLL);
                }
LABEL_73:
                *v9 = (char *)Pool2;
                if ( Pool2 )
                  goto LABEL_81;
                goto LABEL_37;
              }
              break;
            case 2:
              v31 = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1768321877, &v31) )
              {
                v35 = &v34;
                v36 = &v42;
                Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                          (__int64)v24,
                          (__int64)&v35,
                          &v37);
                goto LABEL_73;
              }
              v29 = ExAllocatePool2(v28, 272LL, 1768321877LL);
              if ( v29 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)v24 + 16);
                NSInstrumentation::CBackTrace::CBackTrace(v41);
                if ( (unsigned __int64)(v29 & 0xFFF) + 16 >= 0x1000 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                         (__int64)v24,
                         v29,
                         v31,
                         (struct NSInstrumentation::CBackTrace *)v41) )
                  {
                    *v9 = (char *)v29;
                    goto LABEL_81;
                  }
                }
                else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            (__int64)v24,
                            (const void *)v29,
                            v31,
                            (struct NSInstrumentation::CBackTrace *)v41) )
                {
                  Pool2 = v29 + 16;
                  goto LABEL_73;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v24 + 17);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v29);
              }
              break;
          }
          *v9 = 0LL;
LABEL_37:
          Status = -1073741668;
          goto LABEL_81;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)OutputBuffer);
      }
    }
LABEL_80:
    *v8 = 0LL;
    goto LABEL_81;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667355u)
    || FeatureReportByteLength + 16 < FeatureReportByteLength )
  {
    goto LABEL_80;
  }
  v13 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, FeatureReportByteLength + 16, (unsigned int)a5);
  OutputBuffer = (__int64)v13;
  if ( !v13
    || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
        *v13 = 1768321877LL,
        OutputBuffer = (__int64)(v13 + 2),
        v13 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v7 + 1),
      0x69667355uLL);
  }
LABEL_21:
  *v8 = (char *)OutputBuffer;
  if ( OutputBuffer )
    goto LABEL_25;
LABEL_81:
  if ( !*v9 && *v8 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *v8);
    *v8 = 0LL;
  }
  return Status;
}
