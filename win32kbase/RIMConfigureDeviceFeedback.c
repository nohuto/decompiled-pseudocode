__int64 __fastcall RIMConfigureDeviceFeedback(struct _UNICODE_STRING *a1, int a2)
{
  PWSTR Buffer; // rax
  int v3; // r13d
  int Status; // edi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  int v8; // edx
  int v9; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v10; // rdi
  unsigned __int64 v11; // rbx
  int v12; // eax
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r10
  char v17; // si
  int v18; // r8d
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // r8
  PIRP v22; // rax
  int v23; // r8d
  void *QuadPart; // rsi
  int v25; // edx
  struct _DEVICE_OBJECT *v26; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v32[20]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID BackTrace[26]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v34; // [rsp+1D0h] [rbp+D0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v36; // [rsp+1E8h] [rbp+E8h] BYREF

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
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      (char)a1,
      v3);
  memset(v32, 0, 0x48uLL);
  if ( (unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(v6, v32) )
  {
    v10 = gpLeakTrackingAllocator;
    v34 = 1768321874;
    v11 = v7;
    v36 = 260LL;
    Timeout.QuadPart = v7;
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, v7, 1768321874LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
LABEL_30:
      if ( Pool2 )
      {
LABEL_33:
        v18 = HIWORD(v32[1]);
        v19 = v3 * (v32[11] - v32[10]);
        *(_BYTE *)Pool2 = BYTE2(v32[0]);
        Status = rimHidP_SetUsageValue(2, 14, v18, 35, v32[10] + v19 / 100, v6, Pool2, v7);
        if ( Status >= 0 )
        {
          Timeout.QuadPart = 0LL;
          DeviceObject = 0LL;
          Handle[0] = 0LL;
          Status = RIMGetDeviceObjectPointer(a1 + 13, v20, v21, Handle, (PVOID *)&Timeout, &DeviceObject);
          if ( Status >= 0 )
          {
            memset(&Event, 0, sizeof(Event));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            IoStatusBlock = 0LL;
            v22 = IoBuildDeviceIoControlRequest(
                    0xB0191u,
                    DeviceObject,
                    (PVOID)Pool2,
                    v7,
                    0LL,
                    0,
                    0,
                    &Event,
                    &IoStatusBlock);
            QuadPart = (void *)Timeout.QuadPart;
            v25 = (int)v22;
            if ( v22 )
            {
              v26 = DeviceObject;
              v22->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Timeout.QuadPart;
              Status = IofCallDriver(v26, v22);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
            }
            else
            {
              LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v25,
                  v23,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  73,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
              }
              Status = -1073741668;
            }
            ObfDereferenceObject(QuadPart);
            ZwClose(Handle[0]);
          }
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
        goto LABEL_51;
      }
LABEL_50:
      Status = -1073741670;
      goto LABEL_51;
    }
    if ( v12 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667352u)
        || v7 + 16 <= v7 )
      {
        goto LABEL_50;
      }
      v14 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v34);
      Pool2 = (__int64)v14;
      if ( !v14
        || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
            *v14 = 1768321874LL,
            Pool2 = (__int64)(v14 + 2),
            v14 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v10 + 1),
          0x69667352uLL);
      }
      goto LABEL_30;
    }
    if ( v12 != 2 )
      goto LABEL_50;
    DeviceObject = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
            gpLeakTrackingAllocator,
            1768321874,
            (unsigned __int64 *)&DeviceObject) )
    {
      Handle[0] = &v36;
      Handle[1] = &v34;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v10,
                (__int64)Handle,
                &Timeout);
      goto LABEL_30;
    }
    v17 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v11 = v7 + 16;
      v17 = 1;
      Timeout.QuadPart = v7 + 16;
    }
    Pool2 = ExAllocatePool2(v16, v11, v15);
    if ( !Pool2 )
      goto LABEL_50;
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v10,
             (const void *)Pool2,
             (__int64)DeviceObject,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_30;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v10,
                Pool2,
                (__int64)DeviceObject,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_33;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_50;
  }
LABEL_51:
  LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (_DWORD)gRimLog,
      2,
      1,
      74,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      Status);
  }
  return (unsigned int)Status;
}
