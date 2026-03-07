__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  int v7; // edx
  int v8; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v11; // rax
  unsigned int v12; // r10d
  __int64 v13; // r11
  NSInstrumentation::CLeakTrackingAllocator *v14; // r14
  int v15; // eax
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // r11
  PIRP v20; // rax
  int v21; // edx
  int v22; // r8d
  IRP *v23; // r14
  NTSTATUS Status; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _IO_STACK_LOCATION *v26; // rdi
  int v27; // edx
  int v28; // r8d
  unsigned __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v33; // [rsp+70h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-90h] BYREF
  __int64 v35; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v36; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v37; // [rsp+90h] [rbp-78h]
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+A8h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-48h] BYREF
  PVOID BackTrace[20]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v43[20]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v44; // [rsp+258h] [rbp+150h]

  v44 = a3;
  v4 = gpLeakTrackingAllocator;
  v7 = 40;
  v31 = 1886417746;
  v38 = 40LL;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v34 = 68LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        goto LABEL_68;
      v30 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v30) )
      {
        v36 = &v34;
        v37 = &v31;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v4,
                                                                                           (__int64)&v36,
                                                                                           &v38);
        goto LABEL_16;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v13, 56LL, v12);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_68;
      _InterlockedAdd64((volatile signed __int64 *)v4 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v4,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v30,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_19:
          *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 65576;
          if ( *(_QWORD *)(a1 + 416) )
          {
LABEL_40:
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v20 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
            v23 = v20;
            if ( v20 )
            {
              CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
              v20->RequestorMode = 0;
              v20->IoStatus.Status = -1073741637;
              v26 = CurrentStackLocation - 1;
              if ( !v26 )
              {
                LODWORD(v30) = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 891);
              }
              v26->MinorFunction = 8;
              v26->Parameters.WMI.ProviderId = *(_QWORD *)(a1 + 416);
              v26->Parameters.CreatePipe.Parameters = 0LL;
              v26->Parameters.Create.Options = 65576;
              v26->Parameters.Read.ByteOffset.QuadPart = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
              Status = IofCallDriver(a2, v23);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              if ( Status < 0 )
              {
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                  || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                {
                  LOBYTE(v27) = 0;
                }
                if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v27,
                    v28,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    40,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    (char)a2);
                }
              }
              else
              {
                if ( !*(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) )
                {
                  LODWORD(v30) = 0x20000;
                  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 916);
                }
                Status = (*(__int64 (__fastcall **)(__int64, __int64))(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                                     + 32))(
                           v44,
                           a4);
              }
              goto LABEL_66;
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v21) = 0;
            }
            if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v21,
                v22,
                (_DWORD)gRimLog,
                3,
                1,
                39,
                (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
            }
LABEL_50:
            Status = -1073741670;
LABEL_66:
            NSInstrumentation::CLeakTrackingAllocator::Free(
              gpLeakTrackingAllocator,
              (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            return (unsigned int)Status;
          }
          v14 = gpLeakTrackingAllocator;
          v35 = 68LL;
          LODWORD(v32) = 1886417746;
          v15 = *(_DWORD *)gpLeakTrackingAllocator;
          v39 = 16LL;
          switch ( v15 )
          {
            case 0:
              Pool2 = ExAllocatePool2(68LL, 16LL, 1886417746LL);
              if ( Pool2 )
                _InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL);
              goto LABEL_35;
            case 1:
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x70707352u) )
              {
                v17 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, 32LL, (unsigned int)v32);
                Pool2 = (__int64)v17;
                if ( !v17
                  || (_InterlockedAdd64((volatile signed __int64 *)v14 + 14, 1uLL),
                      *v17 = 1886417746LL,
                      Pool2 = (__int64)(v17 + 2),
                      v17 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v14 + 1),
                    0x70707352uLL);
                }
LABEL_35:
                *(_QWORD *)(a1 + 416) = Pool2;
                if ( !Pool2 )
                  goto LABEL_50;
                goto LABEL_39;
              }
              break;
            case 2:
              v33 = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v33) )
              {
                v36 = &v35;
                v37 = (unsigned int *)&v32;
                Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                          (__int64)v14,
                          (__int64)&v36,
                          &v39);
                goto LABEL_35;
              }
              Pool2 = ExAllocatePool2(v19, 32LL, v18);
              if ( Pool2 )
              {
                _InterlockedAdd64((volatile signed __int64 *)v14 + 16, 1uLL);
                NSInstrumentation::CBackTrace::CBackTrace(v43);
                if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                         (__int64)v14,
                         Pool2,
                         v33,
                         (struct NSInstrumentation::CBackTrace *)v43) )
                  {
                    *(_QWORD *)(a1 + 416) = Pool2;
LABEL_39:
                    *(GUID *)Pool2 = GUID_HID_INTERFACE_HIDPARSE;
                    goto LABEL_40;
                  }
                }
                else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            (__int64)v14,
                            (const void *)Pool2,
                            v33,
                            (struct NSInstrumentation::CBackTrace *)v43) )
                {
                  Pool2 += 16LL;
                  goto LABEL_35;
                }
                _InterlockedAdd64((volatile signed __int64 *)v14 + 17, 1uLL);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
              }
              break;
          }
          *(_QWORD *)(a1 + 416) = 0LL;
          goto LABEL_50;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v4,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v30,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_16;
      }
      _InterlockedAdd64((volatile signed __int64 *)v4 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_68;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u) )
      goto LABEL_68;
    v11 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, 56LL, v31);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v11;
    if ( !v11
      || (_InterlockedAdd64((volatile signed __int64 *)v4 + 14, 1uLL),
          *v11 = 1886417746LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v11 + 2),
          v11 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v4 + 1),
        0x70707352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       68LL,
                                                                                       40LL,
                                                                                       1886417746LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v4 + 14, 1uLL);
  }
LABEL_16:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_19;
LABEL_68:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      a3,
      (_DWORD)gRimLog,
      3,
      1,
      38,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
  }
  return 3221225626LL;
}
