struct D3DKMT_GETPATHSMODALITY *__fastcall AllocPathsModality(unsigned __int16 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  __int64 v2; // rsi
  int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  struct D3DKMT_GETPATHSMODALITY *result; // rax
  _QWORD *Pool2; // rax
  __int64 v8; // r10
  char v9; // r14
  _QWORD v10[2]; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v12; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v13; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v15; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = gpLeakTrackingAllocator;
  v2 = a1;
  v12 = 1936876615;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  v14 = 260LL;
  v4 = 296 * (unsigned int)a1 + 56;
  v15 = v4;
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
        || v4 + 16 < v4 )
      {
        goto LABEL_25;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, v12);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
            *Pool2 = 1936876615LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v1 + 1),
          (const void *)0x73726447);
      }
      goto LABEL_4;
    }
    if ( v3 != 2 )
      goto LABEL_25;
    v13 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, &v13) )
    {
      v10[0] = &v14;
      v10[1] = &v12;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         v1,
                                                                                         v10,
                                                                                         &v15);
      goto LABEL_4;
    }
    v9 = 0;
    if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
    {
      v4 += 16LL;
      v9 = 1;
      v15 = v4;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v8,
                                                                                       v4,
                                                                                       1936876615LL);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_25;
    _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v9
      && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v1,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v13,
                              BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_4;
      }
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 v1,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v13,
                                 BackTrace) )
    {
      goto LABEL_5;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    goto LABEL_25;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     (unsigned int)v4,
                                                                                     1936876615LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
LABEL_4:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_5:
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40) = 0;
    result = (struct D3DKMT_GETPATHSMODALITY *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48) = 0LL;
    *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) = v2;
    *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 22) = v2;
    return result;
  }
LABEL_25:
  WdLogSingleEntry1(6LL, v2);
  return 0LL;
}
