struct _CIT_PROCESS *__fastcall CitpProcessEnsureContext(struct tagPROCESSINFO *a1, const char *a2)
{
  struct _CIT_PROCESS *result; // rax
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  int v5; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v8; // r10
  _QWORD v9[2]; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v11; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v12; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+120h] [rbp+77h] BYREF
  __int64 v14; // [rsp+128h] [rbp+7Fh] BYREF

  result = (struct _CIT_PROCESS *)*((_QWORD *)a1 + 114);
  if ( !result )
    return 0LL;
  if ( result == (struct _CIT_PROCESS *)52976 )
  {
    v4 = gpLeakTrackingAllocator;
    v11 = 1231254357;
    v13 = 260LL;
    v14 = 112LL;
    v5 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v5 != 1 )
      {
        if ( v5 != 2 )
          goto LABEL_25;
        v12 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v12) )
        {
          v9[0] = &v13;
          v9[1] = &v11;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             v4,
                                                                                             v9,
                                                                                             &v14);
          goto LABEL_8;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v8,
                                                                                           128LL,
                                                                                           1231254357LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_25;
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v4,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v12,
                                  BackTrace) )
          {
            *((_QWORD *)a1 + 114) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            goto LABEL_9;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v4,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v12,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_8;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_25;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u) )
        goto LABEL_25;
      Pool2 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 128LL, v11);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
            *Pool2 = 1231254357LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v4 + 1),
          (const void *)0x49637355);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         112LL,
                                                                                         1231254357LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
    }
LABEL_8:
    *((_QWORD *)a1 + 114) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_9:
      memset((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, 0, 0x70uLL);
      *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48) = 0LL;
      *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 64) = 0LL;
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 80) = 0LL;
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = a1;
      CitpProcessGetProgramId(
        a1,
        (struct _CIT_PROGRAM_ID *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 48));
      return (struct _CIT_PROCESS *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    }
LABEL_25:
    *((_QWORD *)a1 + 114) = 52976LL;
    CitpLogFailureWorker(-1073741670, a2, 0xA3Fu);
    return 0LL;
  }
  if ( result == (struct _CIT_PROCESS *)52977 )
    return 0LL;
  return result;
}
