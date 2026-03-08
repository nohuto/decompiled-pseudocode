/*
 * XREFs of rimSetupPalmTelemetry @ 0x1C01B2BA4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C01BA8B0 (RIMVirtCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     ?_ResetTelemetryData@PalmTelemetry@@AEAAXXZ @ 0x1C01DFA4C (-_ResetTelemetryData@PalmTelemetry@@AEAAXXZ.c)
 */

void __fastcall rimSetupPalmTelemetry(__int64 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v3; // edx
  int v4; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v7; // r10
  _QWORD v8[2]; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v10; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v11; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v12; // [rsp+130h] [rbp+77h] BYREF
  __int64 v13; // [rsp+138h] [rbp+7Fh] BYREF

  if ( *(_QWORD *)(a1 + 1048) )
    return;
  v2 = gpLeakTrackingAllocator;
  v10 = 1986358098;
  v3 = 12304;
  v12 = 260LL;
  v13 = 12304LL;
  v4 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v4 != 1 )
    {
      if ( v4 != 2 )
        goto LABEL_22;
      v11 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1986358098, &v11) )
      {
        v8[0] = &v12;
        v8[1] = &v10;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v2,
                                                                                           (__int64)v8,
                                                                                           &v13);
        goto LABEL_17;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v7,
                                                                                         12320LL,
                                                                                         1986358098LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_22;
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v2,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v11,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_20;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v2,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v11,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_17;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_22;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656B52u) )
      goto LABEL_22;
    Pool2 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 12320LL, v10);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
          *Pool2 = 1986358098LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v2 + 1),
        0x76656B52uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       12304LL,
                                                                                       1986358098LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
  }
LABEL_17:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_20:
    PalmTelemetry::_ResetTelemetryData((PalmTelemetry *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0;
    *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0;
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) = 0;
    *(_QWORD *)(a1 + 1048) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    return;
  }
LABEL_22:
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      3,
      1,
      11,
      (__int64)&WPP_58303e67e31f33dd25135e0b9b8553e5_Traceguids);
}
