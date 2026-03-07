void *__fastcall HMAllocateUserOrIsolatedType(unsigned __int64 a1, __int16 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  const void *v5; // rsi
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  char v11; // r14
  __int64 v12; // [rsp+20h] [rbp-79h] BYREF
  unsigned __int64 v13; // [rsp+28h] [rbp-71h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-69h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v16; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = a1;
  if ( (a2 & 0x200) == 0 )
  {
    v4 = gpLeakTrackingAllocator;
    v12 = 260LL;
    v13 = a1;
    v5 = (const void *)*((unsigned int *)&unk_1C0281598 + 6 * a3);
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    v16 = *((_DWORD *)&unk_1C0281598 + 6 * a3);
    switch ( v6 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, a1, (unsigned int)v5);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
        return (void *)Pool2;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
               gpLeakTrackingAllocator,
               (unsigned int)v5)
          && v3 + 16 >= v3 )
        {
          v9 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, v3 + 16, v16);
          Pool2 = (__int64)v9;
          if ( !v9
            || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
                *v9 = v5,
                Pool2 = (__int64)(v9 + 2),
                v9 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v4 + 1),
              v5);
          }
          return (void *)Pool2;
        }
        return 0LL;
      case 2:
        v17 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, (unsigned int)v5, &v17) )
        {
          v14[0] = &v12;
          v14[1] = &v16;
          return (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                           v4,
                           v14,
                           &v13);
        }
        v11 = 0;
        if ( v3 < 0x1000 || (v3 & 0xFFF) != 0 )
        {
          v3 += 16LL;
          v11 = 1;
          v13 = v3;
        }
        Pool2 = ExAllocatePool2(v10, v3, (unsigned int)v5);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v4,
                                    Pool2,
                                    v17,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              return (void *)Pool2;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v4,
                                       Pool2,
                                       v17,
                                       BackTrace) )
          {
            return (void *)Pool2;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    return 0LL;
  }
  return HMAllocateIsolatedType(a3);
}
