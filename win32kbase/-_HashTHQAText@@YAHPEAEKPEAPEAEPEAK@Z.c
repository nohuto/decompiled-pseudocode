__int64 __fastcall _HashTHQAText(unsigned __int8 *a1, __int64 a2, unsigned __int8 **a3, unsigned int *a4)
{
  char v4; // r12
  char *v6; // rsi
  unsigned int v7; // edi
  NTSTATUS v8; // eax
  int v9; // edx
  int v10; // r8d
  char v11; // r9
  PDEVICE_OBJECT v12; // rcx
  __int16 v13; // r10
  NTSTATUS Property; // eax
  NSInstrumentation::CLeakTrackingAllocator *v15; // rsi
  unsigned __int64 v16; // rdi
  int v17; // eax
  __int64 Pool2; // rdi
  _QWORD *v19; // rax
  __int64 v20; // r10
  char v21; // r14
  NTSTATUS v22; // eax
  int v23; // edx
  int v24; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v25; // r14
  unsigned __int64 v26; // r15
  int v27; // eax
  unsigned __int8 *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // r15
  unsigned __int8 *v29; // rax
  unsigned int v30; // edx
  __int64 v31; // r10
  __int64 v32; // r15
  NTSTATUS v33; // eax
  int v34; // edx
  int v35; // r8d
  char v36; // r9
  PDEVICE_OBJECT v37; // rcx
  __int16 v38; // r10
  NTSTATUS v39; // eax
  NTSTATUS v40; // eax
  UCHAR pbOutput[4]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+60h] [rbp-A8h] BYREF
  ULONG pcbResult; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+78h] [rbp-90h] BYREF
  BCRYPT_HASH_HANDLE phHash; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v49; // [rsp+90h] [rbp-78h] BYREF
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v51; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v54; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v55; // [rsp+C0h] [rbp-48h]
  PVOID BackTrace[20]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v57[26]; // [rsp+168h] [rbp+60h] BYREF
  ULONG v59; // [rsp+258h] [rbp+150h] BYREF
  unsigned int *v60; // [rsp+260h] [rbp+158h]

  v60 = a4;
  v4 = 0;
  *a3 = 0LL;
  *a4 = 0;
  pcbResult = 0;
  v59 = 0;
  *(_DWORD *)pbOutput = 0;
  v6 = 0LL;
  v7 = 0;
  phAlgorithm = 0LL;
  phHash = 0LL;
  v8 = BCryptOpenAlgorithmProvider(&phAlgorithm, L"SHA256", 0LL, 0);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v9) = 0;
    }
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 18;
LABEL_9:
      WPP_RECORDER_AND_TRACE_SF_D(
        v12->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        3,
        1,
        v13,
        (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
        v11);
      goto LABEL_120;
    }
    goto LABEL_120;
  }
  Property = BCryptGetProperty(phAlgorithm, L"ObjectLength", pbOutput, 4u, &pcbResult, 0);
  v11 = Property;
  if ( Property >= 0 )
  {
    v15 = gpLeakTrackingAllocator;
    v16 = *(unsigned int *)pbOutput;
    v43 = 1668313941;
    v50 = 260LL;
    v17 = *(_DWORD *)gpLeakTrackingAllocator;
    v51 = *(unsigned int *)pbOutput;
    switch ( v17 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, *(unsigned int *)pbOutput, 1668313941LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
        goto LABEL_38;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x63707355u)
          && v16 + 16 >= v16 )
        {
          v19 = (_QWORD *)ExAllocatePool2(v50 & 0xFFFFFFFFFFFFFFFDuLL, v16 + 16, v43);
          Pool2 = (__int64)v19;
          if ( !v19
            || (_InterlockedIncrement64((volatile signed __int64 *)v15 + 14),
                *v19 = 1668313941LL,
                Pool2 = (__int64)(v19 + 2),
                v19 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v15 + 1),
              0x63707355uLL);
          }
LABEL_38:
          v6 = (char *)Pool2;
          if ( !Pool2 )
          {
LABEL_112:
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v9) = 0;
            }
            if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v9,
                v10,
                (_DWORD)gRimLog,
                3,
                1,
                20,
                (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
            }
LABEL_119:
            v7 = 0;
            goto LABEL_120;
          }
LABEL_42:
          v22 = BCryptGetProperty(phAlgorithm, L"HashDigestLength", (PUCHAR)&v59, 4u, &pcbResult, 0);
          if ( v22 < 0 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
              || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
            {
              LOBYTE(v23) = 0;
            }
            if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_D(
                WPP_GLOBAL_Control->AttachedDevice,
                v23,
                v24,
                (_DWORD)gRimLog,
                3,
                1,
                21,
                (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
                v22);
            }
            goto LABEL_119;
          }
          v25 = gpLeakTrackingAllocator;
          LODWORD(v45) = 1668313941;
          v26 = v59;
          v52 = 260LL;
          v27 = *(_DWORD *)gpLeakTrackingAllocator;
          v53 = v59;
          switch ( v27 )
          {
            case 0:
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (unsigned __int8 *)ExAllocatePool2(260LL, v59, 1668313941LL);
              if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                _InterlockedIncrement64((volatile signed __int64 *)v25 + 14);
              goto LABEL_70;
            case 1:
              if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
                     gpLeakTrackingAllocator,
                     0x63707355u)
                && v26 + 16 >= v26 )
              {
                v29 = (unsigned __int8 *)ExAllocatePool2(v52 & 0xFFFFFFFFFFFFFFFDuLL, v26 + 16, (unsigned int)v45);
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v29;
                if ( !v29
                  || (_InterlockedIncrement64((volatile signed __int64 *)v25 + 14),
                      *(_QWORD *)v29 = 1668313941LL,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v29 + 16,
                      v29 == (unsigned __int8 *)-16LL) )
                {
                  NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
                    *((NSInstrumentation::CPointerHashTable **)v25 + 1),
                    0x63707355uLL);
                }
