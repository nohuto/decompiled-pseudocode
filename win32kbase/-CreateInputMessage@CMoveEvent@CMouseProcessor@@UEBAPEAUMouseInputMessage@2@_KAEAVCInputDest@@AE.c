struct CMouseProcessor::MouseInputMessage *__fastcall CMouseProcessor::CMoveEvent::CreateInputMessage(
        CMouseProcessor::CMoveEvent *this,
        __int64 a2,
        struct CInputDest *a3,
        const struct CMouseProcessor::InputDeliveryContext *a4)
{
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  __int64 v6; // rsi
  int v8; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v13; // r10d
  __int64 v14; // r11
  unsigned int v16; // [rsp+38h] [rbp-99h] BYREF
  unsigned __int64 v17[2]; // [rsp+48h] [rbp-89h] BYREF
  __int64 v18; // [rsp+58h] [rbp-79h] BYREF
  __int64 v19; // [rsp+60h] [rbp-71h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-69h] BYREF

  v4 = gpLeakTrackingAllocator;
  v18 = 260LL;
  v6 = 0LL;
  v16 = 1886539088;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v19 = 368LL;
  if ( v8 )
  {
    if ( v8 != 1 )
    {
      if ( v8 != 2 )
        return (struct CMouseProcessor::MouseInputMessage *)v6;
      v17[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886539088, v17) )
      {
        v17[0] = (unsigned __int64)&v18;
        v17[1] = (unsigned __int64)&v16;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v4,
                                                                                           (__int64)v17,
                                                                                           &v19);
        goto LABEL_16;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v14, 384LL, v13);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        return (struct CMouseProcessor::MouseInputMessage *)v6;
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v4,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v17[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          return CMouseProcessor::MoveInputMessage::MoveInputMessage(
                   (CMouseProcessor::MoveInputMessage *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                   this,
                   a2,
                   a3,
                   a4);
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v4,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v17[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_16;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      return (struct CMouseProcessor::MouseInputMessage *)v6;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70724D50u) )
      return (struct CMouseProcessor::MouseInputMessage *)v6;
    Pool2 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, 384LL, v16);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
          *Pool2 = 1886539088LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v4 + 1),
        0x70724D50uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       368LL,
                                                                                       1886539088LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
  }
LABEL_16:
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return CMouseProcessor::MoveInputMessage::MoveInputMessage(
             (CMouseProcessor::MoveInputMessage *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
             this,
             a2,
             a3,
             a4);
  return (struct CMouseProcessor::MouseInputMessage *)v6;
}
