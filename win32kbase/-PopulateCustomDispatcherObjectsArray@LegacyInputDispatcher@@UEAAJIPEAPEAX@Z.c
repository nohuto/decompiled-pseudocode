__int64 __fastcall LegacyInputDispatcher::PopulateCustomDispatcherObjectsArray(
        LegacyInputDispatcher *this,
        unsigned int a2,
        void **a3)
{
  __int64 v4; // r15
  char v5; // r14
  unsigned int v7; // r13d
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  unsigned __int64 v9; // rsi
  int v10; // eax
  __int64 Pool2; // rsi
  _QWORD *v12; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v20; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int64 v23; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = a2;
  v5 = 0;
  v7 = a2 + 1;
  if ( *((_DWORD *)this + 11) < a2 + 1 )
  {
    v24 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3108);
  }
  if ( *((_QWORD *)this + 2) )
    goto LABEL_25;
  v8 = gpLeakTrackingAllocator;
  v9 = 8LL * *((unsigned int *)this + 11);
  v24 = 2037609301;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  v25 = 68LL;
  v20 = v9;
  if ( !v10 )
  {
    Pool2 = ExAllocatePool2(68LL, v9, 2037609301LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
    goto LABEL_24;
  }
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      v23 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2037609301, &v23) )
      {
        v21[0] = &v25;
        v21[1] = &v24;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v8,
                  (__int64)v21,
                  &v20);
        goto LABEL_24;
      }
      if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
      {
        v9 += 16LL;
        v5 = 1;
        v20 = v9;
      }
      v15 = ExAllocatePool2(v14, v9, v13);
      if ( !v15 )
      {
        *((_QWORD *)this + 2) = 0LL;
        return 3221225506LL;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v5 && (unsigned __int64)(v15 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v8,
               (const void *)v15,
               v23,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 = v15 + 16;
          goto LABEL_24;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v8,
                  v15,
                  v23,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        *((_QWORD *)this + 2) = v15;
        goto LABEL_25;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v15);
    }
LABEL_32:
    *((_QWORD *)this + 2) = 0LL;
    return 3221225506LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x79737355u)
    || v9 + 16 < v9 )
  {
    goto LABEL_32;
  }
  v12 = (_QWORD *)ExAllocatePool2(v25 & 0xFFFFFFFFFFFFFFFDuLL, v9 + 16, v24);
  Pool2 = (__int64)v12;
  if ( !v12
    || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
        *v12 = 2037609301LL,
        Pool2 = (__int64)(v12 + 2),
        v12 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v8 + 1),
      0x79737355uLL);
  }
LABEL_24:
  *((_QWORD *)this + 2) = Pool2;
  if ( !Pool2 )
    return 3221225506LL;
LABEL_25:
  if ( (_DWORD)v4 )
  {
    v16 = 8LL;
    v17 = v4;
    do
    {
      v18 = (__int64)*a3++;
      *(_QWORD *)(v16 + *((_QWORD *)this + 2)) = v18;
      v16 += 8LL;
      --v17;
    }
    while ( v17 );
  }
  *((_DWORD *)this + 12) = v7;
  return 0LL;
}
