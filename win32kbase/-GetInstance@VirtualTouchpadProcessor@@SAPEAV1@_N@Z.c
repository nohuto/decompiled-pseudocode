struct VirtualTouchpadProcessor *__fastcall VirtualTouchpadProcessor::GetInstance(char a1)
{
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v2; // rdi
  int v3; // eax
  _QWORD *Pool2; // rax
  __int64 v5; // r10
  __int64 v7; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v8[2]; // [rsp+30h] [rbp-69h] BYREF
  PVOID BackTrace[22]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v10; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int64 v11; // [rsp+110h] [rbp+77h] BYREF
  __int64 v12; // [rsp+118h] [rbp+7Fh] BYREF

  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)VirtualTouchpadProcessor::s_instance;
  if ( !VirtualTouchpadProcessor::s_instance && a1 )
  {
    v2 = gpLeakTrackingAllocator;
    v7 = (unsigned int)((_DWORD)VirtualTouchpadProcessor::s_instance + 88);
    v10 = 1886680661;
    v12 = 260LL;
    v3 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v3 != 1 )
      {
        if ( v3 != 2 )
          goto LABEL_23;
        v11 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886680661, &v11) )
        {
          v8[0] = &v12;
          v8[1] = &v10;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v2,
                                                                                             (__int64)v8,
                                                                                             &v7);
          goto LABEL_18;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v5,
                                                                                           104LL,
                                                                                           1886680661LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_23;
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v2,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v11,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_21:
            *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0;
            *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 84) = 1000;
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            *(_BYTE *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 20) = 1;
LABEL_24:
            VirtualTouchpadProcessor::s_instance = (VirtualTouchpadProcessor *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            return (struct VirtualTouchpadProcessor *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v2,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v11,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_18;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_23;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70747655u) )
        goto LABEL_23;
      Pool2 = (_QWORD *)ExAllocatePool2(v12 & 0xFFFFFFFFFFFFFFFDuLL, 104LL, v10);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v2 + 14),
            *Pool2 = 1886680661LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v2 + 1),
          0x70747655uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         (unsigned int)((_DWORD)VirtualTouchpadProcessor::s_instance + 88),
                                                                                         1886680661LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v2 + 14);
    }
LABEL_18:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_21;
LABEL_23:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_24;
  }
  return (struct VirtualTouchpadProcessor *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
}
