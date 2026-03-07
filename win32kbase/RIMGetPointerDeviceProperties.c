__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v4; // r15
  unsigned __int16 v5; // bx
  unsigned int v8; // r14d
  char *v9; // rsi
  unsigned __int16 v10; // di
  int v11; // ecx
  __int64 v12; // rax
  NSInstrumentation::CLeakTrackingAllocator *v13; // rbx
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rax
  int v21; // eax
  char v22; // r12
  __int64 v23; // r15
  NSInstrumentation::CLeakTrackingAllocator *v24; // rsi
  unsigned __int64 v25; // rbx
  int v26; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v28; // rax
  unsigned int v29; // r10d
  __int64 v30; // r11
  __int64 v31; // r8
  __int64 v32; // r15
  _WORD *v33; // r14
  unsigned int v34; // r8d
  _WORD *v35; // rdx
  __int64 v36; // rax
  unsigned __int16 v38; // [rsp+58h] [rbp-B0h]
  unsigned int v39; // [rsp+60h] [rbp-A8h] BYREF
  int v40; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v42; // [rsp+70h] [rbp-98h] BYREF
  __int64 v43; // [rsp+78h] [rbp-90h] BYREF
  int v44; // [rsp+80h] [rbp-88h] BYREF
  __int64 v45; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+98h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v49; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v51; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v52; // [rsp+C0h] [rbp-48h]
  __int64 v53; // [rsp+C8h] [rbp-40h]
  PVOID BackTrace[20]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID v55[26]; // [rsp+178h] [rbp+70h] BYREF

  v4 = 0;
  v5 = 0;
  v44 = 0;
  v38 = 0;
  v41 = 0;
  v8 = 0;
  LOWORD(v40) = 0;
  v9 = 0LL;
  LOWORD(v39) = 0;
  v10 = 0;
  v45 = 0LL;
  if ( (unsigned int)GetPreparsedData(a1, &v45) )
  {
    v11 = *(_DWORD *)(a1 + 360);
    if ( (v11 & 2) != 0 )
    {
      if ( !*(_QWORD *)(a1 + 760) )
      {
        v39 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3619);
        v11 = *(_DWORD *)(a1 + 360);
      }
      v12 = *(_QWORD *)(a1 + 760);
      v5 = *(_WORD *)(v12 + 4);
      v10 = *(_WORD *)(v12 + 10);
      v38 = v5;
      LOWORD(v39) = v10;
    }
    if ( (v11 & 0x20) != 0 )
    {
      v5 = *(_WORD *)(a1 + 776);
      v38 = v5;
    }
    if ( !a4 )
    {
      LODWORD(v42) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3630);
    }
    if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 0LL, v5, 0LL, 0LL, (__int64)&v40, v45) == -1072627705 )
    {
      v13 = gpLeakTrackingAllocator;
      LODWORD(v42) = 1668707157;
      v48 = 260LL;
      v14 = *(_DWORD *)gpLeakTrackingAllocator;
      v15 = 72LL * ((unsigned __int16)v40 + (unsigned int)v10);
      v49 = v15;
      if ( !v14 )
      {
        Pool2 = ExAllocatePool2(260LL, v15, 1668707157LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v13 + 14);
LABEL_31:
        if ( Pool2 )
        {
LABEL_34:
          if ( !(unsigned int)PopulatePropertyUsageValues(a1, &v41, a4, v38, v40, Pool2, a2, a3, v45) )
            goto LABEL_82;
          v20 = *(_QWORD *)(a1 + 760);
          if ( v20 && *(_WORD *)(v20 + 8) )
          {
            if ( v41 >= a4 )
            {
              LODWORD(v43) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3654);
            }
            if ( !*(_WORD *)(*(_QWORD *)(a1 + 760) + 10LL) )
            {
              LODWORD(v43) = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3655);
            }
            v21 = PopulatePropertyUsageValues(
                    a1,
                    &v41,
                    a4,
                    *(_WORD *)(*(_QWORD *)(a1 + 760) + 8LL),
                    v39,
                    Pool2 + 72LL * v41,
                    a2,
                    a3,
                    v45);
            v22 = 0;
            if ( !v21 )
              goto LABEL_82;
          }
          else
          {
            v22 = 0;
          }
          v23 = a2 - v41;
          v44 = a2 - v41;
          if ( a2 == v41 )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3684);
            goto LABEL_82;
          }
          v24 = gpLeakTrackingAllocator;
          v53 = (unsigned int)v23;
          v25 = 72 * v23;
          v39 = 1668707157;
          v26 = *(_DWORD *)gpLeakTrackingAllocator;
          v50 = 260LL;
          v43 = 72 * v23;
          switch ( v26 )
          {
            case 0:
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                 260LL,
                                                                                                 72 * v23,
                                                                                                 1668707157LL);
              if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                _InterlockedIncrement64((volatile signed __int64 *)v24 + 14);
              goto LABEL_66;
            case 1:
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x63767355u)
                && v25 + 16 >= v25 )
              {
                v28 = (_QWORD *)ExAllocatePool2(v50 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v39);
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v28;
                if ( !v28
                  || (_InterlockedIncrement64((volatile signed __int64 *)v24 + 14),
                      *v28 = 1668707157LL,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v28 + 2),
                      v28 == (_QWORD *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v24 + 1),
                    0x63767355uLL);
                }
