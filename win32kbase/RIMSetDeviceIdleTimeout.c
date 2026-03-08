/*
 * XREFs of RIMSetDeviceIdleTimeout @ 0x1C01B0170
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00BC314 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C000431C (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0031148 (RIMGetDeviceObjectPointer.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C00EF92A (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMSetDeviceIdleTimeout(struct _UNICODE_STRING *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r9
  int Status; // esi
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v10; // r10
  PIRP v11; // rax
  int v12; // r8d
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  unsigned __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  PVOID BackTrace[28]; // [rsp+B0h] [rbp-50h] BYREF
  int v25; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned int v26; // [rsp+1A8h] [rbp+A8h] BYREF
  PVOID Object; // [rsp+1B0h] [rbp+B0h] BYREF
  PVOID v28; // [rsp+1B8h] [rbp+B8h] BYREF

  v26 = a2;
  v28 = 0LL;
  Object = 0LL;
  Handle = 0LL;
  if ( !a1 )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2378);
  }
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v25 = 30000;
    v20[0] = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0296ABF,
      a3,
      v4,
      (__int64)v20,
      (__int64)&v25);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
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
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      (char)a1,
      48);
  Status = RIMGetDeviceObjectPointer(a1 + 13, a2, a3, &Handle, &v28, (PDEVICE_OBJECT *)&Object);
  if ( Status >= 0 )
  {
    IoStatusBlock = 0LL;
    memset(&Event, 0, sizeof(Event));
    if ( !v28 )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2395);
    }
    if ( !Object )
    {
      v26 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2396);
    }
    ObfReferenceObject(Object);
    v6 = gpLeakTrackingAllocator;
    v18 = 68LL;
    v26 = 1886417746;
    v7 = *(_DWORD *)gpLeakTrackingAllocator;
    v21 = 4LL;
    if ( v7 )
    {
      if ( v7 != 1 )
      {
        if ( v7 != 2 )
          goto LABEL_56;
        v17 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v17) )
        {
          v20[0] = &v18;
          v20[1] = &v26;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v6,
                                                                                             (__int64)v20,
                                                                                             &v21);
          goto LABEL_33;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v10,
                                                                                           20LL,
                                                                                           1886417746LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_56;
        _InterlockedAdd64((volatile signed __int64 *)v6 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v6,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v17,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_36:
            *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 30000;
            KeInitializeEvent(&Event, SynchronizationEvent, 0);
            v11 = IoBuildDeviceIoControlRequest(
                    0xB01B0u,
                    (PDEVICE_OBJECT)Object,
                    (PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    4u,
                    0LL,
                    0,
                    0,
                    &Event,
                    &IoStatusBlock);
            v13 = (int)v11;
            if ( v11 )
            {
              v11->Tail.Overlay.CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v28;
              Status = IofCallDriver((PDEVICE_OBJECT)Object, v11);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
            }
            else
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  v12,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  79,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
              }
              Status = -1073741668;
            }
            NSInstrumentation::CLeakTrackingAllocator::Free(
              gpLeakTrackingAllocator,
              (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            if ( Status < 0 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v14) = 0;
              }
              if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v14,
                  v15,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  80,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
              }
            }
            goto LABEL_56;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v6,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v17,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_33;
        }
        _InterlockedAdd64((volatile signed __int64 *)v6 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_56;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u) )
        goto LABEL_56;
      Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 20LL, v26);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL),
            *Pool2 = 1886417746LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v6 + 1),
          0x70707352uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         68LL,
                                                                                         4LL,
                                                                                         1886417746LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL);
    }
LABEL_33:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_36;
LABEL_56:
    ObfDereferenceObject(v28);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
  }
  return (unsigned int)Status;
}
