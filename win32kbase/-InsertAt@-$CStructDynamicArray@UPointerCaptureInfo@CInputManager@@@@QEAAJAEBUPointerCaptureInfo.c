__int64 __fastcall CStructDynamicArray<CInputManager::PointerCaptureInfo>::InsertAt(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3)
{
  int v3; // edi
  __int64 v5; // r15
  NSInstrumentation::CLeakTrackingAllocator *v7; // rsi
  int v8; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // r9
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
    v3 = CDynamicArray<InjectManipulationArgs *,2003858261>::Grow(a1);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  if ( *(_DWORD *)(a1 + 8) >= *(_DWORD *)(a1 + 12) )
    return (unsigned int)-1073741823;
  v7 = gpLeakTrackingAllocator;
  v19 = 845431620;
  v15 = 260LL;
  v16 = 8LL;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 8LL, 845431620LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
    goto LABEL_20;
  }
  if ( v8 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x32644344u) )
    {
      v10 = (_QWORD *)ExAllocatePool2(v15 & 0xFFFFFFFFFFFFFFFDuLL, 24LL, v19);
      Pool2 = (__int64)v10;
      if ( !v10
        || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
            *v10 = 845431620LL,
            Pool2 = (__int64)(v10 + 2),
            v10 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v7 + 1),
          0x32644344uLL);
      }
LABEL_20:
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      goto LABEL_23;
    }
    return (unsigned int)-1073741801;
  }
  if ( v8 != 2 )
    return (unsigned int)-1073741801;
  v20 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 845431620, &v20) )
  {
    v17[0] = &v15;
    v17[1] = &v19;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v7,
              (__int64)v17,
              &v16);
    goto LABEL_20;
  }
  Pool2 = ExAllocatePool2(v11, 24LL, 845431620LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
           (__int64)v7,
           (const void *)Pool2,
           v20,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_20;
    }
    goto LABEL_27;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
          (__int64)v7,
          Pool2,
          v20,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
LABEL_27:
    _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return (unsigned int)-1073741801;
  }
LABEL_23:
  *(_QWORD *)Pool2 = *a2;
  v12 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v12 > (unsigned int)v5 )
  {
    v13 = 8 * v12;
    do
    {
      v12 = (unsigned int)(v12 - 1);
      *(_QWORD *)(v13 + *(_QWORD *)a1) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v12);
      v13 -= 8LL;
    }
    while ( (unsigned int)v12 > (unsigned int)v5 );
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = Pool2;
  ++*(_DWORD *)(a1 + 8);
  return (unsigned int)v3;
}
