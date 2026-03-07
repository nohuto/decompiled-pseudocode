struct CPointerInfoNode *__fastcall CTouchProcessor::AllocPointerInfoNodeList(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // si
  _QWORD v12[2]; // [rsp+20h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 v14; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v15; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v16; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v17; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( this[5] != KeGetCurrentThread() )
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7796);
  }
  if ( (_DWORD)v2 )
  {
    v3 = 480 * v2;
    if ( (unsigned __int64)(480 * v2) <= 0xFFFFFFFF )
    {
      if ( v3 )
      {
        v4 = gpLeakTrackingAllocator;
        v5 = v3;
        v15 = 1701868373;
        v16 = 260LL;
        v6 = *(_DWORD *)gpLeakTrackingAllocator;
        v17 = v3;
        switch ( v6 )
        {
          case 0:
            Pool2 = ExAllocatePool2(260LL, v3, 1701868373LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
            return (struct CPointerInfoNode *)Pool2;
          case 1:
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65707355u)
              && v5 + 16 >= v5 )
            {
              v8 = (_QWORD *)ExAllocatePool2(v16 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v15);
              Pool2 = (__int64)v8;
              if ( !v8
                || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
                    *v8 = 1701868373LL,
                    Pool2 = (__int64)(v8 + 2),
                    v8 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v4 + 1),
                  0x65707355uLL);
              }
              return (struct CPointerInfoNode *)Pool2;
            }
            return 0LL;
          case 2:
            v14 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701868373, &v14) )
            {
              v12[0] = &v16;
              v12[1] = &v15;
              return (struct CPointerInfoNode *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                  (__int64)v4,
                                                  (__int64)v12,
                                                  &v17);
            }
            v10 = 0;
            if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
            {
              v5 += 16LL;
              v10 = 1;
              v17 = v5;
            }
            Pool2 = ExAllocatePool2(v9, v5, 1701868373LL);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                       (__int64)v4,
                       (const void *)Pool2,
                       v14,
                       (struct NSInstrumentation::CBackTrace *)BackTrace) )
                {
                  Pool2 += 16LL;
                  return (struct CPointerInfoNode *)Pool2;
                }
              }
              else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                          (__int64)v4,
                          Pool2,
                          v14,
                          (struct NSInstrumentation::CBackTrace *)BackTrace) )
              {
                return (struct CPointerInfoNode *)Pool2;
              }
              _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
              _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
            }
            break;
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
