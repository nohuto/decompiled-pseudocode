__int64 __fastcall CitpContextTrackingDataStart(struct _CIT_IMPACT_CONTEXT *a1, const char *a2)
{
  unsigned int v2; // ebx
  unsigned __int64 v5; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v6; // rdi
  unsigned __int64 v7; // rsi
  int v8; // eax
  __int64 Pool2; // rsi
  _QWORD *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // r10
  char v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rsi
  char *v16; // rdi
  __int64 v17; // rcx
  char *v18; // rcx
  char **v19; // rax
  char i; // cl
  NSInstrumentation::CLeakTrackingAllocator *v21; // r14
  unsigned __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *v25; // rax
  unsigned int v26; // edx
  __int64 v27; // r10
  char v28; // r13
  int v29; // ecx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rax
  char j; // cl
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v40; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v41; // [rsp+58h] [rbp-A8h]
  PVOID BackTrace[20]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v43[26]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v44; // [rsp+1E8h] [rbp+E8h] BYREF
  unsigned int v45; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int64 v46; // [rsp+1F8h] [rbp+F8h] BYREF

  v2 = 0;
  if ( !*((_BYTE *)&qword_1C02D4D94 + 5) )
    return v2;
  v5 = 96LL * (unsigned int)xmmword_1C02D4D84;
  if ( v5 > 0xFFFFFFFF )
  {
    v29 = -1073741675;
    v30 = 335;
    goto LABEL_76;
  }
  v6 = gpLeakTrackingAllocator;
  v7 = (unsigned int)v5;
  v44 = 1231254357;
  v36 = 260LL;
  v8 = *(_DWORD *)gpLeakTrackingAllocator;
  v37 = (unsigned int)v5;
  if ( !v8 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v5, 1231254357LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL);
    goto LABEL_24;
  }
  if ( v8 != 1 )
  {
    if ( v8 == 2 )
    {
      v46 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v46) )
      {
        v40 = &v36;
        v41 = &v44;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v6,
                  (__int64)&v40,
                  &v37);
        goto LABEL_24;
      }
      v13 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 += 16LL;
        v13 = 1;
        v37 = v7;
      }
      v14 = ExAllocatePool2(v12, v7, v11);
      if ( v14 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v6 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v13 && (unsigned __int64)(v14 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v6,
                                  v14,
                                  v46,
                                  BackTrace) )
          {
            Pool2 = v14 + 16;
            goto LABEL_24;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v6,
                                     v14,
                                     v46,
                                     BackTrace) )
        {
          *(_QWORD *)a1 = v14;
          goto LABEL_28;
        }
        _InterlockedAdd64((volatile signed __int64 *)v6 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v14);
      }
    }
LABEL_73:
    *(_QWORD *)a1 = 0LL;
    goto LABEL_74;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u)
    || v7 + 16 < v7 )
  {
    goto LABEL_73;
  }
  v10 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v44);
  Pool2 = (__int64)v10;
  if ( !v10
    || (_InterlockedAdd64((volatile signed __int64 *)v6 + 14, 1uLL),
        *v10 = 1231254357LL,
        Pool2 = (__int64)(v10 + 2),
        v10 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v6 + 1),
      (const void *)0x49637355);
  }
LABEL_24:
  *(_QWORD *)a1 = Pool2;
  if ( !Pool2 )
  {
LABEL_74:
    v29 = -1073741670;
    v30 = 343;
    goto LABEL_76;
  }
LABEL_28:
  v15 = (unsigned int)xmmword_1C02D4D84;
  a2 = 0LL;
  if ( (_DWORD)xmmword_1C02D4D84 )
  {
    v16 = (char *)a1 + 8;
    do
    {
      v17 = *(_QWORD *)a1 + 96LL * (unsigned int)a2;
      *(_WORD *)(v17 + 32) = 1;
      *(_QWORD *)v17 = 0LL;
      *(_OWORD *)(v17 + 40) = 0LL;
      *(_OWORD *)(v17 + 56) = 0LL;
      *(_QWORD *)(v17 + 72) = 0LL;
      v18 = (char *)(v17 + 16);
      v19 = (char **)*((_QWORD *)a1 + 2);
      if ( *v19 != v16 )
        __fastfail(3u);
      *(_QWORD *)v18 = v16;
      a2 = (const char *)(unsigned int)((_DWORD)a2 + 1);
      *((_QWORD *)v18 + 1) = v19;
      *v19 = v18;
      *((_QWORD *)a1 + 2) = v18;
      v15 = (unsigned int)xmmword_1C02D4D84;
    }
    while ( (unsigned int)a2 < (unsigned int)xmmword_1C02D4D84 );
  }
  *((_DWORD *)a1 + 14) = v15;
  *((_DWORD *)a1 + 17) = v15 - ((unsigned int)v15 >> 2);
  if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
  {
    for ( i = -1; (_DWORD)v15; LODWORD(v15) = (unsigned int)v15 >> 1 )
      ++i;
    v15 = (unsigned int)(1 << i);
  }
  v21 = gpLeakTrackingAllocator;
  v22 = (unsigned int)(8 * v15);
  v39 = v22;
  v45 = 1231254357;
  v38 = 260LL;
  v23 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       (unsigned int)v22,
                                                                                       1231254357LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL);
    goto LABEL_60;
  }
  if ( v23 != 1 )
  {
    if ( v23 == 2 )
    {
      v35 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x49637355u, &v35) )
      {
        v40 = &v38;
        v41 = &v45;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v21,
                                                                                           (__int64)&v40,
                                                                                           &v39);
        goto LABEL_60;
      }
      v28 = 0;
      if ( v22 < 0x1000 || (v22 & 0xFFF) != 0 )
      {
        v22 += 16LL;
        v28 = 1;
        v39 = v22;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v27, v22, v26);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v21 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v43);
        if ( v28
          && (UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v21,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v35,
                                  v43) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v21,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v35,
                                     v43) )
        {
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)v21 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    goto LABEL_59;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x49637355u)
    || v22 + 16 < v22 )
  {
LABEL_59:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_60;
  }
  v25 = (_QWORD *)ExAllocatePool2(v38 & 0xFFFFFFFFFFFFFFFDuLL, v22 + 16, v45);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (unsigned __int64)v25;
  if ( !v25
    || (_InterlockedAdd64((volatile signed __int64 *)v21 + 14, 1uLL),
        *v25 = 1231254357LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (unsigned __int64)(v25 + 2),
        v25 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v21 + 1),
      (const void *)0x49637355);
  }
LABEL_60:
  *((_QWORD *)a1 + 11) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    v29 = -1073741670;
    v30 = 387;
LABEL_76:
    v2 = v29;
    CitpLogFailureWorker(v29, a2, v30);
    return v2;
  }
  v31 = (unsigned __int64)a1 + 72;
  if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
  {
    for ( j = -1; (_DWORD)v15; LODWORD(v15) = (unsigned int)v15 >> 1 )
      ++j;
    v15 = (unsigned int)(1 << j);
  }
  *(_DWORD *)v31 = 0;
  *((_QWORD *)a1 + 10) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( (unsigned int)v15 > 0x4000000 )
    v15 = 0x4000000LL;
  *((_DWORD *)a1 + 19) = 32 * v15;
  v33 = v31 | 1;
  v34 = (unsigned int)v15;
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 > UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                                                                                      + 8 * v15 )
    v34 = 0LL;
  if ( v34 )
    memset64((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v33, v34);
  return v2;
}
