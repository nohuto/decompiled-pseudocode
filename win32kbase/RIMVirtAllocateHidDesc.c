__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r14
  NSInstrumentation::CLeakTrackingAllocator *v8; // rsi
  int v9; // edx
  int v10; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  __int64 v13; // r10
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // edx
  int v18; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rsi
  __int64 v24; // rsi
  _QWORD *v25; // rax
  char v26; // r10
  unsigned int v27; // r11d
  unsigned __int16 v28; // r9
  __int64 v29; // xmm0_8
  int PointerDeviceInfo; // eax
  int v31; // edx
  __int64 v32; // r8
  int v33; // r10d
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // eax
  unsigned __int16 v38; // r9
  int IsInkDevice; // eax
  int v41; // edx
  int v42; // r8d
  int v43; // edx
  int v44; // r8d
  char v45; // [rsp+58h] [rbp-B0h]
  unsigned int v46; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+88h] [rbp-80h] BYREF
  int v51; // [rsp+90h] [rbp-78h]
  __int64 v52; // [rsp+98h] [rbp-70h] BYREF
  __int64 v53; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v54; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v55; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v56; // [rsp+C0h] [rbp-48h]
  _WORD *v57; // [rsp+C8h] [rbp-40h]
  _OWORD v58[4]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID BackTrace[20]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v60[26]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v62; // [rsp+2A0h] [rbp+198h]
  __int64 v63; // [rsp+2A8h] [rbp+1A0h]

  v63 = a3;
  v62 = a2;
  v7 = a2;
  if ( !a3 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        81,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    return 0LL;
  }
  if ( !a4[2] && (*(_DWORD *)(a2 + 184) & 0x10000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        82,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v8 = gpLeakTrackingAllocator;
  v46 = 1147695954;
  v9 = 120;
  v52 = 260LL;
  v50 = 120LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v10 != 1 )
    {
      if ( v10 != 2 )
        goto LABEL_115;
      v48 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v48) )
      {
        v55 = &v52;
        v56 = &v46;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v8,
                                                                                           (__int64)&v55,
                                                                                           &v50);
        goto LABEL_33;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v13,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_115;
      _InterlockedAdd64((volatile signed __int64 *)v8 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v8,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v48,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_36;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v8,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v48,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_33;
      }
      _InterlockedAdd64((volatile signed __int64 *)v8 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_115;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      goto LABEL_115;
    Pool2 = (_QWORD *)ExAllocatePool2(v52 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v46);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL),
          *Pool2 = 1147695954LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v8 + 1),
        0x44687352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       120LL,
                                                                                       1147695954LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v8 + 14, 1uLL);
  }
LABEL_33:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_115:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v9) = 0;
    }
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        83,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(_QWORD *)(v7 + 216));
    }
    return 0LL;
  }
LABEL_36:
  v14 = *((_OWORD *)a4 + 1);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40) = *(_OWORD *)a4;
  v15 = *((_OWORD *)a4 + 2);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 56) = v14;
  v16 = *((_OWORD *)a4 + 3);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72) = v15;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 88) = v16;
  if ( !(unsigned int)rimIsHidInputDevice(
                        v7,
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) )
    goto LABEL_77;
  v19 = gpLeakTrackingAllocator;
  v57 = (_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v20 = *(unsigned __int16 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  LODWORD(v47) = 1886417746;
  v53 = 68LL;
  v21 = 5 * v20;
  v22 = *(_DWORD *)gpLeakTrackingAllocator;
  v23 = 2 * v21;
  v54 = v23;
  switch ( v22 )
  {
    case 0:
      v24 = ExAllocatePool2(68LL, v23, 1886417746LL);
      if ( v24 )
        _InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL);
      goto LABEL_60;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
        && v23 + 16 >= v23 )
      {
        v25 = (_QWORD *)ExAllocatePool2(v53 & 0xFFFFFFFFFFFFFFFDuLL, v23 + 16, (unsigned int)v47);
        v24 = (__int64)v25;
        if ( !v25
          || (_InterlockedAdd64((volatile signed __int64 *)v19 + 14, 1uLL),
              *v25 = 1886417746LL,
              v24 = (__int64)(v25 + 2),
              v25 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v19 + 1),
            0x70707352uLL);
        }
        goto LABEL_60;
      }
      break;
    case 2:
      v49 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v49) )
      {
        v55 = &v53;
        v56 = (unsigned int *)&v47;
        v24 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v19,
                (__int64)&v55,
                &v54);
        goto LABEL_60;
      }
      v45 = v26;
      if ( v23 < 0x1000 || (v23 & 0xFFF) != 0 )
      {
        v23 += 16LL;
        v45 = 1;
        v54 = v23;
      }
      v24 = ExAllocatePool2(68LL, v23, v27);
      if ( v24 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v19 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v60);
        if ( v45 && (unsigned __int64)(v24 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v19,
                 (const void *)v24,
                 v49,
                 (struct NSInstrumentation::CBackTrace *)v60) )
          {
            v24 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v19,
                    v24,
                    v49,
                    (struct NSInstrumentation::CBackTrace *)v60) )
        {
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)v19 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v24);
      }
      break;
  }
  v24 = 0LL;
