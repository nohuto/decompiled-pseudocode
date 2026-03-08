/*
 * XREFs of ?Initialize@CTouchProcessor@@SAJXZ @ 0x1C00970E8
 * Callers:
 *     InputInitialize @ 0x1C0096C0C (InputInitialize.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x1C0097188 (--0CTouchProcessor@@QEAA@XZ.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall CTouchProcessor::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  CTouchProcessor *v5; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v15; // r10
  _QWORD v16[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v18; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v19; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v20; // [rsp+110h] [rbp+77h] BYREF
  __int64 v21; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = gpLeakTrackingAllocator;
  v5 = 0LL;
  v20 = 260LL;
  v18 = 1919964227;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v7 = 160LL;
  v21 = 160LL;
  if ( v6 )
  {
    if ( v6 != 1 )
    {
      if ( v6 != 2 )
        goto LABEL_5;
      v19 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x72705443u, &v19) )
      {
        v16[0] = &v20;
        v16[1] = &v18;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v4,
                                                                                           (__int64)v16,
                                                                                           &v21);
        goto LABEL_3;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v15,
                                                                                         176LL,
                                                                                         1919964227LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_5;
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v4,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v19,
                                BackTrace) )
          goto LABEL_4;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v4,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v19,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_3;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_5;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x72705443u) )
      goto LABEL_5;
    Pool2 = (_QWORD *)ExAllocatePool2(v20 & 0xFFFFFFFFFFFFFFFDuLL, 176LL, v18);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
          *Pool2 = 1919964227LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v4 + 1),
        (const void *)0x72705443);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       160LL,
                                                                                       1919964227LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
  }
LABEL_3:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
LABEL_4:
    v5 = CTouchProcessor::CTouchProcessor((CTouchProcessor *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
LABEL_5:
  *(_QWORD *)(SGDGetUserSessionState(a1, v7, a3, a4) + 3424) = v5;
  return *(_QWORD *)(SGDGetUserSessionState(v9, v8, v10, v11) + 3424) == 0LL ? 0xC0000017 : 0;
}
