__int64 __fastcall DirectComposition::CSystemChannel::Create(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CSystemChannel **a2)
{
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v5; // eax
  __int64 Pool2; // rbx
  int v7; // edi
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // [rsp+20h] [rbp-89h] BYREF
  __int64 v12; // [rsp+28h] [rbp-81h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v15; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v16; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = gpLeakTrackingAllocator;
  v15 = 1668498244;
  v11 = 260LL;
  v5 = *(_DWORD *)gpLeakTrackingAllocator;
  v12 = 2800LL;
  if ( !v5 )
  {
    Pool2 = ExAllocatePool2(260LL, 2800LL, 1668498244LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    goto LABEL_4;
  }
  if ( v5 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63734344u) )
      return (unsigned int)-1073741801;
    v9 = (_QWORD *)ExAllocatePool2(v11 & 0xFFFFFFFFFFFFFFFDuLL, 2816LL, v15);
    Pool2 = (__int64)v9;
    if ( !v9
      || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
          *v9 = 1668498244LL,
          Pool2 = (__int64)(v9 + 2),
          v9 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v2 + 1),
        (const void *)0x63734344);
    }
LABEL_4:
    if ( Pool2 )
      goto LABEL_5;
    return (unsigned int)-1073741801;
  }
  if ( v5 != 2 )
    return (unsigned int)-1073741801;
  v16 = 0LL;
  if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x63734344u, &v16) )
  {
    v13[0] = &v11;
    v13[1] = &v15;
    Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v2,
              (__int64)v13,
              &v12);
    goto LABEL_4;
  }
  Pool2 = ExAllocatePool2(v10, 2816LL, 1668498244LL);
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
  NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                            v2,
                            Pool2,
                            v16,
                            BackTrace) )
    {
      Pool2 += 16LL;
      goto LABEL_4;
    }
LABEL_22:
    _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    return (unsigned int)-1073741801;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                           v2,
                           Pool2,
                           v16,
                           BackTrace) )
    goto LABEL_22;
LABEL_5:
  DirectComposition::CApplicationChannel::CApplicationChannel(
    (DirectComposition::CApplicationChannel *)Pool2,
    a1,
    0LL,
    0LL);
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)Pool2 = &DirectComposition::CSystemChannel::`vftable';
  v7 = DirectComposition::CApplicationChannel::Initialize((DirectComposition::CApplicationChannel *)Pool2, 0LL, 0LL);
  if ( v7 < 0 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)Pool2 + 32LL))(Pool2, 1LL);
  else
    *a2 = (struct DirectComposition::CSystemChannel *)Pool2;
  return (unsigned int)v7;
}
