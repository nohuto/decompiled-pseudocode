__int64 CActivationObjectManager::Initialize(void)
{
  NSInstrumentation::CLeakTrackingAllocator *v0; // rsi
  unsigned int v1; // edi
  int v2; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  __int64 v6; // r10
  _QWORD v7[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v9; // [rsp+110h] [rbp+67h] BYREF
  unsigned __int64 v10; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v11; // [rsp+120h] [rbp+77h] BYREF
  __int64 v12; // [rsp+128h] [rbp+7Fh] BYREF

  v0 = gpLeakTrackingAllocator;
  v1 = 0;
  v9 = 1835491669;
  v11 = 260LL;
  v2 = *(_DWORD *)gpLeakTrackingAllocator;
  v12 = 40LL;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D676155u) )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(v11 & 0xFFFFFFFFFFFFFFFDuLL, 56LL, v9);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
        if ( !Pool2
          || (_InterlockedIncrement64((volatile signed __int64 *)v0 + 14),
              *Pool2 = 1835491669LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
              Pool2 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v0 + 1),
            (const void *)0x6D676155);
        }
        goto LABEL_20;
      }
    }
    else if ( v2 == 2 )
    {
      v10 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6D676155u, &v10) )
      {
        v7[0] = &v11;
        v7[1] = &v9;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v0,
                                                                                           (__int64)v7,
                                                                                           &v12);
        goto LABEL_20;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v6,
                                                                                         56LL,
                                                                                         1835491669LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v0 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v0,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v10,
                                  BackTrace) )
            goto LABEL_3;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v0,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v10,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_20;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v0 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
LABEL_24:
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
    return (unsigned int)-1073741801;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     40LL,
                                                                                     1835491669LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v0 + 14);
LABEL_20:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    goto LABEL_24;
LABEL_3:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = 0LL;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = 0LL;
  *(_DWORD *)(ExActivationObjectType + 92LL) = 983043;
  *(_QWORD *)(ExActivationObjectType + 104LL) = 80LL;
  *(_DWORD *)(ExActivationObjectType + 76LL) = 131073;
  *(_DWORD *)(ExActivationObjectType + 80LL) = 131074;
  *(_DWORD *)(ExActivationObjectType + 84LL) = 0x20000;
  *(_DWORD *)(ExActivationObjectType + 88LL) = 983043;
  *(_BYTE *)(ExActivationObjectType + 66LL) |= 0x10u;
  *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = 0LL;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) = 0;
  *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  RegisterCoreMsgProviderPreferences(
    10,
    1,
    2,
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
    (__int64)&lambda_e0b5bc6a6e53c9aba0ac2786547e6048_::_lambda_invoker_cdecl_);
  if ( !*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
    return (unsigned int)-1073741801;
  return v1;
}
