__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::InsertAt(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  int v3; // edi
  __int64 v5; // r15
  NSInstrumentation::CLeakTrackingAllocator *v7; // rsi
  int v8; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  __int64 v10; // r8
  _QWORD *Pool2; // rax
  __int64 v13; // r10
  __int64 v14; // r9
  __int64 v15; // [rsp+20h] [rbp-99h] BYREF
  __int64 v16; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+120h] [rbp+67h] BYREF
  unsigned __int64 v20; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v5 = a3;
  if ( *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 12) )
  {
    v3 = CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Grow();
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
  v7 = gpLeakTrackingAllocator;
  v19 = 845431620;
  v15 = 260LL;
  v16 = 12LL;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        return (unsigned int)-1073741801;
      v20 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x32644344u, &v20) )
      {
        v17[0] = &v15;
        v17[1] = &v19;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v7,
                                                                                           (__int64)v17,
                                                                                           &v16);
        goto LABEL_7;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v13,
                                                                                         28LL,
                                                                                         845431620LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return (unsigned int)-1073741801;
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                v7,
                                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                v20,
                                BackTrace) )
          goto LABEL_8;
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                   v7,
                                   UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                   v20,
                                   BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_7;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return (unsigned int)-1073741801;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x32644344u) )
      return (unsigned int)-1073741801;
    Pool2 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 28LL, v19);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
          *Pool2 = 845431620LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v7 + 1),
        (const void *)0x32644344);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       12LL,
                                                                                       845431620LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
  }
LABEL_7:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return (unsigned int)-1073741801;
LABEL_8:
  *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = *(_QWORD *)a2;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = *(_DWORD *)(a2 + 8);
  v10 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v10 > (unsigned int)v5 )
  {
    v14 = 8 * v10;
    do
    {
      v10 = (unsigned int)(v10 - 1);
      *(_QWORD *)(v14 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v10);
      v14 -= 8LL;
    }
    while ( (unsigned int)v10 > (unsigned int)v5 );
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  ++*(_DWORD *)(a1 + 8);
  return (unsigned int)v3;
}
