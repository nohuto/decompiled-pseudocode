__int64 __fastcall rimAllocPointerInfoNodeList(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // si
  _QWORD v12[2]; // [rsp+20h] [rbp-79h] BYREF
  PVOID BackTrace[24]; // [rsp+30h] [rbp-69h] BYREF
  __int64 v14; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int64 v15; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned int v16; // [rsp+110h] [rbp+77h] BYREF
  unsigned __int64 v17; // [rsp+118h] [rbp+7Fh] BYREF

  v15 = a2;
  v14 = a1;
  if ( a3 )
  {
    v3 = 192LL * a3;
    if ( v3 <= 0xFFFFFFFF )
    {
      if ( (_DWORD)v3 )
      {
        v4 = gpLeakTrackingAllocator;
        v5 = (unsigned int)v3;
        v16 = 1701868370;
        v14 = 260LL;
        v6 = *(_DWORD *)gpLeakTrackingAllocator;
        v17 = (unsigned int)v3;
        switch ( v6 )
        {
          case 0:
            Pool2 = ExAllocatePool2(260LL, (unsigned int)v3, 1701868370LL);
            if ( Pool2 )
              _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
            return Pool2;
          case 1:
            if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65707352u)
              && v5 + 16 >= v5 )
            {
              v8 = (_QWORD *)ExAllocatePool2(v14 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v16);
              Pool2 = (__int64)v8;
              if ( !v8
                || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
                    *v8 = 1701868370LL,
                    Pool2 = (__int64)(v8 + 2),
                    v8 == (_QWORD *)-16LL) )
              {
                NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                  *((NSInstrumentation::CPointerHashTable **)v4 + 1),
                  (const void *)0x65707352);
              }
              return Pool2;
            }
            return 0LL;
          case 2:
            v15 = 0LL;
            if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x65707352u, &v15) )
            {
              v12[0] = &v14;
              v12[1] = &v16;
              return NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
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
            Pool2 = ExAllocatePool2(v9, v5, 1701868370LL);
            if ( Pool2 )
            {
              _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
              NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
              if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
              {
                if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                        v4,
                                        Pool2,
                                        v15,
                                        BackTrace) )
                {
                  Pool2 += 16LL;
                  return Pool2;
                }
              }
              else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                           v4,
                                           Pool2,
                                           v15,
                                           BackTrace) )
              {
                return Pool2;
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