LABEL_70:
                *a3 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
                if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
                {
LABEL_102:
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                    || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                  {
                    LOBYTE(v23) = 0;
                  }
                  if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    WPP_RECORDER_AND_TRACE_SF_(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v23,
                      v24,
                      (_DWORD)gRimLog,
                      3,
                      1,
                      22,
                      (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids);
                  }
                  goto LABEL_109;
                }
LABEL_74:
                v33 = BCryptCreateHash(phAlgorithm, &phHash, (PUCHAR)Pool2, *(ULONG *)pbOutput, 0LL, 0, 0);
                v36 = v33;
                if ( v33 >= 0 )
                {
                  v39 = BCryptHashData(phHash, a1, 4u, 0);
                  v36 = v39;
                  if ( v39 >= 0 )
                  {
                    v40 = BCryptFinishHash(phHash, *a3, v59, 0);
                    v36 = v40;
                    if ( v40 >= 0 )
                    {
                      v7 = 1;
                      *v60 = v59;
                      goto LABEL_120;
                    }
                    v37 = WPP_GLOBAL_Control;
                    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                    {
                      LOBYTE(v34) = 0;
                    }
                    LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( !(_BYTE)v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_109;
                    v38 = 25;
                  }
                  else
                  {
                    v37 = WPP_GLOBAL_Control;
                    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                    {
                      LOBYTE(v34) = 0;
                    }
                    LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                    if ( !(_BYTE)v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                      goto LABEL_109;
                    v38 = 24;
                  }
                }
                else
                {
                  v37 = WPP_GLOBAL_Control;
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
                    || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
                  {
                    LOBYTE(v34) = 0;
                  }
                  LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( !(_BYTE)v34 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                    goto LABEL_109;
                  v38 = 23;
                }
                WPP_RECORDER_AND_TRACE_SF_D(
                  v37->AttachedDevice,
                  v34,
                  v35,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  v38,
                  (__int64)&WPP_f41d733443e9349cb6109e16b66b7a0d_Traceguids,
                  v36);
LABEL_109:
                v7 = 0;
                goto LABEL_120;
              }
              break;
            case 2:
              v49 = 0LL;
              if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313941, &v49) )
              {
                v54 = &v52;
                v55 = (unsigned int *)&v45;
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (unsigned __int8 *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___((__int64)v25, (__int64)&v54, &v53);
                goto LABEL_70;
              }
              if ( v26 < 0x1000 || (v26 & 0xFFF) != 0 )
              {
                v26 += 16LL;
                v4 = 1;
                v53 = v26;
              }
              v32 = ExAllocatePool2(v31, v26, v30);
              if ( v32 )
              {
                _InterlockedIncrement64((volatile signed __int64 *)v25 + 16);
                NSInstrumentation::CBackTrace::CBackTrace(v57);
                if ( v4 && (unsigned __int64)(v32 & 0xFFF) + 16 < 0x1000 )
                {
                  if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                         (__int64)v25,
                         (const void *)v32,
                         v49,
                         (struct NSInstrumentation::CBackTrace *)v57) )
                  {
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (unsigned __int8 *)(v32 + 16);
                    goto LABEL_70;
                  }
                }
                else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                            (__int64)v25,
                            v32,
                            v49,
                            (struct NSInstrumentation::CBackTrace *)v57) )
                {
                  *a3 = (unsigned __int8 *)v32;
                  goto LABEL_74;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v25 + 17);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v32);
              }
              break;
          }
          *a3 = 0LL;
          goto LABEL_102;
        }
        break;
      case 2:
        v48 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1668313941, &v48) )
        {
          v54 = &v50;
          v55 = &v43;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v15,
                    (__int64)&v54,
                    &v51);
          goto LABEL_38;
        }
        v21 = 0;
        if ( v16 < 0x1000 || (v16 & 0xFFF) != 0 )
        {
          v16 += 16LL;
          v21 = 1;
          v51 = v16;
        }
        Pool2 = ExAllocatePool2(v20, v16, 1668313941LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v15,
                   (const void *)Pool2,
                   v48,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_38;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v15,
                      Pool2,
                      v48,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            v6 = (char *)Pool2;
            goto LABEL_42;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    v6 = 0LL;
    goto LABEL_112;
  }
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v9) = 0;
  }
  LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 19;
    goto LABEL_9;
  }
LABEL_120:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, 0);
  if ( phHash )
    BCryptDestroyHash(phHash);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  if ( !v7 && *a3 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)*a3);
    *a3 = 0LL;
  }
  return v7;
}
