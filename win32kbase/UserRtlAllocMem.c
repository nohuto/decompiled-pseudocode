/*
 * XREFs of UserRtlAllocMem @ 0x1C017CE50
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

__int64 __fastcall UserRtlAllocMem(unsigned __int64 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  unsigned __int64 v2; // rbx
  int v3; // eax
  __int64 Pool2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  char v7; // si
  _QWORD v9[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v11; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v12; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v14; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = gpLeakTrackingAllocator;
  v11 = 1953657685;
  v2 = a1;
  v13 = 260LL;
  v14 = a1;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, a1, 1953657685LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    return Pool2;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v12 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x74727355u, &v12) )
      {
        v9[0] = &v13;
        v9[1] = &v11;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                 (__int64)v1,
                 (__int64)v9,
                 &v14);
      }
      v7 = 0;
      if ( v2 < 0x1000 || (v2 & 0xFFF) != 0 )
      {
        v2 += 16LL;
        v7 = 1;
        v14 = v2;
      }
      Pool2 = ExAllocatePool2(v6, v2, 1953657685LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v7 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v1,
                                  Pool2,
                                  v12,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v1,
                                     Pool2,
                                     v12,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x74727355u)
    || v2 + 16 < v2 )
  {
    return 0LL;
  }
  v5 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, v2 + 16, v11);
  Pool2 = (__int64)v5;
  if ( !v5
    || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
        *v5 = 1953657685LL,
        Pool2 = (__int64)(v5 + 2),
        v5 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      (const void *)0x74727355);
  }
  return Pool2;
}
