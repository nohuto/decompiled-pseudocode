// local variable allocation has failed, the output may be wrong!
PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  const void *v3; // rsi
  char v4; // r12
  ULONG v5; // edx
  size_t v6; // r14
  NSInstrumentation::CLeakTrackingAllocator *v7; // rdi
  int v8; // eax
  __int64 Pool2; // rbx
  int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct _ERESOURCE *v13; // rsi
  __int64 *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // r8d
  struct _ERESOURCE *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64; // rax
  _QWORD *v23; // rax
  __int64 v24; // r10
  char v25; // r15
  __int64 v26; // [rsp+30h] [rbp-89h] BYREF
  __int64 v27; // [rsp+38h] [rbp-81h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-79h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-69h] BYREF
  ULONG v30; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v31; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = (const void *)ulTag;
  v4 = fl;
  if ( cjMemSize - 1 > 0xFFFFFFDE )
    return 0LL;
  v5 = cjMemSize + 32;
  if ( v5 >= 0x2710000 )
    return 0LL;
  v6 = v5;
  if ( (fl & 2) == 0 )
  {
    v7 = gpLeakTrackingAllocator;
    v30 = ulTag;
    v26 = 260LL;
    v27 = v5;
    v8 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(262LL, v5, ulTag);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 14);
      goto LABEL_7;
    }
    if ( v8 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, ulTag)
        && v6 + 16 >= v6 )
      {
        v23 = (_QWORD *)ExAllocatePool2(v26 | 2, v6 + 16, v30);
        Pool2 = (__int64)v23;
        if ( !v23
          || (_InterlockedIncrement64((volatile signed __int64 *)v7 + 14),
              *v23 = v3,
              Pool2 = (__int64)(v23 + 2),
              v23 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v7 + 1),
            v3);
        }
        goto LABEL_7;
      }
      goto LABEL_41;
    }
    if ( v8 == 2 )
    {
      v31 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, ulTag, &v31) )
      {
        v28[0] = &v26;
        v28[1] = &v30;
        UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                                                                                           v7,
                                                                                           v28,
                                                                                           &v27);
        goto LABEL_20;
      }
      v25 = 0;
      if ( v6 < 0x1000 || (v6 & 0xFFF) != 0 )
      {
        v24 += 16LL;
        v25 = 1;
        v27 = v24;
      }
      Pool2 = ExAllocatePool2(262LL, v24, (unsigned int)v3);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v25 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v7,
                                  Pool2,
                                  v31,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_7;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v7,
                                     Pool2,
                                     v31,
                                     BackTrace) )
        {
          goto LABEL_7;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v7 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_41:
    Pool2 = 0LL;
    goto LABEL_7;
  }
  UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                                                                     gpLeakTrackingAllocator,
                                                                                     68LL,
                                                                                     v5,
                                                                                     ulTag);
LABEL_20:
  Pool2 = UntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64;
LABEL_7:
  v10 = v4 & 1;
  if ( Pool2 )
  {
    if ( v10 )
      memset((void *)Pool2, 0, v6);
    v12 = *(_QWORD *)(SGDGetSessionState(*(_QWORD *)&fl) + 24);
    *(_DWORD *)(Pool2 + 16) = 0;
    v13 = *(struct _ERESOURCE **)(v12 + 3216);
    if ( v13 )
    {
      PsEnterPriorityRegion(v11);
      ExEnterCriticalRegionAndAcquireResourceExclusive(v13);
    }
    v14 = *(__int64 **)(v12 + 3208);
    if ( *v14 != v12 + 3200 )
      __fastfail(3u);
    *(_QWORD *)Pool2 = v12 + 3200;
    *(_QWORD *)(Pool2 + 8) = v14;
    *v14 = Pool2;
    *(_QWORD *)(v12 + 3208) = Pool2;
    v15 = *(_QWORD *)(v12 + 3216);
    if ( v15 )
    {
      v16 = *(_QWORD *)(SGDGetSessionState(v14) + 24);
      if ( *(_DWORD *)(v16 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          v16,
          (unsigned int)&LockRelease,
          v17,
          v15,
          (__int64)L"GreBaseGlobals.MultiUserEngAllocListLock");
      v18 = *(struct _ERESOURCE **)(v12 + 3216);
      if ( v18 )
      {
        ExReleaseResourceAndLeaveCriticalRegion(v18);
        PsLeavePriorityRegion(v20, v19);
      }
    }
    Pool2 += 32LL;
  }
  return (PVOID)Pool2;
}
