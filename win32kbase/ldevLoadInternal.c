__int64 __fastcall ldevLoadInternal(unsigned int (__fastcall *a1)(__int64, __int64, __int128 *), int a2)
{
  __int64 v4; // rsi
  NSInstrumentation::CLeakTrackingAllocator *v5; // rdi
  int v6; // eax
  __int64 Pool2; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v15; // rax
  __int64 v16; // r10
  __int64 v17; // [rsp+20h] [rbp-99h] BYREF
  __int128 v18; // [rsp+30h] [rbp-89h] BYREF
  __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v21; // [rsp+130h] [rbp+77h] BYREF
  unsigned __int64 v22; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v4 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8), 16);
  v5 = gpLeakTrackingAllocator;
  v21 = 1986292807;
  v17 = 260LL;
  v19 = 904LL;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 904LL, 1986292807LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
    goto LABEL_4;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v22 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646C47u, &v22) )
      {
        *(_QWORD *)&v18 = &v17;
        *((_QWORD *)&v18 + 1) = &v21;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v5,
                  (__int64)&v18,
                  &v19);
        goto LABEL_4;
      }
      Pool2 = ExAllocatePool2(v16, 920LL, 1986292807LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v5,
                                  Pool2,
                                  v22,
                                  BackTrace) )
          {
            v8 = Pool2;
            goto LABEL_5;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v5,
                                     Pool2,
                                     v22,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_29:
    v8 = 0LL;
    goto LABEL_10;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646C47u) )
    goto LABEL_29;
  v15 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, 920LL, v21);
  Pool2 = (__int64)v15;
  if ( !v15
    || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
        *v15 = 1986292807LL,
        Pool2 = (__int64)(v15 + 2),
        v15 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v5 + 1),
      (const void *)0x76646C47);
  }
LABEL_4:
  v8 = Pool2;
  if ( !Pool2 )
    goto LABEL_10;
LABEL_5:
  *(_DWORD *)(Pool2 + 60) = 0;
  *(_QWORD *)(Pool2 + 896) = Pool2 + 64;
  v18 = 0LL;
  if ( !a1(196865LL, 16LL, &v18) || !(unsigned int)ldevFillTable(Pool2, (int *)&v18) )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
    goto LABEL_29;
  }
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_DWORD *)(Pool2 + 28) = 1;
  v9 = *(_QWORD *)(v4 + 1888);
  if ( v9 )
    *(_QWORD *)(v9 + 8) = Pool2;
  v10 = *(_QWORD *)(v4 + 1888);
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)Pool2 = v10;
  *(_QWORD *)(v4 + 1888) = Pool2;
  *(_QWORD *)(Pool2 + 16) = 0LL;
LABEL_10:
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v4 + 8));
  v11 = *(struct _ERESOURCE **)(v4 + 8);
  if ( v11 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v11);
    PsLeavePriorityRegion(v13, v12);
  }
  return v8;
}
