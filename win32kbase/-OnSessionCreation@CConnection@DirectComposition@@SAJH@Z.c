__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  DirectComposition::CConnection *v8; // rcx
  _QWORD *Pool2; // rax
  __int64 v11; // r10
  __int64 v12; // [rsp+20h] [rbp-79h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-69h] BYREF
  PVOID BackTrace[22]; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v15; // [rsp+108h] [rbp+6Fh] BYREF
  unsigned __int64 v16; // [rsp+110h] [rbp+77h] BYREF
  __int64 v17; // [rsp+118h] [rbp+7Fh] BYREF

  DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  v2 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              0x73634344u);
  v3 = v2;
  if ( !v2 )
    return (unsigned int)-1073741801;
  memset(v2, 0, sizeof(struct _ERESOURCE));
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
    return (unsigned int)v4;
  }
  DirectComposition::CConnection::s_pSessionConnectionLock = v3;
  KeQueryPerformanceCounter(&DirectComposition::CConnection::s_qpcFrequency);
  if ( a1 || (unsigned int)PsGetCurrentProcessSessionId() )
  {
    v5 = gpLeakTrackingAllocator;
    v15 = 1667449668;
    v17 = 260LL;
    v12 = 139600LL;
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v6 != 1 )
      {
        if ( v6 != 2 )
          goto LABEL_28;
        v16 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x63634344u, &v16) )
        {
          v13[0] = &v17;
          v13[1] = &v15;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v5,
                                                                                             (__int64)v13,
                                                                                             &v12);
          goto LABEL_8;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v11,
                                                                                           139616LL,
                                                                                           1667449668LL);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_28;
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v5,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v16,
                                  BackTrace) )
          {
LABEL_9:
            DirectComposition::CConnection::s_pSessionConnection = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection((DirectComposition::CConnection *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
            if ( DirectComposition::CConnection::s_pSessionConnection )
              return (unsigned int)DirectComposition::CConnection::Initialize(v8);
            return (unsigned int)-1073741801;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v5,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v16,
                                     BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_8;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_28;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63634344u) )
        goto LABEL_28;
      Pool2 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, 139616LL, v15);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
            *Pool2 = 1667449668LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v5 + 1),
          (const void *)0x63634344);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         139600LL,
                                                                                         1667449668LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    }
LABEL_8:
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      goto LABEL_9;
LABEL_28:
    DirectComposition::CConnection::s_pSessionConnection = 0LL;
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
