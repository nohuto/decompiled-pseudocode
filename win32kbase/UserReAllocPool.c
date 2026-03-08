/*
 * XREFs of UserReAllocPool @ 0x1C0077B10
 * Callers:
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0086400 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C0233454 (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall UserReAllocPool(void *a1, size_t Size, size_t a3, unsigned int a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  const void *v5; // r14
  size_t v6; // rsi
  int v9; // eax
  __int64 Pool2; // rbx
  _QWORD *v12; // rax
  size_t v13; // r10
  __int64 v14; // r11
  char v15; // r15
  __int64 v16; // [rsp+20h] [rbp-99h] BYREF
  size_t v17; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v20; // [rsp+130h] [rbp+77h] BYREF
  unsigned int v21; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = gpLeakTrackingAllocator;
  v5 = (const void *)a4;
  v6 = a3;
  v21 = a4;
  v16 = 260LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  v17 = a3;
  if ( !v9 )
  {
    Pool2 = ExAllocatePool2(260LL, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
    goto LABEL_4;
  }
  if ( v9 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a4) && v6 + 16 >= v6 )
    {
      v12 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, v6 + 16, v21);
      Pool2 = (__int64)v12;
      if ( !v12
        || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
            *v12 = v5,
            Pool2 = (__int64)(v12 + 2),
            v12 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v4 + 1),
          v5);
      }
LABEL_4:
      if ( !Pool2 )
        return Pool2;
      goto LABEL_5;
    }
    return 0LL;
  }
  if ( v9 != 2 )
    return 0LL;
  v20 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a4, &v20) )
  {
    v18[0] = &v16;
    v18[1] = &v21;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              v4,
              v18,
              &v17);
    goto LABEL_4;
  }
  v15 = 0;
  if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
  {
    v13 = v6 + 16;
    v15 = 1;
    v17 = v6 + 16;
  }
  Pool2 = ExAllocatePool2(v14, v13, (unsigned int)v5);
  if ( !Pool2 )
    return 0LL;
  _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v4,
                            Pool2,
                            v20,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
    goto LABEL_28;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v4,
                           Pool2,
                           v20,
                           BackTrace) )
  {
LABEL_28:
    _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 0LL;
  }
LABEL_5:
  if ( Size <= v6 )
    v6 = Size;
  memmove((void *)Pool2, a1, v6);
  if ( a1 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a1);
  return Pool2;
}
