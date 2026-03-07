__int64 __fastcall RIMGetDeviceParent(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  unsigned int v4; // r15d
  int v5; // eax
  int v6; // edx
  int v7; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 Data; // rbx
  NTSTATUS DevicePropertyData; // eax
  int v13; // r8d
  char v14; // bl
  _QWORD *Pool2; // rax
  __int64 v17; // r10
  char v18; // r14
  void *v19; // rdx
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v21[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-70h] BYREF
  PVOID BackTrace[26]; // [rsp+A0h] [rbp-60h] BYREF
  ULONG RequiredSize; // [rsp+180h] [rbp+80h] BYREF
  unsigned int v28; // [rsp+190h] [rbp+90h] BYREF
  ULONG Type; // [rsp+198h] [rbp+98h] BYREF

  Object = 0LL;
  v21[0] = 0LL;
  v4 = 0;
  Handle = 0LL;
  Type = 0;
  RequiredSize = 0;
  if ( a1 )
    goto LABEL_8;
  v5 = RIMGetDeviceObjectPointer((int)a2 + 208, a2, a3, (unsigned int)&Handle, (__int64)v21, (__int64)&Object);
  if ( v5 >= 0 )
  {
    if ( !v21[0] )
    {
      v28 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1376LL);
    }
    if ( !Object )
    {
      v28 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1377LL);
    }
    ObfReferenceObject(Object);
    a1 = (struct _DEVICE_OBJECT *)Object;
LABEL_8:
    if ( (int)RIMGetPointerDevicePDO(a1) < 0
      || IoGetDevicePropertyData(0LL, &DEVPKEY_Device_Parent, 0, 0, 0, 0LL, &RequiredSize, &Type) != -1073741789 )
    {
LABEL_18:
      if ( Handle )
      {
        ZwClose(Handle);
        ObfDereferenceObject(v21[0]);
        ObfDereferenceObject(Object);
      }
      return v4;
    }
    if ( !RequiredSize )
    {
      v28 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1400LL);
    }
    v8 = gpLeakTrackingAllocator;
    v9 = RequiredSize;
    v28 = 1886417746;
    v23 = 260LL;
    v10 = *(_DWORD *)gpLeakTrackingAllocator;
    v24 = RequiredSize;
    switch ( v10 )
    {
      case 0:
        Data = ExAllocatePool2(260LL, RequiredSize, 1886417746LL);
        if ( Data )
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
        goto LABEL_15;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
          && v9 + 16 >= v9 )
        {
          Pool2 = (_QWORD *)ExAllocatePool2(v23 & 0xFFFFFFFFFFFFFFFDuLL, v9 + 16, v28);
          Data = (__int64)Pool2;
          if ( !Pool2
            || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
                *Pool2 = 1886417746LL,
                Data = (__int64)(Pool2 + 2),
                Pool2 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v8 + 1),
              (const void *)0x70707352);
          }
          goto LABEL_15;
        }
        break;
      case 2:
        v22[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70707352u, v22) )
        {
          v22[0] = (unsigned __int64)&v23;
          v22[1] = (unsigned __int64)&v28;
          Data = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                   v8,
                   v22,
                   &v24);
          goto LABEL_15;
        }
        v18 = 0;
        if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
        {
          v9 += 16LL;
          v18 = 1;
          v24 = v9;
        }
        Data = ExAllocatePool2(v17, v9, 1886417746LL);
        if ( Data )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v18 && (unsigned __int64)(Data & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v8,
                                    Data,
                                    v22[0],
                                    BackTrace) )
            {
              Data += 16LL;
              goto LABEL_15;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v8,
                                       Data,
                                       v22[0],
                                       BackTrace) )
          {
            goto LABEL_15;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Data);
        }
        break;
    }
    Data = 0LL;
LABEL_15:
    *(_QWORD *)(a2 + 320) = Data;
    if ( Data )
    {
      DevicePropertyData = IoGetDevicePropertyData(
                             0LL,
                             &DEVPKEY_Device_Parent,
                             0,
                             0,
                             RequiredSize,
                             (PVOID)Data,
                             &RequiredSize,
                             &Type);
      v14 = DevicePropertyData;
      if ( DevicePropertyData < 0 )
      {
        v19 = *(void **)(a2 + 320);
        if ( v19 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v19);
        *(_QWORD *)(a2 + 320) = 0LL;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v19) = 0;
        }
        if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v19,
            v13,
            (_DWORD)gRimLog,
            3,
            1,
            62,
            (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
            v14);
        }
      }
      else
      {
        v4 = 1;
        *(_DWORD *)(a2 + 328) = RequiredSize;
      }
    }
    goto LABEL_18;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      3,
      1,
      61,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v5);
  }
  return 0LL;
}
