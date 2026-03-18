/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C018CEB8
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00A20A0 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00E6322 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  int Status; // ebx
  __int64 v8; // r8
  struct _FILE_OBJECT *QuadPart; // r15
  PVOID v10; // rsi
  __int64 v11; // rax
  __int64 Pool2; // rdi
  PIRP v13; // rax
  int v14; // r8d
  int v15; // edx
  struct _DEVICE_OBJECT *v16; // rcx
  int v17; // edx
  int v18; // r8d
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[24]; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+150h] [rbp+50h] BYREF
  int v24; // [rsp+158h] [rbp+58h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+160h] [rbp+60h] BYREF
  HANDLE Handle; // [rsp+168h] [rbp+68h] BYREF

  v24 = a2;
  Timeout.QuadPart = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3);
  if ( (unsigned int)dword_1C028EE70 > 4 && tlgKeywordOn((__int64)&dword_1C028EE70, 256LL) )
  {
    v24 = 30000;
    IoStatusBlock.Pointer = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C028EE70,
      byte_1C025D5B2,
      a3,
      v4,
      (__int64)&IoStatusBlock,
      (__int64)&v24);
  }
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qd(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      78,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      (char)a1,
      48);
  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, (PVOID *)&Timeout, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    QuadPart = (struct _FILE_OBJECT *)Timeout.QuadPart;
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    if ( !Timeout.QuadPart )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
    if ( !Object )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v8);
    ObfReferenceObject(Object);
    v10 = gpLeakTrackingAllocator;
    if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) == 0x70707352
      && (v11 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
    {
      while ( *((_DWORD *)gpLeakTrackingAllocator + v11) != 1886417746 )
      {
        if ( ++v11 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_23;
      }
      Pool2 = ExAllocatePool2(68LL, 20LL);
      if ( !Pool2 )
        goto LABEL_52;
      memset(BackTrace, 0, 0xA0uLL);
      RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v10,
                Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_33:
          ExFreePoolWithTag((PVOID)Pool2, 0);
          goto LABEL_52;
        }
LABEL_25:
        *(_DWORD *)Pool2 = 30000;
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v13 = IoBuildDeviceIoControlRequest(
                0xB01B0u,
                (PDEVICE_OBJECT)Object,
                (PVOID)Pool2,
                4u,
                0LL,
                0,
                0,
                &Event,
                &IoStatusBlock);
        v15 = (int)v13;
        if ( v13 )
        {
          v16 = (struct _DEVICE_OBJECT *)Object;
          v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = QuadPart;
          Status = IofCallDriver(v16, v13);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
        }
        else
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
              79,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
          }
          Status = -1073741668;
        }
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          (char *)Pool2);
        if ( Status < 0 )
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
              80,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
          }
        }
        goto LABEL_52;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
              (__int64)v10,
              (const void *)Pool2,
              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        goto LABEL_33;
      Pool2 += 16LL;
    }
    else
    {
LABEL_23:
      Pool2 = ExAllocatePool2(68LL, 4LL);
    }
    if ( !Pool2 )
    {
LABEL_52:
      ObfDereferenceObject(QuadPart);
      ObfDereferenceObject(Object);
      ZwClose(Handle);
      return (unsigned int)Status;
    }
    goto LABEL_25;
  }
  return (unsigned int)Status;
}
