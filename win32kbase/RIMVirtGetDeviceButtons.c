__int64 __fastcall RIMVirtGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v5; // r15
  __int64 v6; // r12
  NSInstrumentation::CLeakTrackingAllocator *v8; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 Pool2; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  unsigned __int64 v26; // rbx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v28; // rax
  int v29; // eax
  unsigned int v30; // r10d
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  int v35; // edx
  int v36; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v37; // rsi
  unsigned __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // rbx
  _QWORD *v41; // rax
  unsigned int v42; // edx
  char v43; // r14
  _QWORD v45[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v46; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v47; // [rsp+38h] [rbp-C8h]
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v53[20]; // [rsp+100h] [rbp+0h] BYREF
  PVOID v54[28]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v55; // [rsp+290h] [rbp+190h] BYREF
  unsigned __int64 v56; // [rsp+298h] [rbp+198h] BYREF
  __int64 v57; // [rsp+2A0h] [rbp+1A0h] BYREF
  unsigned __int64 v58; // [rsp+2A8h] [rbp+1A8h] BYREF

  v57 = a3;
  v55 = a1;
  v5 = 0;
  v6 = *(unsigned __int16 *)(a4 + 46);
  v8 = gpLeakTrackingAllocator;
  v9 = 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 5) <= 1 )
  {
    *(_DWORD *)(a2 + 1036) = *(_DWORD *)(a5 + 1320);
    v10 = 12 * v6;
    LODWORD(v57) = 2019849042;
    v11 = *(_DWORD *)v8;
    v48 = 260LL;
    v45[0] = 12 * v6;
    switch ( v11 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, 12 * v6, 2019849042LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
        goto LABEL_25;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v8, 0x78647352u) && v10 + 16 >= v10 )
        {
          v13 = (_QWORD *)ExAllocatePool2(v48 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, (unsigned int)v57);
          Pool2 = (__int64)v13;
          if ( !v13
            || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
                *v13 = 2019849042LL,
                Pool2 = (__int64)(v13 + 2),
                v13 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v8 + 1),
              0x78647352uLL);
          }
          goto LABEL_25;
        }
        break;
      case 2:
        v56 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v8, 2019849042, &v56) )
        {
          v46 = &v48;
          v47 = &v57;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v8,
                    (__int64)&v46,
                    v45);
          goto LABEL_25;
        }
        if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
        {
          v10 += 16LL;
          v5 = 1;
          v45[0] = v10;
        }
        Pool2 = ExAllocatePool2(v14, v10, 2019849042LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v5 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                   (__int64)v8,
                   (const void *)Pool2,
                   v56,
                   (struct NSInstrumentation::CBackTrace *)BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_25;
            }
          }
          else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                      (__int64)v8,
                      Pool2,
                      v56,
                      (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            goto LABEL_25;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
LABEL_25:
    v15 = a5;
    *(_QWORD *)(a2 + 1024) = Pool2;
    if ( Pool2 )
    {
      if ( (_WORD)v6 )
      {
        v16 = 0LL;
        v17 = v6;
        do
        {
          v18 = *(_QWORD *)(v15 + 1312);
          v19 = *(_QWORD *)(a2 + 1024);
          v20 = *(_DWORD *)(v16 + v18 + 4);
          v21 = *(_DWORD *)(v16 + v18 + 8);
          *(_DWORD *)(v16 + v19) = *(_DWORD *)(v16 + v18);
          *(_DWORD *)(v16 + v19 + 4) = v20;
          *(_DWORD *)(v16 + v19 + 8) = v21;
          v16 += 12LL;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v9 = -1073741668;
    }
    goto LABEL_29;
  }
  v23 = *(unsigned int *)(a2 + 768);
  LODWORD(v55) = 2019849042;
  v49 = 260LL;
  v24 = 3 * v23;
  v25 = *(_DWORD *)gpLeakTrackingAllocator;
  v26 = 4 * v24;
  v45[0] = v26;
  switch ( v25 )
  {
    case 0:
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         v26,
                                                                                         2019849042LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
      goto LABEL_55;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78647352u)
        && v26 + 16 >= v26 )
      {
        v28 = (_QWORD *)ExAllocatePool2(v49 & 0xFFFFFFFFFFFFFFFDuLL, v26 + 16, (unsigned int)v55);
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v28;
        if ( !v28
          || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
              *v28 = 2019849042LL,
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v28 + 2),
              v28 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v8 + 1),
            0x78647352uLL);
        }
        goto LABEL_55;
      }
      break;
    case 2:
      v56 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2019849042, &v56) )
      {
        v46 = &v49;
        v47 = &v55;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v8,
                                                                                           (__int64)&v46,
                                                                                           v45);
        goto LABEL_55;
      }
      if ( v26 < 0x1000 || (v26 & 0xFFF) != 0 )
      {
        v26 += 16LL;
        v5 = 1;
        v45[0] = v26;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         v26,
                                                                                         2019849042LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v53);
        if ( v5
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v8,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v56,
                 (struct NSInstrumentation::CBackTrace *)v53) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_55;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v8,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v56,
                    (struct NSInstrumentation::CBackTrace *)v53) )
        {
          goto LABEL_55;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
      break;
  }
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
LABEL_55:
  v15 = a5;
  *(_QWORD *)(a2 + 1024) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    v29 = *(_DWORD *)(a2 + 768);
    v30 = 0;
    for ( *(_DWORD *)(a2 + 1036) = v29; v30 < *(_DWORD *)(a2 + 1036); *(_DWORD *)(v31 + 4 * v33 + 8) = v36 )
    {
      v31 = *(_QWORD *)(a2 + 1024);
      v32 = v30++;
      v33 = 3 * v32;
      v34 = *(_QWORD *)(v15 + 1312);
      v35 = *(_DWORD *)(v34 + 4 * v33 + 4);
      v36 = *(_DWORD *)(v34 + 4 * v33 + 8);
      *(_DWORD *)(v31 + 4 * v33) = *(_DWORD *)(v34 + 4 * v33);
      *(_DWORD *)(v31 + 4 * v33 + 4) = v35;
    }
  }
  else
  {
    v9 = -1073741668;
  }
