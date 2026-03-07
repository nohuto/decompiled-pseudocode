__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  unsigned __int64 v7; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  __int16 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rsi
  int v12; // eax
  char *UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  char *v14; // rax
  unsigned int v15; // r10d
  __int64 v16; // r11
  char v17; // r14
  __int64 v18; // rax
  __int64 v19; // rdx
  bool v20; // cf
  __int64 v21; // r14
  unsigned __int16 v22; // di
  __int64 v23; // r12
  __int64 v24; // r14
  __int64 v25; // rbx
  __int16 v26; // r13
  __int16 v27; // cx
  __int64 v28; // r15
  __int16 v29; // cx
  _WORD v31[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v32; // [rsp+44h] [rbp-BCh]
  unsigned int v33; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 v34; // [rsp+50h] [rbp-B0h]
  char *Pool2; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v38[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  PVOID BackTrace[20]; // [rsp+B0h] [rbp-50h] BYREF
  _WORD v45[40]; // [rsp+150h] [rbp+50h] BYREF

  v41 = a2;
  v5 = a3;
  v43 = a1;
  v36 = a4;
  memset(v45, 0, 0x48uLL);
  v6 = *(_QWORD *)(a1 + 760);
  v7 = 8 * v5;
  v8 = gpLeakTrackingAllocator;
  v9 = 0;
  v42 = v6;
  v31[0] = 1;
  v10 = *(_QWORD *)(v6 + 16);
  v11 = *(unsigned __int16 *)(v6 + 4);
  v39 = v10;
  v32 = 0;
  v33 = 2003006290;
  v40 = 260LL;
  v34 = *(_WORD *)(v10 + 24 * v11 + 4);
  *(_WORD *)(v6 + 8) = 0;
  v12 = *(_DWORD *)v8;
  v37 = v7;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
        return 0LL;
      v38[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v8, 2003006290, v38) )
      {
        v38[0] = (unsigned __int64)&v40;
        v38[1] = (unsigned __int64)&v33;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (char *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                                   (__int64)v8,
                                                                                                   (__int64)v38,
                                                                                                   &v37);
        Pool2 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
        goto LABEL_21;
      }
      v17 = 0;
      if ( v7 < 0x1000 || (v7 & 0xFFF) != 0 )
      {
        v7 += 16LL;
        v17 = 1;
        v37 = v7;
      }
      Pool2 = (char *)ExAllocatePool2(v16, v7, v15);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2;
      if ( !Pool2 )
        return 0LL;
      _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v17 && (unsigned __int64)((unsigned __int16)Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v8,
               Pool2,
               v38[0],
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2 + 16;
          Pool2 += 16;
          goto LABEL_21;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v8,
                  (__int64)Pool2,
                  v38[0],
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_24;
      }
      _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>(Pool2);
      return 0LL;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v8, 0x77637352u) || v7 + 16 < v7 )
      return 0LL;
    v14 = (char *)ExAllocatePool2(v40 & 0xFFFFFFFFFFFFFFFDuLL, v7 + 16, v33);
    Pool2 = v14;
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v14;
    if ( !v14
      || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v14 + 16,
          *(_QWORD *)v14 = 2003006290LL,
          Pool2 = v14 + 16,
          v14 == (char *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v8 + 1),
        0x77637352uLL);
    }
  }
  else
  {
    Pool2 = (char *)ExAllocatePool2(260LL, v7, 2003006290LL);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2;
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
  }
LABEL_21:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    return 0LL;
LABEL_24:
  v18 = v34;
  *(_QWORD *)(v6 + 24) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  v19 = 3 * v18;
  v20 = *(_WORD *)(v10 + 24 * v18 + 6) != 0;
  v38[0] = 3 * v18;
  while ( 1 )
  {
    LOWORD(v33) = v9;
    if ( !v20 || !(_WORD)v11 )
      break;
    v21 = 3LL * (unsigned __int16)v11;
    v37 = v21;
    if ( *(_WORD *)(v39 + 24LL * (unsigned __int16)v11 + 6) )
    {
      if ( v36 )
      {
        v22 = *(_WORD *)(v39 + 24LL * (unsigned __int16)v11 + 10);
        if ( v22 )
        {
          v23 = v42;
          v24 = v39;
          v25 = v43;
          do
          {
            v31[0] = 1;
            if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 1LL, v22, 48LL, (__int64)v45, (__int64)v31, v41) == 1114112 )
            {
              v26 = v45[10];
              v31[0] = 1;
              if ( (unsigned int)rimHidP_GetSpecificValueCaps(0LL, 1LL, v22, 49LL, (__int64)v45, (__int64)v31, v41) == 1114112 )
              {
                v27 = v45[10];
                if ( (_WORD)v11 == *(_WORD *)(v23 + 4) )
                {
                  *(_WORD *)(v23 + 8) = v22;
                  v32 = 1;
                }
                *(_WORD *)(*(_QWORD *)(v23 + 24) + 8LL * (unsigned __int16)v11 + 2) = v22;
                if ( v27 == v26 && v26 == 2 )
                  *(_DWORD *)(v25 + 360) |= 0x200u;
              }
            }
            v22 = *(_WORD *)(v24 + 24LL * v22 + 8);
          }
          while ( v22 );
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = Pool2;
          v21 = v37;
          v9 = v33;
          v6 = v42;
          v19 = v38[0];
        }
      }
    }
    v28 = v39;
    v29 = v11;
    v11 = *(unsigned __int16 *)(v39 + 8 * v21 + 8);
    if ( (_WORD)v11 )
      *(_WORD *)&UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64[8 * v11 + 4] = v29;
    else
      *(_WORD *)(v6 + 6) = v29;
    v20 = (unsigned __int16)++v9 < *(_WORD *)(v28 + 8 * v19 + 6);
  }
  if ( v36 )
    return v32;
  else
    return 1LL;
}
