/*
 * XREFs of UserPostNKAPC @ 0x1C01571D0
 * Callers:
 *     <none>
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
 */

__int64 __fastcall UserPostNKAPC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v9; // eax
  __int64 Pool2; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r10
  char v15; // [rsp+38h] [rbp-D0h]
  unsigned int v16; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  PVOID BackTrace[20]; // [rsp+78h] [rbp-90h] BYREF

  v5 = gpLeakTrackingAllocator;
  v18 = 68LL;
  v16 = 1634628437;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v19 = 96LL;
  if ( !v9 )
  {
    Pool2 = ExAllocatePool2(68LL, 96LL, 1634628437LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
LABEL_16:
    if ( !Pool2 )
      return 0LL;
    goto LABEL_19;
  }
  if ( v9 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x616E7355u) )
      return 0LL;
    v12 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 112LL, v16);
    Pool2 = (__int64)v12;
    if ( !v12
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *v12 = 1634628437LL,
          Pool2 = (__int64)(v12 + 2),
          v12 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
        (const void *)0x616E7355);
    }
    goto LABEL_16;
  }
  if ( v9 != 2 )
    return 0LL;
  v17[0] = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x616E7355u, v17) )
  {
    v17[0] = (unsigned __int64)&v18;
    v17[1] = (unsigned __int64)&v16;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v5,
              (__int64)v17,
              &v19);
    goto LABEL_16;
  }
  Pool2 = ExAllocatePool2(v13, 112LL, 1634628437LL);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v5,
                            Pool2,
                            v17[0],
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_16;
    }
LABEL_22:
    _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 0LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v5,
                           Pool2,
                           v17[0],
                           BackTrace) )
    goto LABEL_22;
LABEL_19:
  v15 = 0;
  KeInitializeApc(Pool2, a1, 0LL, a2, a3, a4, v15, a5);
  if ( (unsigned __int8)KeInsertQueueApc(Pool2, Pool2, 0LL, 0LL) )
    return 1LL;
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  return 0LL;
}
