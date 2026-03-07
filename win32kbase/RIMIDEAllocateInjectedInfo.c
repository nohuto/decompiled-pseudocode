__int64 __fastcall RIMIDEAllocateInjectedInfo(__int64 a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 Pool2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r14
  NSInstrumentation::CLeakTrackingAllocator *v7; // rsi
  unsigned __int64 v8; // rdi
  int v9; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v11; // rax
  char v12; // r15
  unsigned __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v18; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v22[26]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v24; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v25; // [rsp+1F8h] [rbp+F8h] BYREF

  v1 = gpLeakTrackingAllocator;
  v23 = 1785620818;
  v15 = 260LL;
  v20 = 96LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 96LL, 1785620818LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_16;
  }
  if ( v3 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u) )
    {
      v5 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 112LL, v23);
      Pool2 = (__int64)v5;
      if ( !v5
        || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
            *v5 = 1785620818LL,
            Pool2 = (__int64)(v5 + 2),
            v5 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v1 + 1),
          0x6A6E6952uLL);
      }
LABEL_16:
      v6 = Pool2;
      if ( !Pool2 )
        return 0LL;
LABEL_20:
      v7 = gpLeakTrackingAllocator;
      v8 = 8LL * *(unsigned int *)(a1 + 88);
      v24 = 1785620818;
      v9 = *(_DWORD *)gpLeakTrackingAllocator;
      v16 = 260LL;
      v17 = v8;
      if ( !v9 )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           v8,
                                                                                           1785620818LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
LABEL_40:
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_43;
LABEL_45:
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
        return 0LL;
      }
      if ( v9 == 1 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u)
          || v8 + 16 < v8 )
        {
          goto LABEL_45;
        }
        v11 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, v8 + 16, v24);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v11;
        if ( !v11
          || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
              *v11 = 1785620818LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v11 + 2),
              v11 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v7 + 1),
            0x6A6E6952uLL);
        }
        goto LABEL_40;
      }
      if ( v9 != 2 )
        goto LABEL_45;
      v14 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, &v14) )
      {
        v18 = &v16;
        v19 = &v24;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v7,
                                                                                           (__int64)&v18,
                                                                                           &v17);
        goto LABEL_40;
      }
      v12 = 0;
      if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
      {
        v8 += 16LL;
        v12 = 1;
        v17 = v8;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         v8,
                                                                                         1785620818LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_45;
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v22);
      if ( v12
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v7,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v14,
               (struct NSInstrumentation::CBackTrace *)v22) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_40;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v7,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v14,
                  (struct NSInstrumentation::CBackTrace *)v22) )
      {
LABEL_43:
        *(_QWORD *)(Pool2 + 72) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        return v6;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_45;
    }
  }
  else if ( v3 == 2 )
  {
    v25 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, &v25) )
    {
      v18 = &v15;
      v19 = &v23;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v1,
                (__int64)&v18,
                &v20);
      goto LABEL_16;
    }
    Pool2 = ExAllocatePool2(260LL, 112LL, 1785620818LL);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v1,
               Pool2,
               v25,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v6 = Pool2;
          goto LABEL_20;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v1,
                  (const void *)Pool2,
                  v25,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_16;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
  }
  return 0LL;
}
