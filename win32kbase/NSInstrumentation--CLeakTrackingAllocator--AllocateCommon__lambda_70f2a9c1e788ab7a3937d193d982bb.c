/*
 * XREFs of NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___ @ 0x1C019A980
 * Callers:
 *     Win32AllocPoolWithPriorityZInit @ 0x1C017D060 (Win32AllocPoolWithPriorityZInit.c)
 * Callees:
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeTrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64_&_ @ 0x1C019AD14 (NSInstrumentation--CLeakTrackingAllocator--MakeTrackedAllocation__lambda_70f2a9c1e788ab7a3937d19.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64_ @ 0x1C019AE34 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateCommon__lambda_70f2a9c1e788ab7a3937d193d982bb8e___(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int128 *a4)
{
  int v4; // eax
  const void *v6; // r14
  NSInstrumentation::CLeakTrackingAllocator *v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int64 v12; // xmm1_8
  _QWORD *UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64; // rax
  __int64 TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64; // rdi
  char v15; // r14
  __int64 v16; // xmm1_8
  __int128 v17; // [rsp+28h] [rbp-79h] BYREF
  __int64 v18; // [rsp+38h] [rbp-69h]
  PVOID BackTrace[20]; // [rsp+48h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+108h] [rbp+67h] BYREF
  unsigned __int64 v21; // [rsp+110h] [rbp+6Fh] BYREF

  v21 = a2;
  v4 = *(_DWORD *)a1;
  v6 = (const void *)a3;
  v8 = a1;
  if ( !*(_DWORD *)a1 )
  {
    v9 = *a4;
    v10 = *((_QWORD *)a4 + 2);
LABEL_3:
    v18 = v10;
    v17 = v9;
    return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64_(
             a1,
             &v17,
             &v21);
  }
  if ( v4 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(a1, a3) && a2 + 16 >= a2 )
    {
      v12 = *((_QWORD *)a4 + 2);
      v17 = *a4;
      v18 = v12;
      v20 = a2 + 16;
      UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64_(
                                                                                                   v8,
                                                                                                   &v17,
                                                                                                   &v20);
      TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 = (__int64)UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64;
      if ( !UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64
        || (*UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 = v6,
            TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 = (__int64)(UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 + 2),
            UntrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v8 + 1),
          v6);
      }
      return TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64;
    }
  }
  else if ( v4 == 2 )
  {
    v20 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(a1, a3, &v20) )
    {
      v9 = *a4;
      a1 = v8;
      v10 = *((_QWORD *)a4 + 2);
      goto LABEL_3;
    }
    v15 = 0;
    if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
    {
      v15 = 1;
      v21 = a2 + 16;
    }
    v16 = *((_QWORD *)a4 + 2);
    v17 = *a4;
    v18 = v16;
    TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeTrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64___(
                                                                                     v8,
                                                                                     &v17,
                                                                                     &v21);
    if ( TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 )
    {
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v15
        && (unsigned __int64)(TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v8,
                                TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64,
                                v20,
                                BackTrace) )
          return TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64 + 16;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v8,
                                   TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64,
                                   v20,
                                   BackTrace) )
      {
        return TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)TrackedAllocation__lambda_70f2a9c1e788ab7a3937d193d982bb8e__unsigned___int64);
    }
  }
  return 0LL;
}
