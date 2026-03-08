/*
 * XREFs of Win32AllocPoolWithQuotaZInit @ 0x1C0068600
 * Callers:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSystemParametersInfo @ 0x1C01788A0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64_&_ @ 0x1C0068700 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall Win32AllocPoolWithQuotaZInit(unsigned __int64 a1, unsigned int a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  unsigned __int64 v3; // rbx
  const void *v4; // rsi
  int v5; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  char v9; // r14
  _QWORD v10[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v12; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v13; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v15; // [rsp+118h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v3 = a1;
  v4 = (const void *)a2;
  v13 = a2;
  v14 = 260LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v15 = a1;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(261LL, a1, a2);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    return Pool2;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v12 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a2, &v12) )
      {
        v10[0] = &v14;
        v10[1] = &v13;
        return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                 v2,
                 v10,
                 &v15);
      }
      v9 = 0;
      if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
      {
        v3 += 16LL;
        v9 = 1;
        v15 = v3;
      }
      Pool2 = ExAllocatePool2(261LL, v3, (unsigned int)v4);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v9 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v2,
                                  Pool2,
                                  v12,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            return Pool2;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v2,
                                     Pool2,
                                     v12,
                                     BackTrace) )
        {
          return Pool2;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a2) || v3 + 16 < v3 )
    return 0LL;
  v8 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFCuLL | 1, v3 + 16, v13);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v8 = v4,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      v4);
  }
  return Pool2;
}
