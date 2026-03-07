__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  const void *v6; // rsi
  int v7; // eax
  __int64 Pool2; // rbx
  _QWORD *v10; // rax
  char v11; // r14
  __int64 v12; // [rsp+28h] [rbp-89h] BYREF
  _QWORD v13[2]; // [rsp+38h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+118h] [rbp+67h] BYREF
  unsigned __int64 v16; // [rsp+120h] [rbp+6Fh] BYREF
  unsigned int v17; // [rsp+130h] [rbp+7Fh] BYREF

  v17 = a4;
  v16 = a2;
  v4 = gpLeakTrackingAllocator;
  v5 = a3;
  v6 = (const void *)a4;
  v12 = 260LL;
  v15 = a3;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v7 != 1 )
    {
      if ( v7 == 2 )
      {
        v16 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, a4, &v16) )
        {
          v13[0] = &v12;
          v13[1] = &v17;
          return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_a6c9ad8a3ccccec93018e691c2ba1200__unsigned___int64___(
                   v4,
                   v13,
                   &v15);
        }
        v11 = 0;
        if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
        {
          v5 += 16LL;
          v11 = 1;
          v15 = v5;
        }
        Pool2 = ExAllocatePool2(261LL, v5, (unsigned int)v6);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v11 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v4,
                                    Pool2,
                                    v16,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              return Pool2;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v4,
                                       Pool2,
                                       v16,
                                       BackTrace) )
          {
            return Pool2;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      return 0LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, a4) || v5 + 16 < v5 )
      return 0LL;
    v10 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFCuLL | 1, v5 + 16, v17);
    Pool2 = (__int64)v10;
    if ( !v10
      || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
          *v10 = v6,
          Pool2 = (__int64)(v10 + 2),
          v10 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v4 + 1),
        v6);
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(261LL, a3, a4);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
  }
  return Pool2;
}
