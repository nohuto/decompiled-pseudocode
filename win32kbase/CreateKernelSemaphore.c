/*
 * XREFs of CreateKernelSemaphore @ 0x1C0035610
 * Callers:
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
 *     InitCreateUserCrit @ 0x1C031F55C (InitCreateUserCrit.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
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

__int64 __fastcall CreateKernelSemaphore(LONG Count, LONG Limit)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  __int64 v10; // [rsp+20h] [rbp-89h] BYREF
  __int64 v11; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v10 = 68LL;
  v14 = 1934324565;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v11 = 32LL;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(68LL, 32LL, 1934324565LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_4;
  }
  if ( v5 != 1 )
  {
    if ( v5 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x734B7355u, &v15) )
      {
        v12[0] = &v10;
        v12[1] = &v14;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v2,
                  v12,
                  &v11);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v9, 48LL, 1934324565LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v2,
                                  Pool2,
                                  v15,
                                  BackTrace) )
            goto LABEL_5;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v2,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x734B7355u) )
    return 0LL;
  v8 = (_QWORD *)ExAllocatePool2(v10 & 0xFFFFFFFFFFFFFFFDuLL, 48LL, v14);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
        *v8 = 1934324565LL,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v2 + 1),
      (const void *)0x734B7355);
  }
LABEL_4:
  if ( Pool2 )
LABEL_5:
    KeInitializeSemaphore((PRKSEMAPHORE)Pool2, Count, Limit);
  return Pool2;
}
