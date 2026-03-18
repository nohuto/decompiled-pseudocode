/*
 * XREFs of RIMHidGetPreparsedData @ 0x1C018BA5C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHidGetPreparsedData(
        struct _UNICODE_STRING *a1,
        void **a2,
        PVOID *a3,
        PDEVICE_OBJECT *a4,
        _DWORD *OutputBuffer)
{
  char v5; // r15
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  PDEVICE_OBJECT v13; // rcx
  int v14; // edx
  int v15; // r8d
  PIRP v16; // rax
  int v17; // r8d
  int v18; // edx
  int v19; // edx
  NTSTATUS Status; // r8d
  PVOID v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  __int64 Pool2; // rdi
  int v26; // r8d
  char v27; // r13
  PIRP v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // edx
  NTSTATUS v32; // r8d
  __int64 v33; // rdx
  __int64 v34; // r8
  PDEVICE_OBJECT v35; // rcx
  char v36; // [rsp+48h] [rbp-C0h]
  char v37; // [rsp+48h] [rbp-C0h]
  struct _KEVENT Event; // [rsp+50h] [rbp-B8h] BYREF
  __int64 IoStatusBlock; // [rsp+68h] [rbp-A0h]
  struct _IO_STATUS_BLOCK IoStatusBlock_8; // [rsp+70h] [rbp-98h] BYREF
  PVOID BackTrace[26]; // [rsp+88h] [rbp-80h] BYREF
  char v42; // [rsp+168h] [rbp+60h]

  v42 = (char)a1;
  v5 = (char)a1;
  IoStatusBlock = 0LL;
  IoStatusBlock_8 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v8 = RIMGetDeviceObjectPointer(a1 + 13, (__int64)a2, (__int64)a3, a2, a3, a4);
  if ( v8 < 0 )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v11,
        (_DWORD)gRimLog,
        3,
        1,
        30,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v8);
    }
    return 0LL;
  }
  if ( !*a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v13 = *a4;
  if ( !*a4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v9, v11);
    v13 = *a4;
  }
  ObfReferenceObject(v13);
  LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      (_DWORD)gRimLog,
      4,
      1,
      31,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      v5);
  }
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  v16 = IoBuildDeviceIoControlRequest(
          0xB01A8u,
          *a4,
          0LL,
          0,
          OutputBuffer,
          0xCu,
          0,
          (PKEVENT)&Event.Header.WaitListHead,
          &IoStatusBlock_8);
  v18 = (int)v16;
  if ( !v16 )
  {
    LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v18,
        v17,
        (_DWORD)gRimLog,
        3,
        1,
        32,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
    goto LABEL_96;
  }
  v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  Status = IofCallDriver(*a4, v16);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
    Status = IoStatusBlock_8.Status;
  }
  if ( Status )
  {
    LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v36 = Status;
      LOBYTE(Status) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        Status,
        (_DWORD)gRimLog,
        3,
        1,
        33,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v36);
    }
    goto LABEL_96;
  }
  v21 = gpLeakTrackingAllocator;
  v22 = (unsigned int)*OutputBuffer;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) != 0x70707352
    || (v23 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_47:
    Pool2 = ExAllocatePool2(68LL, v22);
    goto LABEL_48;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v23) != 1886417746 )
  {
    if ( ++v23 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_47;
  }
  v27 = 0;
  if ( v22 < 0x1000 || (v22 & 0xFFF) != 0 )
  {
    v27 = 1;
    v22 += 16LL;
  }
  Pool2 = ExAllocatePool2(68LL, v22);
  if ( !Pool2 )
    goto LABEL_49;
  memset(BackTrace, 0, 0xA0uLL);
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v27 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v21,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_67;
    }
LABEL_62:
    ExFreePoolWithTag((PVOID)Pool2, 0);
    goto LABEL_49;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v21,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_62;
  Pool2 += 16LL;
LABEL_48:
  if ( !Pool2 )
  {
LABEL_49:
    LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v24,
        v26,
        (_DWORD)gRimLog,
        3,
        1,
        34,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
    goto LABEL_96;
  }
LABEL_67:
  LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v24,
      v26,
      (_DWORD)gRimLog,
      4,
      1,
      35,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      v42);
  }
  KeInitializeEvent((PRKEVENT)&Event.Header.WaitListHead, NotificationEvent, 0);
  v28 = IoBuildDeviceIoControlRequest(
          0xB0193u,
          *a4,
          0LL,
          0,
          (PVOID)Pool2,
          *OutputBuffer,
          0,
          (PKEVENT)&Event.Header.WaitListHead,
          &IoStatusBlock_8);
  v30 = (int)v28;
  if ( !v28 )
  {
    LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        v29,
        (_DWORD)gRimLog,
        3,
        1,
        36,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
LABEL_95:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
      (char *)Pool2);
LABEL_96:
    ObfDereferenceObject(*a3);
    *a3 = 0LL;
    ZwClose(*a2);
    *a2 = 0LL;
    v35 = *a4;
    if ( !*a4 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v33, v34);
      v35 = *a4;
    }
    ObfDereferenceObject(v35);
    *a4 = 0LL;
    return 0LL;
  }
  v28->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)*a3;
  v32 = IofCallDriver(*a4, v28);
  if ( v32 == 259 )
  {
    KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
    v32 = IoStatusBlock_8.Status;
  }
  if ( v32 )
  {
    LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v37 = v32;
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v31,
        v32,
        (_DWORD)gRimLog,
        3,
        1,
        37,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v37);
    }
    goto LABEL_95;
  }
  return Pool2;
}
