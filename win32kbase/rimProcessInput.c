char __fastcall rimProcessInput(__int64 a1, unsigned __int64 a2, const void *a3, __m128i *a4, int a5)
{
  const void *v5; // r14
  __m128i v8; // xmm6
  PDEVICE_OBJECT *v9; // rax
  int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // xmm6_8
  size_t v13; // r13
  __int64 v14; // rcx
  NSInstrumentation::CLeakTrackingAllocator *v15; // r14
  int v16; // eax
  __int64 Pool2; // rdi
  _QWORD *v18; // rax
  unsigned int v19; // edx
  unsigned __int64 v20; // r10
  __int64 v21; // r11
  char v22; // r12
  size_t v23; // xmm0_8
  int v24; // edx
  _QWORD *v25; // rdx
  _UNKNOWN **v26; // r8
  _DWORD *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  __m128i *v30; // rcx
  char *v31; // rcx
  char v33; // [rsp+40h] [rbp-128h]
  __m128i v34; // [rsp+48h] [rbp-120h] BYREF
  unsigned __int64 v35; // [rsp+58h] [rbp-110h] BYREF
  __int64 v36; // [rsp+60h] [rbp-108h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-F8h] BYREF
  PVOID BackTrace[20]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+170h] [rbp+8h] BYREF
  unsigned __int64 v40; // [rsp+178h] [rbp+10h] BYREF
  const void *v41; // [rsp+180h] [rbp+18h]
  __int64 v42; // [rsp+188h] [rbp+20h]

  v41 = a3;
  v40 = a2;
  v39 = a1;
  v5 = a3;
  v37[0] = 0LL;
  v33 = 0;
  v8 = *a4;
  v34 = *a4;
  LODWORD(v9) = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v10 = (int)v9;
  LODWORD(v42) = (_DWORD)v9;
  v11 = *(unsigned int *)(a1 + 888);
  if ( !*(_DWORD *)(a1 + 848) )
  {
    v12 = _mm_srli_si128(v8, 8).m128i_u64[0];
    v13 = v12;
    if ( v12 <= v11 )
      goto LABEL_3;
    LODWORD(v39) = 1701661522;
    v36 = 260LL;
    v15 = gpLeakTrackingAllocator;
    v35 = v12;
    v16 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, v12, 1701661522LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
        v13 = v34.m128i_u64[1];
      }
      goto LABEL_41;
    }
    if ( v16 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x656D4B52u)
        && v12 + 16 >= v12 )
      {
        v18 = (_QWORD *)ExAllocatePool2(v36 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, (unsigned int)v39);
        Pool2 = (__int64)v18;
        if ( v18 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v15 + 14);
          v13 = v34.m128i_u64[1];
          *v18 = 1701661522LL;
          Pool2 = (__int64)(v18 + 2);
          if ( v18 != (_QWORD *)-16LL )
            goto LABEL_43;
        }
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v15 + 1),
          (const void *)0x656D4B52);
LABEL_41:
        if ( !Pool2 )
        {
          v34.m128i_i32[0] = -1073741801;
LABEL_44:
          v10 = v42;
          v5 = v41;
LABEL_3:
          v9 = *(PDEVICE_OBJECT **)(a1 + 872);
          *(__m128i *)v9 = v34;
          if ( v34.m128i_i32[0] >= 0 )
          {
            **(_DWORD **)(a1 + 856) = v10;
            if ( _bittest((const signed __int32 *)(a2 + 184), 0xDu) )
            {
              v14 = *(_QWORD *)(a2 + 24);
            }
            else
            {
              v14 = *(_QWORD *)(a2 + 344);
              if ( !v14 )
                v14 = *(_QWORD *)(a2 + 16);
            }
            **(_QWORD **)(a1 + 864) = v14;
            memmove(**(void ***)(a1 + 880), v5, v13);
            LODWORD(v9) = *(_DWORD *)(a2 + 184);
            if ( ((unsigned __int16)v9 & 0x2000) != 0 || ((unsigned __int8)v9 & 0x40) != 0 )
            {
              LOBYTE(v9) = *(_BYTE *)(a2 + 48);
              if ( (_BYTE)v9 )
              {
                if ( (_BYTE)v9 == 1 )
                  *(_DWORD *)(a2 + 688) = 0;
              }
              else
              {
                *(_DWORD *)(a2 + 912) = 0;
              }
            }
            if ( a5 )
              LOBYTE(v9) = RIMFixUpCompleteFrames(a1, a2, **(_QWORD **)(a1 + 880), (_DWORD)v5, v34.m128i_i32[2]);
            else
              v33 = 1;
          }
          goto LABEL_12;
        }
