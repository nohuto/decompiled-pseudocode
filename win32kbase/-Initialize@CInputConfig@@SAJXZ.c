NTSTATUS CInputConfig::Initialize(void)
{
  struct _ERESOURCE *Pool2; // rax
  NTSTATUS result; // eax
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v3; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  _QWORD v7[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v9; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v11; // [rsp+120h] [rbp+77h] BYREF
  __int64 v12; // [rsp+128h] [rbp+7Fh] BYREF

  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1919251285LL);
  CInputConfig::slock = Pool2;
  if ( !Pool2 )
    return -1073741801;
  result = ExInitializeResourceLite(Pool2);
  if ( result >= 0 )
  {
    v2 = gpLeakTrackingAllocator;
    v9 = 1866690121;
    v11 = 260LL;
    v12 = 1512LL;
    v3 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         1512LL,
                                                                                         1866690121LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
      goto LABEL_4;
    }
    if ( v3 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6F436E49u) )
      {
        v5 = (_QWORD *)ExAllocatePool2(v11 & 0xFFFFFFFFFFFFFFFDuLL, 1528LL, v9);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v5;
        if ( !v5
          || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
              *v5 = 1866690121LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v5 + 2),
              v5 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v2 + 1),
            (const void *)0x6F436E49);
        }
LABEL_4:
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_5;
      }
    }
    else if ( v3 == 2 )
    {
      v10 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6F436E49u, &v10) )
      {
        v7[0] = &v11;
        v7[1] = &v9;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v2,
                                                                                           (__int64)v7,
                                                                                           &v12);
        goto LABEL_4;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v6,
                                                                                         1528LL,
                                                                                         1866690121LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v2,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v10,
                                  BackTrace) )
          {
LABEL_5:
            gpInputConfig = CInputConfig::CInputConfig((CInputConfig *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            if ( gpInputConfig )
            {
              RegisterCoreMsgProviderPreferences(
                6,
                0,
                1,
                0,
                (__int64)lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_);
              return 0;
            }
            return -1073741801;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v2,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v10,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    gpInputConfig = 0LL;
    return -1073741801;
  }
  return result;
}
