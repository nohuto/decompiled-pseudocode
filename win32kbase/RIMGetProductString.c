/*
 * XREFs of RIMGetProductString @ 0x1C01B7824
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C00C069C (-RtlStringCbLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     wcscmp_0 @ 0x1C00E18D3 (wcscmp_0.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  NSInstrumentation::CLeakTrackingAllocator *v3; // rbx
  int v5; // eax
  unsigned int Status; // r12d
  __int64 OutputBuffer; // rdi
  _QWORD *Pool2; // rax
  unsigned int v11; // r10d
  __int64 v12; // r11
  PIRP v13; // rax
  int v14; // r8d
  int v15; // edx
  int v16; // edx
  int v17; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v18; // rsi
  ULONG_PTR v19; // rbx
  int v20; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v22; // rax
  unsigned int v23; // edx
  __int64 v24; // r10
  char v25; // r15
  size_t Information; // r8
  void *v27; // rcx
  unsigned __int64 v28; // rdx
  const unsigned __int16 *v29; // rcx
  unsigned __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v36; // [rsp+80h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v38; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v39; // [rsp+A0h] [rbp-68h]
  __int64 v40; // [rsp+A8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  PVOID BackTrace[20]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v43[20]; // [rsp+168h] [rbp+60h] BYREF
  unsigned int v44; // [rsp+250h] [rbp+148h] BYREF

  v3 = gpLeakTrackingAllocator;
  v44 = 1802531666;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v34 = 68LL;
  v40 = 512LL;
  Status = -1073741811;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( v5 )
  {
    if ( v5 != 1 )
    {
      if ( v5 != 2 )
        return Status;
      v31 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1802531666, &v31) )
      {
        v38 = &v34;
        v39 = &v44;
        OutputBuffer = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                         (__int64)v3,
                         (__int64)&v38,
                         &v40);
        goto LABEL_16;
      }
      OutputBuffer = ExAllocatePool2(v12, 528LL, v11);
      if ( !OutputBuffer )
        return Status;
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(OutputBuffer & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v3,
               OutputBuffer,
               v31,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_19;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v3,
                  (const void *)OutputBuffer,
                  v31,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        OutputBuffer += 16LL;
        goto LABEL_16;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)OutputBuffer);
      return Status;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6B707352u) )
      return Status;
    Pool2 = (_QWORD *)ExAllocatePool2(v34 & 0xFFFFFFFFFFFFFFFDuLL, 528LL, v44);
    OutputBuffer = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v3 + 14),
          *Pool2 = 1802531666LL,
          OutputBuffer = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v3 + 1),
        0x6B707352uLL);
    }
  }
  else
  {
    OutputBuffer = ExAllocatePool2(68LL, 512LL, 1802531666LL);
    if ( OutputBuffer )
      _InterlockedIncrement64((volatile signed __int64 *)v3 + 14);
  }
LABEL_16:
  if ( OutputBuffer )
  {
LABEL_19:
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v13 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, (PVOID)OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    v15 = (int)v13;
    if ( !v13 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v15) = 0;
      }
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
          20,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
      }
      goto LABEL_67;
    }
    v13->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
    Status = IofCallDriver(a2, v13);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v16) = 0;
      }
      if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          (_DWORD)gRimLog,
          3,
          1,
          21,
          (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids,
          Status);
      }
      goto LABEL_67;
    }
    if ( IoStatusBlock.Information > 0x200 )
    {
      Status = -1073741811;
LABEL_67:
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)OutputBuffer);
      return Status;
    }
    v18 = gpLeakTrackingAllocator;
    v19 = IoStatusBlock.Information + 2;
    v36 = IoStatusBlock.Information + 2;
    LODWORD(v32) = 2003071826;
    v35 = 260LL;
    v20 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         v19,
                                                                                         2003071826LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
      goto LABEL_61;
    }
    if ( v20 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x77647352u)
        && v19 + 16 >= v19 )
      {
        v22 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, v19 + 16, (unsigned int)v32);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v22;
        if ( !v22
          || (_InterlockedIncrement64((volatile signed __int64 *)v18 + 14),
              *v22 = 2003071826LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v22 + 2),
              v22 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v18 + 1),
            0x77647352uLL);
        }
        goto LABEL_61;
      }
    }
    else if ( v20 == 2 )
    {
      v33 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2003071826, &v33) )
      {
        v38 = &v35;
        v39 = (unsigned int *)&v32;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v18,
                                                                                           (__int64)&v38,
                                                                                           &v36);
        goto LABEL_61;
      }
      v25 = 0;
      if ( v19 < 0x1000 || (v19 & 0xFFF) != 0 )
      {
        v19 += 16LL;
        v25 = 1;
        v36 = v19;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v24, v19, v23);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v43);
        if ( v25
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v18,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v33,
                 (struct NSInstrumentation::CBackTrace *)v43) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_61;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v18,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v33,
                    (struct NSInstrumentation::CBackTrace *)v43) )
        {
          goto LABEL_61;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_61:
    *(_QWORD *)(a1 + 376) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
               + 2 * (IoStatusBlock.Information >> 1)) = 0;
      Information = IoStatusBlock.Information;
      v27 = *(void **)(a1 + 376);
      *(_WORD *)(a1 + 370) = LOWORD(IoStatusBlock.Information) + 2;
      *(_WORD *)(a1 + 368) = Information;
      memmove(v27, (const void *)OutputBuffer, Information);
      v28 = *(unsigned __int16 *)(a1 + 370);
      v29 = *(const unsigned __int16 **)(a1 + 376);
      v31 = 0LL;
      if ( (int)RtlStringCbLengthW(v29, v28, &v31) >= 0 )
        *(_WORD *)(a1 + 368) = v31;
      if ( !wcscmp_0(*(const wchar_t **)(a1 + 376), L"VHidPen") )
        *(_DWORD *)(a1 + 360) |= 0x4000u;
    }
    goto LABEL_67;
  }
  return Status;
}