LABEL_60:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = v24;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      (_DWORD)gRimLog,
      4,
      1,
      84,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v24);
  }
  if ( !*(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v17,
        v18,
        (_DWORD)gRimLog,
        3,
        1,
        85,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *v57);
    }
    RIMFreeHidDesc((_WORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 0LL;
  }
  v7 = v62;
LABEL_77:
  v28 = a4[1];
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v63;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_DWORD *)(a5 + 8);
  if ( v28 == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v29 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104);
    v51 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112);
    v50 = v29;
    PointerDeviceInfo = RIMVirtCreatePointerDeviceInfo(a1, v7, v63, (_DWORD)a4, (unsigned int)&v50, a6);
    if ( PointerDeviceInfo >= 0 || *a4 == 5 && PointerDeviceInfo != -1073741808 )
    {
      ApiSetEtwTracePointerDeviceArrivalStop();
      LOBYTE(v33) = 0;
      goto LABEL_91;
    }
LABEL_99:
    DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
    LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        v41,
        v42,
        (_DWORD)gRimLog,
        4,
        1,
        87,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        a4[1],
        *a4);
    }
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
    *(_QWORD *)(v7 + 456) = 0LL;
    RIMFreeHidDesc((_WORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v43) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v43) = 0;
    }
    if ( (_BYTE)v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v44) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v43,
        v44,
        (_DWORD)gRimLog,
        4,
        1,
        88,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        0);
    }
    return 0LL;
  }
  v34 = *((_OWORD *)a4 + 1);
  v58[0] = *(_OWORD *)a4;
  v35 = *((_OWORD *)a4 + 2);
  v58[1] = v34;
  v36 = *((_OWORD *)a4 + 3);
  v58[2] = v35;
  v58[3] = v36;
  LOBYTE(v37) = RIMIsInteractiveCtrl(v58);
  if ( v37 )
  {
    *(_DWORD *)(v7 + 200) |= 0x100u;
  }
  else
  {
    IsInkDevice = ApiSetInkProcessorIsInkDevice(v38, *a4, v32 + 6);
    LOBYTE(v33) = 0;
    if ( !IsInkDevice )
    {
      if ( ((unsigned int)RimDeviceTypeToRimInputType(v7, *(unsigned __int8 *)(v7 + 48)) & *(_DWORD *)(a1 + 84)) != 0
        && (*(_DWORD *)(a1 + 88) == v33 || (*(_DWORD *)(v7 + 184) & 0x10000) != 0) )
      {
        goto LABEL_91;
      }
      goto LABEL_99;
    }
    *(_DWORD *)(v7 + 200) |= 0x200u;
  }
LABEL_91:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v31) = v33;
  }
  if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v31,
      v32,
      (_DWORD)gRimLog,
      4,
      1,
      86,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
  return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
}
