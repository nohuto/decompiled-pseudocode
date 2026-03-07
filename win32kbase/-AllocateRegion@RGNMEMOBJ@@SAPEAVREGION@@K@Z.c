struct REGION *__fastcall RGNMEMOBJ::AllocateRegion(__int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // r15
  __int64 v3; // rbx
  __int64 v4; // rsi
  _QWORD *v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rdi
  ULONG ClearBits; // eax
  ULONG v9; // r14d
  ULONG v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rsi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  void *v20; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v21; // rsi
  unsigned __int64 v22; // rdi
  int v23; // eax
  __int64 Pool2; // rdi
  void *v25; // rax
  _QWORD *v26; // rdi
  __int64 v27; // rbx
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  char v30; // r15
  unsigned __int64 v31; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD *v34; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v35; // [rsp+130h] [rbp+77h] BYREF
  void *v36; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = (unsigned int)a1;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 56LL);
  if ( !v2 )
    return 0LL;
  if ( *(_BYTE *)(v2 + 36) )
  {
    v14 = ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(v2 + 24));
    goto LABEL_11;
  }
  v3 = *(_QWORD *)(v2 + 16);
  v4 = 0LL;
  v31 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = *(_QWORD **)v2;
  if ( *(_QWORD *)v2 == v2 )
    goto LABEL_28;
  do
  {
    v6 = v5[4];
    v32[0] = *(_QWORD *)v6;
    v7 = v32[0];
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    ClearBits = RtlFindClearBits(
                  (PRTL_BITMAP)(*(_QWORD *)(v6 + 24) ^ *(_QWORD *)(v6 + 16)),
                  1u,
                  *(_DWORD *)(v6 + 32) < 0x100u ? *(_DWORD *)(v6 + 32) : 0);
    v9 = ClearBits;
    if ( ClearBits == -1 )
    {
LABEL_17:
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(v32);
      goto LABEL_18;
    }
    v10 = ClearBits;
    v11 = *(_DWORD *)(v6 + 36);
    v12 = v10 >> 5;
    if ( v11 >= 8 || v12 < v11 )
    {
      v34 = (_QWORD *)(v6 + 8);
      LODWORD(v35) = v12 << 12;
    }
    else
    {
      v19 = v12 << 12;
      v20 = (void *)(v19 + (*(_QWORD *)(v6 + 8) ^ *(_QWORD *)(v6 + 16)));
      v35 = v19;
      v36 = v20;
      v34 = (_QWORD *)(v6 + 8);
      if ( (int)MmCommitSessionMappedView(v20, 4096LL) < 0 )
        goto LABEL_17;
      memset(v36, 0, 0x1000uLL);
      ++*(_DWORD *)(v6 + 36);
    }
    RtlTestBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 16) ^ *(_QWORD *)(v6 + 24)), v9);
    RtlSetBit((PRTL_BITMAP)(*(_QWORD *)(v6 + 16) ^ *(_QWORD *)(v6 + 24)), v9);
    if ( ++*(_DWORD *)(v6 + 32) >= 0x100u )
      *(_DWORD *)(v6 + 32) = 0;
    v13 = (unsigned int)v35 + (*v34 ^ *(_QWORD *)(v6 + 16));
    ExReleasePushLockExclusiveEx(v7, 0LL);
    KeLeaveCriticalRegion();
    v14 = (_QWORD *)(v13 + ((unsigned __int8)(v9 & 0x1F) << 7));
    if ( v14 )
    {
      ExReleasePushLockSharedEx(v3, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_11;
    }
LABEL_18:
    v5 = (_QWORD *)*v5;
  }
  while ( v5 != (_QWORD *)v2 );
  v4 = v31;
LABEL_28:
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v25 = NSInstrumentation::CSectionEntry<32768,128>::Create();
  v26 = v25;
  if ( v25 )
  {
    v4 = NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*((__int64 **)v25 + 4));
    if ( v4 )
    {
      v27 = *(_QWORD *)(v2 + 16);
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v27, 0LL);
      v28 = *(_QWORD **)(v2 + 8);
      if ( *v28 != v2 )
        __fastfail(3u);
      v26[1] = v28;
      *v26 = v2;
      *v28 = v26;
      *(_DWORD *)(v2 + 32) += 256;
      *(_QWORD *)(v2 + 8) = v26;
      ExReleasePushLockExclusiveEx(v27, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v26);
      ExFreePoolWithTag(v26, 0);
    }
  }
  v14 = (_QWORD *)v4;
LABEL_11:
  v16 = v14;
  if ( v14 )
  {
    if ( (_DWORD)v1 == 112 )
    {
      v18 = SGDGetSessionState(v15);
      v14[4] = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
                 *(NSInstrumentation::CLeakTrackingAllocator **)(v18 + 24),
                 *(void **)(*(_QWORD *)(v18 + 24) + 6376LL));
LABEL_15:
      if ( v14[4] )
        return (struct REGION *)v16;
      REGION::vDeleteREGION(v14);
      return 0LL;
    }
    if ( (unsigned int)v1 <= 0x70 )
      goto LABEL_15;
    v21 = gpLeakTrackingAllocator;
    LODWORD(v34) = 1852011335;
    v22 = v1;
    v36 = (void *)260;
    v31 = v1;
    v23 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(262LL, v1, 1852011335LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v21 + 14);
      goto LABEL_27;
    }
    if ( v23 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E637347u)
        && v1 + 16 > v1 )
      {
        v29 = (_QWORD *)ExAllocatePool2((unsigned __int64)v36 | 2, v1 + 16, (unsigned int)v34);
        Pool2 = (__int64)v29;
        if ( !v29
          || (_InterlockedIncrement64((volatile signed __int64 *)v21 + 14),
              *v29 = 1852011335LL,
              Pool2 = (__int64)(v29 + 2),
              v29 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v21 + 1),
            (const void *)0x6E637347);
        }
        goto LABEL_27;
      }
      goto LABEL_55;
    }
    if ( v23 == 2 )
    {
      v35 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6E637347u, &v35) )
      {
        v32[0] = &v36;
        v32[1] = &v34;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_4d7361c25cefbba13618e79d09554cff__unsigned___int64___(
                  v21,
                  v32,
                  &v31);
LABEL_27:
        v14[4] = Pool2;
        goto LABEL_15;
      }
      v30 = 0;
      if ( v1 < 0x1000 || (v1 & 0xFFF) != 0 )
      {
        v22 = v1 + 16;
        v30 = 1;
        v31 = v1 + 16;
      }
      Pool2 = ExAllocatePool2(262LL, v22, 1852011335LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v21 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v30 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v21,
                                  Pool2,
                                  v35,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_27;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v21,
                                     Pool2,
                                     v35,
                                     BackTrace) )
        {
          goto LABEL_27;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v21 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_55:
    Pool2 = 0LL;
    goto LABEL_27;
  }
  return (struct REGION *)v16;
}
