__int64 __fastcall CMouseSensor::CreateInstance(struct CMouseSensor **a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 Pool2; // rbx
  struct CMouseSensor *v5; // rax
  _QWORD *v7; // rax
  __int64 v8; // r10
  _QWORD v9[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v11; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v12; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v13; // [rsp+110h] [rbp+77h] BYREF
  __int64 v14; // [rsp+118h] [rbp+7Fh] BYREF

  *a1 = 0LL;
  v1 = gpLeakTrackingAllocator;
  v11 = 1885947971;
  v13 = 260LL;
  v14 = 2008LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 2008LL, 1885947971LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_4;
  }
  if ( v3 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70694843u) )
      return 3221225495LL;
    v7 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 2024LL, v11);
    Pool2 = (__int64)v7;
    if ( !v7
      || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
          *v7 = 1885947971LL,
          Pool2 = (__int64)(v7 + 2),
          v7 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v1 + 1),
        (const void *)0x70694843);
    }
LABEL_4:
    if ( !Pool2 )
      return 3221225495LL;
    goto LABEL_5;
  }
  if ( v3 != 2 )
    return 3221225495LL;
  v12 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70694843u, &v12) )
  {
    v9[0] = &v13;
    v9[1] = &v11;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v1,
              (__int64)v9,
              &v14);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v8, 2024LL, 1885947971LL);
  if ( !Pool2 )
    return 3221225495LL;
  _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v1,
                            Pool2,
                            v12,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_21:
    _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return 3221225495LL;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v1,
                           Pool2,
                           v12,
                           BackTrace) )
    goto LABEL_21;
LABEL_5:
  v5 = CMouseSensor::CMouseSensor((CMouseSensor *)Pool2);
  if ( v5 )
  {
    *a1 = v5;
    return 0LL;
  }
  return 3221225495LL;
}
