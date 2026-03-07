struct tagKbdLayer *__fastcall PrepareFallbackKeyboardFile(struct tagKBDFILE *a1)
{
  NSInstrumentation::CLeakTrackingAllocator *v1; // rdi
  int v3; // eax
  __int64 Pool2; // rbx
  _QWORD *v5; // rax
  __int64 v6; // r10
  struct tagKbdLayer *result; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v10; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v11; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v12; // [rsp+110h] [rbp+77h] BYREF
  __int64 v13; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = gpLeakTrackingAllocator;
  v10 = 1953198933;
  v12 = 260LL;
  v13 = 104LL;
  v3 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 104LL, 1953198933LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v1 + 14);
    goto LABEL_16;
  }
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v11 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1953198933, &v11) )
      {
        v8[0] = &v12;
        v8[1] = &v10;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v1,
                  (__int64)v8,
                  &v13);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v6, 120LL, 1953198933LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v1,
                 Pool2,
                 v11,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_19:
            *(_OWORD *)Pool2 = *(_OWORD *)KbdTablesFallback;
            *(_OWORD *)(Pool2 + 16) = unk_1C02FF040;
            *(_OWORD *)(Pool2 + 32) = *(_OWORD *)&off_1C02FF050;
            *(_OWORD *)(Pool2 + 48) = *(_OWORD *)&off_1C02FF060;
            *(_OWORD *)(Pool2 + 64) = *(_OWORD *)&off_1C02FF070;
            *(_OWORD *)(Pool2 + 80) = xmmword_1C02FF080;
            *(_QWORD *)(Pool2 + 96) = qword_1C02FF090;
            goto LABEL_22;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v1,
                    (const void *)Pool2,
                    v11,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v1 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_21:
    Pool2 = 0LL;
    goto LABEL_22;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x746B7355u) )
    goto LABEL_21;
  v5 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 120LL, v10);
  Pool2 = (__int64)v5;
  if ( !v5
    || (_InterlockedIncrement64((volatile signed __int64 *)v1 + 14),
        *v5 = 1953198933LL,
        Pool2 = (__int64)(v5 + 2),
        v5 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v1 + 1),
      0x746B7355uLL);
  }
LABEL_16:
  if ( Pool2 )
    goto LABEL_19;
LABEL_22:
  *((_QWORD *)a1 + 6) = 0LL;
  result = (struct tagKbdLayer *)Pool2;
  *((_QWORD *)a1 + 3) = Pool2;
  return result;
}
