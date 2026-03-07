__int64 RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, ...)
{
  __int64 v3; // r13
  _WORD *v4; // r12
  NSInstrumentation::CLeakTrackingAllocator *v5; // rsi
  int v6; // edx
  int v7; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  __int64 v10; // r11
  NSInstrumentation::CLeakTrackingAllocator *v11; // r14
  unsigned __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rsi
  _QWORD *v15; // rax
  char v16; // r10
  unsigned int v17; // r11d
  char v18; // r15
  __int64 v19; // rax
  __int128 v20; // xmm1
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  int v24; // edx
  int v25; // r8d
  PDEVICE_OBJECT v26; // rcx
  bool v27; // al
  __int16 v28; // r9
  int v29; // eax
  int v30; // edx
  int v31; // r8d
  unsigned __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-88h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v40; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v41; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v42; // [rsp+A0h] [rbp-68h]
  PVOID BackTrace[20]; // [rsp+A8h] [rbp-60h] BYREF
  PVOID v44[26]; // [rsp+148h] [rbp+40h] BYREF
  struct _DEVICE_OBJECT *v46; // [rsp+238h] [rbp+130h]
  __int64 v47; // [rsp+240h] [rbp+138h] BYREF
  va_list va; // [rsp+240h] [rbp+138h]
  _WORD *v49; // [rsp+248h] [rbp+140h]
  __int64 v50; // [rsp+250h] [rbp+148h]
  va_list va1; // [rsp+258h] [rbp+150h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v47 = va_arg(va1, _QWORD);
  v49 = va_arg(va1, _WORD *);
  v50 = va_arg(va1, _QWORD);
  v46 = a3;
  v3 = a2;
  if ( !v47 )
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
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        45,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    return 0LL;
  }
  v4 = v49;
  if ( !v49[4] )
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
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        46,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v49[1],
        *v49);
    }
    return 0LL;
  }
  v5 = gpLeakTrackingAllocator;
  v6 = 120;
  v37 = 120LL;
  v34 = 1147695954;
  v38 = 260LL;
  v7 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v7 != 1 )
    {
      if ( v7 != 2 )
        goto LABEL_111;
      v33 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v33) )
      {
        v41 = &v38;
        v42 = &v34;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v5,
                                                                                           (__int64)&v41,
                                                                                           &v37);
        goto LABEL_32;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v10,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_111;
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v5,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v33,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_35;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v5,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v33,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_32;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_111;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      goto LABEL_111;
    Pool2 = (_QWORD *)ExAllocatePool2(v38 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v34);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)v5 + 14),
          *Pool2 = 1147695954LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v5 + 1),
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
      _InterlockedIncrement64((volatile signed __int64 *)v5 + 14);
  }
LABEL_32:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_111:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        47,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(_QWORD *)(v3 + 216));
    }
    return 0LL;
  }
LABEL_35:
  v11 = gpLeakTrackingAllocator;
  v12 = (unsigned __int16)v4[4];
  LODWORD(v35) = 1886417746;
  v39 = 68LL;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  v40 = v12;
  if ( !v13 )
  {
    v14 = ExAllocatePool2(68LL, (unsigned int)v12, 1886417746LL);
    if ( v14 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_58;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v36 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v36) )
      {
        v41 = &v39;
        v42 = (unsigned int *)&v35;
        v14 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v11,
                (__int64)&v41,
                &v40);
        goto LABEL_58;
      }
      v18 = v16;
      if ( v12 < 0x1000 || (v12 & 0xFFF) != 0 )
      {
        v12 += 16LL;
        v18 = 1;
        v40 = v12;
      }
      v14 = ExAllocatePool2(68LL, v12, v17);
      if ( v14 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v44);
        if ( v18 && (unsigned __int64)(v14 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)v14,
                 v36,
                 (struct NSInstrumentation::CBackTrace *)v44) )
          {
            v14 += 16LL;
            goto LABEL_58;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    v14,
                    v36,
                    (struct NSInstrumentation::CBackTrace *)v44) )
        {
          goto LABEL_58;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v14);
      }
    }
    goto LABEL_57;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
    || v12 + 16 < v12 )
  {
LABEL_57:
    v14 = 0LL;
    goto LABEL_58;
  }
  v15 = (_QWORD *)ExAllocatePool2(v39 & 0xFFFFFFFFFFFFFFFDuLL, v12 + 16, (unsigned int)v35);
  v14 = (__int64)v15;
  if ( !v15
    || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
        *v15 = 1886417746LL,
        v14 = (__int64)(v15 + 2),
        v15 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v11 + 1),
      0x70707352uLL);
  }
LABEL_58:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 32) = v14;
  if ( !v14 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        48,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v4[4]);
    }
    goto LABEL_109;
  }
  v19 = v47;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40) = *(_OWORD *)v4;
  LODWORD(v47) = 0;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 56) = *((_OWORD *)v4 + 1);
  LODWORD(v33) = 0;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72) = *((_OWORD *)v4 + 2);
  v37 = 0LL;
  v20 = *((_OWORD *)v4 + 3);
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v19;
  v21 = v50;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 88) = v20;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = *(_QWORD *)v21;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_DWORD *)(v21 + 8);
  if ( !(unsigned int)RIMGetDeviceParent(v46, v3, (int)a3) )
  {
    LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v22,
        v23,
        (_DWORD)gRimLog,
        3,
        1,
        49,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                        a1,
                        v3,
                        (unsigned int)va,
                        (__int64)&v33,
                        (__int64)&v37)
    || !(_DWORD)v47 )
  {
LABEL_99:
    *(_BYTE *)(v3 + 48) = 3;
    return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  }
  v25 = *(_DWORD *)(a1 + 84);
  if ( (_DWORD)v33 )
  {
    if ( (v25 & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 184) |= 0x800u;
LABEL_90:
      v29 = RIMDeliverConfigRequest((struct RIMDEV *)v3);
      if ( v29 < 0 )
      {
        LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v30,
            v31,
            (_DWORD)gRimLog,
            3,
            1,
            52,
            (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
            v29);
        }
      }
      goto LABEL_99;
    }
    v26 = WPP_GLOBAL_Control;
    LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 50;
LABEL_108:
      LOBYTE(v25) = v27;
      WPP_RECORDER_AND_TRACE_SF_D(
        v26->AttachedDevice,
        v24,
        v25,
        (_DWORD)gRimLog,
        3,
        1,
        v28,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(_DWORD *)(a1 + 84));
    }
  }
  else
  {
    if ( (v25 & 8) != 0 )
    {
      *(_DWORD *)(v3 + 184) |= 0x1000u;
      goto LABEL_90;
    }
    v26 = WPP_GLOBAL_Control;
    LOBYTE(v24) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = 51;
      goto LABEL_108;
    }
  }
LABEL_109:
  RIMFreeHidDesc((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  return 0LL;
}
