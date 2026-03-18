/*
 * XREFs of RIMConfigureDeviceFeedback @ 0x1C017FFF0
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C0005CE4 (RIMUpdateDeviceForInputMode.c)
 *     _lambda_368b033a81a9ff5b62db10e322fc5b96_::_lambda_invoker_cdecl_ @ 0x1C0134C20 (_lambda_368b033a81a9ff5b62db10e322fc5b96_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMGetDeviceObjectPointer @ 0x1C006E118 (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C01811D4 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     rimHidP_SetUsageValue @ 0x1C01853E4 (rimHidP_SetUsageValue.c)
 */

__int64 __fastcall RIMConfigureDeviceFeedback(struct _UNICODE_STRING *a1, int a2)
{
  PWSTR Buffer; // rax
  int Status; // edi
  __int64 v6; // r12
  unsigned __int64 v7; // r15
  char v8; // dl
  NSInstrumentation::CLeakTrackingAllocator *v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 Pool2; // rbx
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r10
  char v16; // si
  int v17; // r8d
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // r8
  PIRP v21; // rax
  int v22; // r8d
  void *QuadPart; // rsi
  int v24; // edx
  struct _DEVICE_OBJECT *v25; // rcx
  char v26; // dl
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-C0h]
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK v32; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v33[20]; // [rsp+A0h] [rbp-60h] BYREF
  PVOID BackTrace[26]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v35; // [rsp+1D0h] [rbp+D0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v37; // [rsp+1E8h] [rbp+E8h] BYREF

  Buffer = a1[28].Buffer;
  Status = 0;
  v6 = *((_QWORD *)Buffer + 2);
  v7 = Buffer[24];
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x48u,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      a1,
      a2);
  memset(v33, 0, 0x48uLL);
  if ( (unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(v6, v33) )
  {
    v9 = gpLeakTrackingAllocator;
    v35 = 1768321874;
    v10 = v7;
    v37 = 260LL;
    Timeout.QuadPart = v7;
    v11 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, v7, 1768321874LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
LABEL_30:
      if ( Pool2 )
      {
LABEL_33:
        v17 = HIWORD(v33[1]);
        v18 = a2 * (v33[11] - v33[10]);
        *(_BYTE *)Pool2 = BYTE2(v33[0]);
        Status = rimHidP_SetUsageValue(2, 14, v17, 35, v33[10] + v18 / 100, v6, Pool2, v7);
        if ( Status >= 0 )
        {
          Timeout.QuadPart = 0LL;
          DeviceObject = 0LL;
          Handle[0] = 0LL;
          Status = RIMGetDeviceObjectPointer(a1 + 13, v19, v20, Handle, (PVOID *)&Timeout, &DeviceObject);
          if ( Status >= 0 )
          {
            memset(&Event, 0, sizeof(Event));
            KeInitializeEvent(&Event, NotificationEvent, 0);
            v32 = 0LL;
            v21 = IoBuildDeviceIoControlRequest(0xB0191u, DeviceObject, (PVOID)Pool2, v7, 0LL, 0, 0, &Event, &v32);
            QuadPart = (void *)Timeout.QuadPart;
            v24 = (int)v21;
            if ( v21 )
            {
              v25 = DeviceObject;
              v21->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)Timeout.QuadPart;
              Status = IofCallDriver(v25, v21);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                Status = v32.Status;
              }
            }
            else
            {
              LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v24,
                  v22,
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
    if ( v11 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69667352u)
        || v7 + 16 <= v7 )
      {
        goto LABEL_50;
      }
      v13 = (_QWORD *)ExAllocatePool2(v37 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v35);
      Pool2 = (__int64)v13;
      if ( !v13
        || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
            *v13 = 1768321874LL,
            Pool2 = (__int64)(v13 + 2),
            v13 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v9 + 1),
          0x69667352uLL);
      }
      goto LABEL_30;
    }
    if ( v11 != 2 )
      goto LABEL_50;
    DeviceObject = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
            gpLeakTrackingAllocator,
            1768321874,
            (unsigned __int64 *)&DeviceObject) )
    {
      Handle[0] = &v37;
      Handle[1] = &v35;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v9,
                (__int64)Handle,
                &Timeout);
      goto LABEL_30;
    }
    v16 = 0;
    if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
    {
      v10 = v7 + 16;
      v16 = 1;
      Timeout.QuadPart = v7 + 16;
    }
    Pool2 = ExAllocatePool2(v15, v10, v14);
    if ( !Pool2 )
      goto LABEL_50;
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v9,
             (const void *)Pool2,
             (__int64)DeviceObject,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_30;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v9,
                Pool2,
                (__int64)DeviceObject,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_33;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    goto LABEL_50;
  }
LABEL_51:
  v26 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(IoStatusBlock) = Status;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v26,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      2u,
      1u,
      0x4Au,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      IoStatusBlock);
  }
  return (unsigned int)Status;
}
