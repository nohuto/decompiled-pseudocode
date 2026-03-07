__int64 __fastcall CFrameIdGenerator::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  __int64 v6; // rsi
  int v7; // r9d
  __int64 Pool2; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  _QWORD v12[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v14; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+110h] [rbp+77h] BYREF
  __int64 v17; // [rsp+118h] [rbp+7Fh] BYREF

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  v5 = gpLeakTrackingAllocator;
  v14 = 1885947971;
  v16 = 260LL;
  v6 = v4;
  v17 = 24LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 24LL, 1885947971LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_16;
  }
  if ( v7 != 1 )
  {
    if ( v7 == 2 )
    {
      v15 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70694843u, &v15) )
      {
        v12[0] = &v16;
        v12[1] = &v14;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v5,
                  (__int64)v12,
                  &v17);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v10, 40LL, 1885947971LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v5,
                                  Pool2,
                                  v15,
                                  BackTrace) )
            goto LABEL_19;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v5,
                                     Pool2,
                                     v15,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_21:
    Pool2 = 0LL;
    goto LABEL_22;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70694843u) )
    goto LABEL_21;
  v9 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v14);
  Pool2 = (__int64)v9;
  if ( !v9
    || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
        *v9 = 1885947971LL,
        Pool2 = (__int64)(v9 + 2),
        v9 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v5 + 1),
      (const void *)0x70694843);
  }
LABEL_16:
  if ( !Pool2 )
    goto LABEL_21;
LABEL_19:
  *(_DWORD *)Pool2 = 1;
  CInpLockGuard::Initialize((CInpLockGuard *)(Pool2 + 8));
LABEL_22:
  *(_QWORD *)(v6 + 16368) = Pool2;
  return Pool2 == 0 ? 0xC0000017 : 0;
}
