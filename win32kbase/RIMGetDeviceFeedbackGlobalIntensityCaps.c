/*
 * XREFs of RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C01AE0E4
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C01AC4D4 (RIMAllocateHidDesc.c)
 *     RIMConfigureDeviceFeedback @ 0x1C01ACF00 (RIMConfigureDeviceFeedback.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C01B2114 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMGetDeviceFeedbackGlobalIntensityCaps(__int64 a1, __int64 a2)
{
  char v2; // r14
  unsigned __int8 v5; // r13
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rbx
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  unsigned int v11; // r10d
  __int64 v12; // r11
  unsigned __int16 i; // di
  unsigned __int16 v14; // r15
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v22; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 v23; // [rsp+168h] [rbp+68h] BYREF

  v2 = 0;
  v22 = 0;
  v5 = 0;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(2, 14, 0, 35, 0LL, (__int64)&v22, a1) != -1072627705 )
    return v5;
  v6 = gpLeakTrackingAllocator;
  v16 = 2020635474;
  v17 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  v8 = 72LL * v22;
  v18 = v8;
  if ( !v7 )
  {
    Pool2 = ExAllocatePool2(260LL, 72LL * v22, 2020635474LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL);
LABEL_22:
    if ( !Pool2 )
      return v5;
    goto LABEL_25;
  }
  if ( v7 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78707352u)
      || v8 + 16 < v8 )
    {
      return v5;
    }
    v10 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, v8 + 16, v16);
    Pool2 = (__int64)v10;
    if ( !v10
      || (_InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL),
          *v10 = 2020635474LL,
          Pool2 = (__int64)(v10 + 2),
          v10 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v6 + 1),
        0x78707352uLL);
    }
    goto LABEL_22;
  }
  if ( v7 != 2 )
    return v5;
  v23 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2020635474, &v23) )
  {
    v19[0] = &v17;
    v19[1] = &v16;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v6,
              (__int64)v19,
              &v18);
    goto LABEL_22;
  }
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v8 += 16LL;
    v2 = 1;
    v18 = v8;
  }
  Pool2 = ExAllocatePool2(v12, v8, v11);
  if ( Pool2 )
  {
    _InterlockedAdd64((volatile signed __int64 *)v6 + 16, 1uLL);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v2 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v6,
             (const void *)Pool2,
             v23,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_22;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v6,
                Pool2,
                v23,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_25:
      if ( (int)rimHidP_GetSpecificValueCaps(2, 14, 0, 35, Pool2, (__int64)&v22, a1) >= 0 )
      {
        for ( i = 0; i < v22; ++i )
        {
          LOWORD(v23) = 0;
          v14 = *(_WORD *)(Pool2 + 72LL * i + 6);
          if ( (unsigned int)rimHidP_GetSpecificValueCaps(2, 14, v14, 33, 0LL, (__int64)&v23, a1) == -1072627708
            && (unsigned int)rimHidP_GetSpecificValueCaps(2, 14, v14, 32, 0LL, (__int64)&v23, a1) == -1072627708 )
          {
            if ( a2 )
            {
              *(_OWORD *)a2 = *(_OWORD *)(Pool2 + 72LL * i);
              *(_OWORD *)(a2 + 16) = *(_OWORD *)(Pool2 + 72LL * i + 16);
              *(_OWORD *)(a2 + 32) = *(_OWORD *)(Pool2 + 72LL * i + 32);
              *(_OWORD *)(a2 + 48) = *(_OWORD *)(Pool2 + 72LL * i + 48);
              *(_QWORD *)(a2 + 64) = *(_QWORD *)(Pool2 + 72LL * i + 64);
            }
            v5 = 1;
          }
        }
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      return v5;
    }
    _InterlockedAdd64((volatile signed __int64 *)v6 + 17, 1uLL);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
  }
  return v5;
}