LABEL_66:
                v9 = (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                  goto LABEL_70;
LABEL_82:
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
                if ( v9 )
                  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v9);
                return v8;
              }
              break;
            case 2:
              v47 = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668707157, &v47) )
              {
                v51 = &v50;
                v52 = &v39;
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                   (__int64)v24,
                                                                                                   (__int64)&v51,
                                                                                                   &v43);
                goto LABEL_66;
              }
              if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
              {
                v25 += 16LL;
                v22 = 1;
                v43 = v25;
              }
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                                 v30,
                                                                                                 v25,
                                                                                                 v29);
              if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)v24 + 16);
                NSInstrumentation::CBackTrace::CBackTrace(v55);
                if ( v22
                  && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
                   + 16 < 0x1000 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                         (__int64)v24,
                         (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                         v47,
                         (struct NSInstrumentation::CBackTrace *)v55) )
                  {
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                    goto LABEL_66;
                  }
                }
                else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            (__int64)v24,
                            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                            v47,
                            (struct NSInstrumentation::CBackTrace *)v55) )
                {
                  v9 = (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
LABEL_70:
                  v31 = v38;
                  if ( *(_DWORD *)(a1 + 24) == 7 )
                    LOWORD(v31) = 0;
                  if ( (int)rimHidP_GetSpecificButtonCaps(
                              0LL,
                              0LL,
                              v31,
                              0LL,
                              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                              (__int64)&v44,
                              v45) < 0 )
                  {
                    v8 = 0;
                  }
                  else if ( (_DWORD)v23 == v44
                         || (LODWORD(v43) = 0x20000,
                             MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3703),
                             (_DWORD)v23 == v44) )
                  {
                    v32 = v53;
                    v33 = (_WORD *)(a3 + 28LL * v41);
                    memset(v33, 0, 28 * v53);
                    v34 = 0;
                    if ( v41 < a2 )
                    {
                      v35 = v33 + 13;
                      do
                      {
                        v36 = v34++;
                        *(v35 - 1) = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                              + 72 * v36);
                        *v35 = *(_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                        + 72 * v36
                                        + 56);
                        *(_DWORD *)(v35 - 11) = 1;
                        v35 += 14;
                        --v32;
                      }
                      while ( v32 );
                    }
                    v8 = 1;
                  }
                  goto LABEL_82;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v24 + 17);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
              }
              break;
          }
          v9 = 0LL;
          goto LABEL_82;
        }
        return 0;
      }
      if ( v14 == 1 )
      {
        if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63767355u)
          || v15 + 16 < v15 )
        {
          return 0;
        }
        v17 = (_QWORD *)ExAllocatePool2(v48 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, (unsigned int)v42);
        Pool2 = (__int64)v17;
        if ( !v17
          || (_InterlockedIncrement64((volatile signed __int64 *)v13 + 14),
              *v17 = 1668707157LL,
              Pool2 = (__int64)(v17 + 2),
              v17 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v13 + 1),
            0x63767355uLL);
        }
        goto LABEL_31;
      }
      if ( v14 != 2 )
        return 0;
      v46 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668707157, &v46) )
      {
        v51 = &v48;
        v52 = (unsigned int *)&v42;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v13,
                  (__int64)&v51,
                  &v49);
        goto LABEL_31;
      }
      if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
      {
        v15 += 16LL;
        v4 = 1;
        v49 = v15;
      }
      Pool2 = ExAllocatePool2(v19, v15, v18);
      if ( !Pool2 )
        return 0;
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v4 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v13,
               (const void *)Pool2,
               v46,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_31;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v13,
                  Pool2,
                  v46,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_34;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v13 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      return 0;
    }
  }
  return 0LL;
}
