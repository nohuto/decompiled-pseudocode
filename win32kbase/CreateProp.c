__int64 __fastcall CreateProp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int *v9; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rdi
  __int64 v11; // r15
  int v12; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  void *v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v18; // rdi
  int v19; // eax
  __int64 Pool2; // rbx
  _QWORD *v21; // rax
  __int64 v22; // r10
  _QWORD *v23; // rax
  __int64 v24; // r10
  __int64 v25; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v28; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v32[26]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v33; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned int v34; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned __int64 v35; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v36; // [rsp+1F8h] [rbp+F8h] BYREF

  if ( !gbInDestroyHandleTableObjects
    && !IS_USERCRIT_OWNED_EXCLUSIVE(a1, a2, a3, a4)
    && (!IS_USERCRIT_OWNED_AT_ALL(v6, v5, v7, v8) || KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 8)) )
  {
    __int2c();
  }
  v9 = *(unsigned int **)(a1 + 24);
  if ( !v9 )
  {
    v18 = gpLeakTrackingAllocator;
    v33 = 2037412693;
    v25 = 260LL;
    v30 = 24LL;
    v19 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, 24LL, 2037412693LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 14);
      goto LABEL_18;
    }
    if ( v19 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x79707355u) )
      {
        v21 = (_QWORD *)ExAllocatePool2(v25 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v33);
        Pool2 = (__int64)v21;
        if ( !v21
          || (_InterlockedIncrement64((volatile signed __int64 *)v18 + 14),
              *v21 = 2037412693LL,
              Pool2 = (__int64)(v21 + 2),
              v21 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v18 + 1),
            (const void *)0x79707355);
        }
LABEL_18:
        *(_QWORD *)(a1 + 24) = Pool2;
        if ( !Pool2 )
          return 0LL;
        goto LABEL_19;
      }
    }
    else if ( v19 == 2 )
    {
      v35 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x79707355u, &v35) )
      {
        v28 = &v25;
        v29 = &v33;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v18,
                  (__int64)&v28,
                  &v30);
        goto LABEL_18;
      }
      Pool2 = ExAllocatePool2(v22, 40LL, 2037412693LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v18,
                                  Pool2,
                                  v35,
                                  BackTrace) )
          {
            *(_QWORD *)(a1 + 24) = Pool2;
LABEL_19:
            *(_DWORD *)Pool2 = 1;
            goto LABEL_14;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v18,
                                     Pool2,
                                     v35,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_18;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v18 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    *(_QWORD *)(a1 + 24) = 0LL;
    return 0LL;
  }
  if ( v9[1] != *v9 )
  {
LABEL_14:
    v15 = *(_QWORD *)(a1 + 24);
    v16 = *(_DWORD *)(v15 + 4);
    *(_DWORD *)(v15 + 4) = v16 + 1;
    return v15 + 16LL * v16 + 8;
  }
  v10 = gpLeakTrackingAllocator;
  v11 = 16LL * *v9;
  v34 = 2037412693;
  v26 = 260LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v27 = v11 + 24;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x79707355u)
        || v11 + 40 < (unsigned __int64)(v11 + 24) )
      {
        return 0LL;
      }
      v23 = (_QWORD *)ExAllocatePool2(v26 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 40, v34);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v23;
      if ( !v23
        || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
            *v23 = 2037412693LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v23 + 2),
            v23 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v10 + 1),
          (const void *)0x79707355);
      }
      goto LABEL_10;
    }
    if ( v12 != 2 )
      return 0LL;
    v36 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x79707355u, &v36) )
    {
      v28 = &v26;
      v29 = &v34;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                         (__int64)v10,
                                                                                         (__int64)&v28,
                                                                                         &v27);
      goto LABEL_10;
    }
    v27 = v11 + 40;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v24,
                                                                                       v11 + 40,
                                                                                       2037412693LL);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      return 0LL;
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(v32);
    if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                              v10,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              v36,
                              v32) )
        goto LABEL_11;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                 v10,
                                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                 v36,
                                 v32) )
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
      goto LABEL_10;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 0LL;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                     260LL,
                                                                                     v11 + 24,
                                                                                     2037412693LL);
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
LABEL_10:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_11:
    memmove(
      (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
      *(const void **)(a1 + 24),
      16LL * (unsigned int)(**(_DWORD **)(a1 + 24) - 1) + 24);
    v14 = *(void **)(a1 + 24);
    if ( v14 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
    *(_QWORD *)(a1 + 24) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    ++*(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    goto LABEL_14;
  }
  return 0LL;
}