LABEL_43:
        **(_QWORD **)(a1 + 880) = Pool2;
        goto LABEL_44;
      }
    }
    else if ( v16 == 2 )
    {
      v40 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x656D4B52u, &v40) )
      {
        v37[0] = &v36;
        v37[1] = &v39;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v15,
                  v37,
                  &v35);
        goto LABEL_41;
      }
      v22 = 0;
      if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
      {
        v22 = 1;
        v20 = v12 + 16;
        v35 = v12 + 16;
      }
      Pool2 = ExAllocatePool2(v21, v20, v19);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 16);
        v13 = v34.m128i_u64[1];
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v22 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v15,
                                  Pool2,
                                  v40,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_41;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v15,
                                     Pool2,
                                     v40,
                                     BackTrace) )
        {
          goto LABEL_41;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v15 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        v13 = v34.m128i_u64[1];
      }
    }
    Pool2 = 0LL;
    goto LABEL_41;
  }
  v23 = _mm_srli_si128(_mm_loadu_si128(&v34), 8).m128i_u64[0];
  if ( v23 > v11 )
  {
    v35 = 0LL;
    rimAllocUserMemInternal(a1, v23, &v35);
    v37[0] = v35;
    if ( v35 )
    {
      v25 = *(_QWORD **)(a1 + 880);
      LOBYTE(v9) = MmUserProbeAddress;
      if ( (unsigned __int64)v25 >= MmUserProbeAddress )
        v25 = (_QWORD *)MmUserProbeAddress;
      *v25 = v35;
      v10 = v42;
    }
    else
    {
      v9 = &WPP_GLOBAL_Control;
      LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (LODWORD(v9) = HIDWORD(WPP_GLOBAL_Control->Timer), ((unsigned __int8)v9 & 1) != 0)
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v26 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        LOBYTE(v9) = WPP_RECORDER_AND_TRACE_SF_(
                       WPP_GLOBAL_Control->AttachedDevice,
                       v24,
                       (_DWORD)v26,
                       (_DWORD)gRimLog,
                       4,
                       1,
                       14,
                       (__int64)&WPP_fb063e0f59f03a65206762a1603ab6c2_Traceguids);
      }
      v34.m128i_i32[0] = -1073741801;
      v10 = v42;
    }
  }
  if ( v34.m128i_i32[0] < 0 )
  {
    *(_BYTE *)(a1 + 776) = 1;
  }
  else
  {
    v27 = *(_DWORD **)(a1 + 856);
    if ( (unsigned __int64)v27 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v10;
    v28 = *(_QWORD *)(a2 + 344);
    if ( !v28 )
      v28 = *(_QWORD *)(a2 + 16);
    v42 = v28;
    v29 = *(_QWORD **)(a1 + 864);
    if ( (unsigned __int64)v29 >= MmUserProbeAddress )
      v29 = (_QWORD *)MmUserProbeAddress;
    *v29 = v28;
    v30 = *(__m128i **)(a1 + 872);
    if ( (unsigned __int64)v30 >= MmUserProbeAddress )
      v30 = (__m128i *)MmUserProbeAddress;
    *v30 = v34;
    v31 = **(char ***)(a1 + 880);
    if ( (unsigned __int64)&v31[v23] > MmUserProbeAddress || &v31[v23] <= v31 )
      *(_BYTE *)MmUserProbeAddress = 0;
    LOBYTE(v9) = (unsigned __int8)memmove(v31, v5, v23);
    if ( a5 )
      LOBYTE(v9) = RIMFixUpCompleteFrames(a1, a2, **(_QWORD **)(a1 + 880), (_DWORD)v5, v34.m128i_i32[2]);
    else
      v33 = 1;
  }
LABEL_12:
  if ( v33 )
    LOBYTE(v9) = rimObsDeliverToNonExclusiveObservers(a2);
  return (char)v9;
}
