__int64 __fastcall RIMHidGetPreparsedData(
        struct _UNICODE_STRING *a1,
        void **a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4,
        _DWORD *OutputBuffer)
{
  char v5; // si
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // edx
  int v12; // r8d
  PIRP v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  NTSTATUS Status; // r8d
  unsigned __int64 v18; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v19; // rsi
  char v20; // r15
  int v21; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  unsigned int v24; // r10d
  __int64 v25; // r11
  PIRP v26; // rax
  int v27; // r8d
  int v28; // edx
  int v29; // edx
  NTSTATUS v30; // r8d
  char IoStatusBlock; // [rsp+40h] [rbp-C0h]
  char IoStatusBlocka; // [rsp+40h] [rbp-C0h]
  unsigned int v34; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK v39; // [rsp+98h] [rbp-68h] BYREF
  PVOID BackTrace[26]; // [rsp+B0h] [rbp-50h] BYREF
  char v41; // [rsp+190h] [rbp+90h]

  v41 = (char)a1;
  v5 = (char)a1;
  v39 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v8 = RIMGetDeviceObjectPointer(a1 + 13, (__int64)a2, (__int64)a3, a2, a3, a4);
  if ( v8 >= 0 )
  {
    if ( !*a3 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 720);
    }
    if ( !*a4 )
    {
      v34 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 721);
    }
    ObfReferenceObject(*a4);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)gRimLog,
        4,
        1,
        31,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v5);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v13 = IoBuildDeviceIoControlRequest(0xB01A8u, *a4, 0LL, 0, OutputBuffer, 0xCu, 0, &Event, &v39);
    v15 = (int)v13;
    if ( !v13 )
    {
      LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v14,
          (_DWORD)gRimLog,
          3,
          1,
          32,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
LABEL_98:
      ObfDereferenceObject(*a3);
      *a3 = 0LL;
      ZwClose(*a2);
      *a2 = 0LL;
      if ( !*a4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 817);
      ObfDereferenceObject(*a4);
      *a4 = 0LL;
      return 0LL;
    }
    v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
    Status = IofCallDriver(*a4, v13);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v39.Status;
    }
    if ( Status )
    {
      LOBYTE(v16) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IoStatusBlock = Status;
        LOBYTE(Status) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          Status,
          (_DWORD)gRimLog,
          3,
          1,
          33,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          IoStatusBlock);
      }
      goto LABEL_98;
    }
    v18 = (unsigned int)*OutputBuffer;
    v19 = gpLeakTrackingAllocator;
    v20 = 0;
    v34 = 1886417746;
    v36 = 68LL;
    v37 = v18;
    v21 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v21 != 1 )
      {
        if ( v21 != 2 )
          goto LABEL_91;
        v35[0] = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, v35) )
        {
          v35[0] = (unsigned __int64)&v36;
          v35[1] = (unsigned __int64)&v34;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v19,
                                                                                             (__int64)v35,
                                                                                             &v37);
          goto LABEL_60;
        }
        if ( v18 < 0x1000 || (v18 & 0xFFF) != 0 )
        {
          v18 += 16LL;
          v20 = 1;
          v37 = v18;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v25, v18, v24);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_91;
        _InterlockedAdd64((volatile signed __int64 *)v19 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v20
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v19,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v35[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v19,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v35[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_63;
        }
        _InterlockedAdd64((volatile signed __int64 *)v19 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_91;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
        || v18 + 16 < v18 )
      {
        goto LABEL_91;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v18 + 16, v34);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL),
            *Pool2 = 1886417746LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v19 + 1),
          0x70707352uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         68LL,
                                                                                         (unsigned int)v18,
                                                                                         1886417746LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL);
    }
LABEL_60:
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_91:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Status) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          Status,
          (_DWORD)gRimLog,
          3,
          1,
          34,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
      goto LABEL_98;
    }
LABEL_63:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v16) = 0;
    }
    if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Status) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v16,
        Status,
        (_DWORD)gRimLog,
        4,
        1,
        35,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v41);
    }
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v26 = IoBuildDeviceIoControlRequest(
            0xB0193u,
            *a4,
            0LL,
            0,
            (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            *OutputBuffer,
            0,
            &Event,
            &v39);
    v28 = (int)v26;
    if ( v26 )
    {
      v26->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
      v30 = IofCallDriver(*a4, v26);
      if ( v30 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        v30 = v39.Status;
      }
      if ( !v30 )
        return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v29) = 0;
      }
      if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        IoStatusBlocka = v30;
        LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          v30,
          (_DWORD)gRimLog,
          3,
          1,
          37,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          IoStatusBlocka);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v28) = 0;
      }
      if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v28,
          v27,
          (_DWORD)gRimLog,
          3,
          1,
          36,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
      }
    }
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    goto LABEL_98;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gRimLog,
      3,
      1,
      30,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v8);
  }
  return 0LL;
}
