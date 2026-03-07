__int64 __fastcall RIMDeadzone::Initialize(RIMDeadzone *this, const struct tagRIMDEADZONE *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // xmm0_8
  unsigned int v9; // ecx
  unsigned int v10; // edx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  __int64 v18; // r10
  char v19; // r12
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  NSInstrumentation::CLeakTrackingAllocator *v23; // rsi
  int v24; // eax
  unsigned __int64 v25; // rdi
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v27; // rax
  unsigned int v28; // edx
  __int64 v29; // r10
  char v30; // r12
  unsigned int i; // r8d
  __int64 v32; // rdx
  unsigned __int64 v34; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v36; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h]
  _QWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v43[28]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int v44; // [rsp+210h] [rbp+110h] BYREF
  unsigned int v45; // [rsp+218h] [rbp+118h] BYREF
  int v46; // [rsp+220h] [rbp+120h]
  unsigned __int64 v47; // [rsp+228h] [rbp+128h] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 2) )
  {
    v44 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 390);
  }
  ++*((_DWORD *)this + 1);
  if ( !a2 )
    goto LABEL_72;
  if ( *(_DWORD *)a2 == 1 )
  {
    if ( *((_DWORD *)a2 + 4) >= *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) >= *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)this + 4) = 1;
      *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 8);
      return v2;
    }
LABEL_72:
    v2 = -1073741811;
    goto LABEL_73;
  }
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_72;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  if ( v5 )
  {
    v7 = *((_QWORD *)a2 + 1);
    do
    {
      v8 = *(_QWORD *)(v7 + 24LL * v6 + 16);
      v9 = _mm_cvtsi128_si32(*(__m128i *)(v7 + 24LL * v6));
      v39 = *(_OWORD *)(v7 + 24LL * v6);
      v40 = v8;
      if ( v9 > 0x168 || DWORD1(v39) > 0x168 || v9 == DWORD1(v39) )
        goto LABEL_72;
      v10 = 0;
      if ( (_DWORD)v40 )
      {
        while ( *(_DWORD *)(*((_QWORD *)&v39 + 1) + 8LL * v10 + 4) >= *(_DWORD *)(*((_QWORD *)&v39 + 1) + 8LL * v10) )
        {
          if ( ++v10 >= (unsigned int)v40 )
            goto LABEL_14;
        }
        goto LABEL_72;
      }
LABEL_14:
      ;
    }
    while ( ++v6 < v5 );
  }
  v11 = gpLeakTrackingAllocator;
  *((_DWORD *)this + 4) = 2;
  v12 = *((unsigned int *)a2 + 4);
  *((_DWORD *)this + 8) = v12;
  v44 = 1853506642;
  v35 = 260LL;
  v13 = 3 * v12;
  v14 = *(_DWORD *)v11;
  v15 = 8 * v13;
  v36 = v15;
  if ( !v14 )
  {
    Pool2 = ExAllocatePool2(260LL, v15, 1853506642LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_38;
  }
  if ( v14 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v11, 0x6E7A4452u) && v15 + 16 >= v15 )
    {
      v17 = (_QWORD *)ExAllocatePool2(v35 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, v44);
      Pool2 = (__int64)v17;
      if ( !v17
        || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
            *v17 = 1853506642LL,
            Pool2 = (__int64)(v17 + 2),
            v17 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v11 + 1),
          0x6E7A4452uLL);
      }
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  if ( v14 != 2 )
    goto LABEL_37;
  v47 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v11, 1853506642, &v47) )
  {
    v19 = 0;
    if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
    {
      v15 += 16LL;
      v19 = 1;
      v36 = v15;
    }
    Pool2 = ExAllocatePool2(v18, v15, 1853506642LL);
    if ( Pool2 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v11,
               (const void *)Pool2,
               v47,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_38;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v11,
                  Pool2,
                  v47,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_38;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_37:
    Pool2 = 0LL;
    goto LABEL_38;
  }
  v41[0] = &v35;
  v41[1] = &v44;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            (__int64)v11,
            (__int64)v41,
            &v36);
LABEL_38:
  *((_QWORD *)this + 3) = Pool2;
  if ( !Pool2 )
  {
LABEL_39:
    v2 = -1073741801;
LABEL_73:
    RIMDeadzone::Release(this);
    return v2;
  }
  v20 = 0LL;
  v46 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v21 = 3 * v20;
      v22 = *((_QWORD *)a2 + 1);
      v45 = 1853506642;
      v37 = 260LL;
      *(_QWORD *)(Pool2 + 8 * v21) = *(_QWORD *)(v22 + 8 * v21);
      *(_DWORD *)(*((_QWORD *)this + 3) + 8 * v21 + 16) = *(_DWORD *)(*((_QWORD *)a2 + 1) + 8 * v21 + 16);
      v23 = gpLeakTrackingAllocator;
      v24 = *(_DWORD *)gpLeakTrackingAllocator;
      v25 = 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 8 * v21 + 16);
      v38 = v25;
      if ( !v24 )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           v25,
                                                                                           1853506642LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v23 + 14);
        goto LABEL_64;
      }
      if ( v24 == 1 )
        break;
      if ( *(_DWORD *)gpLeakTrackingAllocator != 2 )
        goto LABEL_63;
      v34 = 0LL;
      if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1853506642, &v34) )
      {
        v30 = 0;
        if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
        {
          v25 += 16LL;
          v30 = 1;
          v38 = v25;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v29, v25, v28);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_63;
        _InterlockedIncrement64((volatile signed __int64 *)v23 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v43);
        if ( v30
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v23,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v34,
                  (struct NSInstrumentation::CBackTrace *)v43) )
            goto LABEL_62;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        }
        else if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                     (__int64)v23,
                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                     v34,
                     (struct NSInstrumentation::CBackTrace *)v43) )
        {
LABEL_62:
          _InterlockedIncrement64((volatile signed __int64 *)v23 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
LABEL_63:
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
        }
      }
      else
      {
        *(_QWORD *)&v39 = &v37;
        *((_QWORD *)&v39 + 1) = &v45;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v23,
                                                                                           (__int64)&v39,
                                                                                           &v38);
      }
LABEL_64:
      *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v21 + 8) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
      Pool2 = *((_QWORD *)this + 3);
      if ( !*(_QWORD *)(Pool2 + 8 * v21 + 8) )
        goto LABEL_39;
      for ( i = 0; i < *(_DWORD *)(Pool2 + 8 * v21 + 16); Pool2 = *((_QWORD *)this + 3) )
      {
        v32 = i++;
        *(_QWORD *)(*(_QWORD *)(Pool2 + 8 * v21 + 8) + 8 * v32) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 1)
                                                                                        + 8 * v21
                                                                                        + 8)
                                                                            + 8 * v32);
      }
      v20 = (unsigned int)(v46 + 1);
      v46 = v20;
      if ( (unsigned int)v20 >= *((_DWORD *)this + 8) )
        goto LABEL_68;
    }
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E7A4452u)
      && v25 + 16 >= v25 )
    {
      v27 = (_QWORD *)ExAllocatePool2(v37 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v45);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v27;
      if ( !v27
        || (_InterlockedIncrement64((volatile signed __int64 *)v23 + 14),
            *v27 = 1853506642LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v27 + 2),
            v27 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v23 + 1),
          0x6E7A4452uLL);
      }
      goto LABEL_64;
    }
    goto LABEL_63;
  }
LABEL_68:
  RIMDeadzone::SetDeadzonePalmTelemetry(this);
  return v2;
}
