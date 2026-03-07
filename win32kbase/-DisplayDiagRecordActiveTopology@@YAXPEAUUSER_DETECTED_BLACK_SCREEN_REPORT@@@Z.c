void __fastcall DisplayDiagRecordActiveTopology(struct USER_DETECTED_BLACK_SCREEN_REPORT *a1)
{
  int DisplayConfigBufferSizes; // eax
  __int64 v3; // rax
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // r14
  int v11; // eax
  unsigned __int64 v12; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v15; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v16; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned __int64 v17; // [rsp+130h] [rbp+77h] BYREF
  __int64 v18; // [rsp+138h] [rbp+7Fh] BYREF

  v15 = 0;
  DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(2u, (__int64)&v15);
  *((_DWORD *)a1 + 4) = DisplayConfigBufferSizes;
  if ( DisplayConfigBufferSizes < 0 )
    return;
  v3 = v15;
  *((_DWORD *)a1 + 5) = v15;
  if ( !(_DWORD)v3 )
  {
LABEL_31:
    *((_DWORD *)a1 + 4) = 14;
    return;
  }
  v4 = gpLeakTrackingAllocator;
  v5 = 216 * v3;
  v16 = 1768190805;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  v12 = v5;
  v18 = 260LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, v5, 1768190805LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
    goto LABEL_26;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v17 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x69647355u, &v17) )
      {
        v13[0] = &v18;
        v13[1] = &v16;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v4,
                  (__int64)v13,
                  &v12);
        goto LABEL_26;
      }
      v10 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v5 += 16LL;
        v10 = 1;
        v12 = v5;
      }
      Pool2 = ExAllocatePool2(v9, v5, 1768190805LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  v17,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_26;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     v17,
                                     BackTrace) )
        {
          goto LABEL_26;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_25;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x69647355u)
    || v5 + 16 < v5 )
  {
LABEL_25:
    Pool2 = 0LL;
    goto LABEL_26;
  }
  v8 = (_QWORD *)ExAllocatePool2(v18 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v16);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
        *v8 = 1768190805LL,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v4 + 1),
      (const void *)0x69647355);
  }
LABEL_26:
  if ( !Pool2 )
    goto LABEL_31;
  v11 = DrvQueryDisplayConfig(2u, &v15, Pool2, 0LL);
  *((_DWORD *)a1 + 4) = v11;
  if ( v11 >= 0 )
  {
    *((_QWORD *)a1 + 3) = Pool2;
    Pool2 = 0LL;
  }
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
}