LABEL_29:
  v22 = *(unsigned int *)(v15 + 1324);
  *(_DWORD *)(a2 + 1040) = v22;
  *(_DWORD *)(a2 + 384) = *(_DWORD *)(v15 + 624);
  if ( !(_DWORD)v22 )
    return (unsigned int)-1073741668;
  if ( v9 == -1073741668 )
    return v9;
  v37 = gpLeakTrackingAllocator;
  v38 = 2 * v22;
  v50 = 260LL;
  LODWORD(a5) = 1701344082;
  v51 = 2 * v22;
  v39 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    v40 = ExAllocatePool2(260LL, 2 * v22, 1701344082LL);
    if ( v40 )
      _InterlockedIncrement64((volatile signed __int64 *)v37 + 14);
    goto LABEL_84;
  }
  if ( v39 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65687352u)
      && v38 + 16 >= v38 )
    {
      v41 = (_QWORD *)ExAllocatePool2(v50 & 0xFFFFFFFFFFFFFFFDuLL, v38 + 16, (unsigned int)a5);
      v40 = (__int64)v41;
      if ( !v41
        || (_InterlockedIncrement64((volatile signed __int64 *)v37 + 14),
            *v41 = 1701344082LL,
            v40 = (__int64)(v41 + 2),
            v41 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v37 + 1),
          0x65687352uLL);
      }
      goto LABEL_84;
    }
  }
  else if ( v39 == 2 )
  {
    v58 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701344082, &v58) )
    {
      v46 = &v50;
      v47 = &a5;
      v40 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v37,
              (__int64)&v46,
              &v51);
      goto LABEL_84;
    }
    v43 = 0;
    if ( v38 < 0x1000 || (v38 & 0xFFF) != 0 )
    {
      v38 += 16LL;
      v43 = 1;
      v51 = v38;
    }
    v40 = ExAllocatePool2(260LL, v38, v42);
    if ( v40 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v37 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v54);
      if ( v43 && (unsigned __int64)(v40 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v37,
               (const void *)v40,
               v58,
               (struct NSInstrumentation::CBackTrace *)v54) )
        {
          v40 += 16LL;
          goto LABEL_84;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v37,
                  v40,
                  v58,
                  (struct NSInstrumentation::CBackTrace *)v54) )
      {
        goto LABEL_84;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v37 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v40);
    }
  }
  v40 = 0LL;
LABEL_84:
  *(_QWORD *)(a2 + 816) = v40;
  if ( !v40 )
    return (unsigned int)-1073741668;
  return v9;
}
