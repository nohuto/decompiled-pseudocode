/*
 * XREFs of RIMAllocKernelMem @ 0x1C01AB3C0
 * Callers:
 *     <none>
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall RIMAllocKernelMem(unsigned __int64 a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  int v5; // eax
  __int64 Pool2; // rbx
  unsigned __int64 *v7; // rax
  __int64 v8; // r10
  char v9; // r14
  _QWORD v11[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v13; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v14; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v15; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v16; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = a2;
  v4 = a1;
  v14 = a2;
  v15 = 260LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v16 = a1;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(260LL, a1, a2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    return Pool2;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v13 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a2, &v13) )
      {
        v11[0] = &v15;
        v11[1] = &v14;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                 (__int64)v2,
                 (__int64)v11,
                 &v16);
      }
      v9 = 0;
      if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
      {
        v4 += 16LL;
        v9 = 1;
        v16 = v4;
      }
      Pool2 = ExAllocatePool2(v8, v4, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v2,
                 (const void *)Pool2,
                 v13,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v2,
                    Pool2,
                    v13,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a2) || v4 + 16 < v4 )
    return 0LL;
  v7 = (unsigned __int64 *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, v14);
  Pool2 = (__int64)v7;
  if ( !v7
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v7 = v3,
        Pool2 = (__int64)(v7 + 2),
        v7 == (unsigned __int64 *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      v3);
  }
  return Pool2;
}
