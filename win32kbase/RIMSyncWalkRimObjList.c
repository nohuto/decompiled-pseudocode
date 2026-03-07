void __fastcall RIMSyncWalkRimObjList(__int64 a1, __int64 a2, void (__fastcall *a3)(_QWORD *, __int64), __int64 a4)
{
  int v4; // r12d
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  unsigned int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  NSInstrumentation::CLeakTrackingAllocator *v25; // rdi
  unsigned __int64 v26; // rbx
  int v27; // eax
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 i; // rax
  _QWORD *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  char *v37; // r14
  __int64 v38; // r15
  _QWORD *v39; // rsi
  __int64 v40; // rdi
  char *v41; // rax
  __int64 v42; // r10
  char v43; // si
  __int64 Pool2; // [rsp+28h] [rbp-A9h]
  unsigned __int64 v45[2]; // [rsp+38h] [rbp-99h] BYREF
  __int64 v46; // [rsp+48h] [rbp-89h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-81h] BYREF
  PVOID BackTrace[26]; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v51; // [rsp+150h] [rbp+7Fh] BYREF

  v4 = a1;
  if ( !*(_BYTE *)(SGDGetUserSessionState(a1, a2, a3, a4) + 352) )
    return;
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
  v10 = 0;
  Pool2 = 0LL;
  v11 = SGDGetUserSessionState(v6, v5, v7, v8);
  RIMLockExclusive(v11 + 240);
  v16 = *(__int64 **)(SGDGetUserSessionState(v13, v12, v14, v15) + 304);
  if ( v16 != (__int64 *)(SGDGetUserSessionState(v18, v17, v19, v20) + 304) )
  {
    do
    {
      if ( !*((_BYTE *)v16 + 64) && !*((_BYTE *)v16 + 65) )
        ++v10;
      v16 = (__int64 *)*v16;
    }
    while ( v16 != (__int64 *)(SGDGetUserSessionState(v22, v21, v23, v24) + 304) );
    if ( v10 )
    {
      v25 = gpLeakTrackingAllocator;
      v51 = 1886221394;
      v46 = 260LL;
      v26 = 8LL * v10;
      v27 = *(_DWORD *)gpLeakTrackingAllocator;
      v47 = v26;
      switch ( v27 )
      {
        case 0:
          Pool2 = ExAllocatePool2(260LL, 8LL * v10, 1886221394LL);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)Pool2;
          if ( Pool2 )
            _InterlockedIncrement64((volatile signed __int64 *)v25 + 14);
          goto LABEL_11;
        case 1:
          if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7452u)
            && v26 + 16 >= v26 )
          {
            v41 = (char *)ExAllocatePool2(v46 & 0xFFFFFFFFFFFFFFFDuLL, v26 + 16, v51);
            Pool2 = (__int64)v41;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v41;
            if ( !v41
              || (_InterlockedIncrement64((volatile signed __int64 *)v25 + 14),
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v41 + 16,
                  *(_QWORD *)v41 = 1886221394LL,
                  Pool2 = (__int64)(v41 + 16),
                  v41 == (char *)-16LL) )
            {
              NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                *((NSInstrumentation::CPointerHashTable **)v25 + 1),
                (const void *)0x706D7452);
            }
            goto LABEL_11;
          }
          break;
        case 2:
          v45[0] = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7452u, v45) )
          {
            v45[0] = (unsigned __int64)&v46;
            v45[1] = (unsigned __int64)&v51;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___((__int64)v25, (__int64)v45, &v47);
            Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            goto LABEL_11;
          }
          v43 = 0;
          if ( v26 < 0x1000 || (v26 & 0xFFF) != 0 )
          {
            v26 += 16LL;
            v43 = 1;
            v47 = v26;
          }
          Pool2 = ExAllocatePool2(v42, v26, 1886221394LL);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)Pool2;
          if ( Pool2 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v25 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( v43 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
            {
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v25,
                                      Pool2,
                                      v45[0],
                                      BackTrace) )
              {
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)(Pool2 + 16);
LABEL_49:
                Pool2 = (__int64)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_11:
                v10 = 0;
                v28 = *(_QWORD **)(SGDGetUserSessionState(v22, v21, v23, v24) + 304);
                for ( i = SGDGetUserSessionState(v30, v29, v31, v32);
                      v28 != (_QWORD *)(i + 304);
                      i = SGDGetUserSessionState(v22, v21, v23, v24) )
                {
                  v34 = v28 - 2;
                  if ( !*((_BYTE *)v28 + 64)
                    && !*((_BYTE *)v34 + 81)
                    && ObReferenceObjectByPointer(v28 - 2, 3u, ExRawInputManagerObjectType, 0) >= 0 )
                  {
                    v35 = v10++;
                    *(_QWORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v35] = v34;
                  }
                  v28 = (_QWORD *)*v28;
                }
                goto LABEL_18;
              }
            }
            else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                         v25,
                                         Pool2,
                                         v45[0],
                                         BackTrace) )
            {
              goto LABEL_11;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v25 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
          }
          break;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
      goto LABEL_49;
    }
  }
LABEL_18:
  v36 = SGDGetUserSessionState(v22, v21, v23, v24);
  *(_QWORD *)(v36 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v36 + 240, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    v37 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
    v38 = v10;
    do
    {
      v39 = *(_QWORD **)v37;
      v40 = *(_QWORD *)v37 + 760LL;
      if ( v4 == 1 )
      {
        RIMLockExclusive((__int64)(v39 + 13));
        RIMLockExclusive(v40);
      }
      a3(v39, a2);
      if ( v4 == 1 )
      {
        *(_QWORD *)(v40 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v40, 0LL);
        KeLeaveCriticalRegion();
        v39[14] = 0LL;
        ExReleasePushLockExclusiveEx(v39 + 13, 0LL);
        KeLeaveCriticalRegion();
      }
      ObfDereferenceObject(v39);
      v37 += 8;
      --v38;
    }
    while ( v38 );
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)Pool2;
  }
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
}
