/*
 * XREFs of RIMAllocateHidDesc @ 0x1C01AC4D4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0035100 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0034DB0 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C0035414 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0037E30 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimIsHidInputDevice @ 0x1C00EFBB2 (rimIsHidInputDevice.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMConfigurePointerDevice @ 0x1C01AD4A0 (RIMConfigurePointerDevice.c)
 *     RIMFreeHidDesc @ 0x1C01ADFC4 (RIMFreeHidDesc.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C01AE0E4 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMIsInteractiveCtrl @ 0x1C01AF3B8 (RIMIsInteractiveCtrl.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C01B3FEC (RIMCreatePointerDeviceInfo.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C01C0898 (RIMApiSetSetUserPTPEnabledPreference.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C0243CA0 (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C0243DC8 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C0244F58 (ApiSetInkProcessorIsInkDevice.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // r14
  NSInstrumentation::CLeakTrackingAllocator *v9; // rsi
  int v10; // edx
  int v11; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  __int64 v14; // r10
  int v15; // edx
  int v16; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rsi
  __int64 v22; // rsi
  _QWORD *v23; // rax
  char v24; // r10
  unsigned int v25; // r11d
  __int64 v26; // xmm0_8
  int v27; // eax
  unsigned __int16 v28; // cx
  int v29; // edx
  int v30; // r8d
  int v31; // edx
  __int64 v32; // r8
  int v33; // r10d
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  unsigned __int16 v37; // r9
  int IsInkDevice; // eax
  int v40; // edx
  int v41; // r8d
  char v42; // [rsp+58h] [rbp-B0h]
  unsigned int v43; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-90h] BYREF
  __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+98h] [rbp-70h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v51; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v52; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v53; // [rsp+C0h] [rbp-48h]
  _WORD *v54; // [rsp+C8h] [rbp-40h]
  _OWORD v55[4]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID BackTrace[20]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v57[26]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v59; // [rsp+2A8h] [rbp+1A0h]

  v59 = a3;
  v8 = a2;
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
        53,
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
        54,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v9 = gpLeakTrackingAllocator;
  v10 = 120;
  v47 = 120LL;
  LODWORD(v44) = 1147695954;
  v49 = 260LL;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v11 != 1 )
    {
      if ( v11 != 2 )
        goto LABEL_119;
      v45 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v45) )
      {
        v52 = &v49;
        v53 = (unsigned int *)&v44;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v9,
                                                                                           (__int64)&v52,
                                                                                           &v47);
        goto LABEL_33;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v14,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_119;
      _InterlockedAdd64((volatile signed __int64 *)v9 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v9,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v45,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_36;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v9,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v45,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_33;
      }
      _InterlockedAdd64((volatile signed __int64 *)v9 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_119;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      goto LABEL_119;
    Pool2 = (_QWORD *)ExAllocatePool2(v49 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, (unsigned int)v44);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v9 + 14, 1uLL),
          *Pool2 = 1147695954LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v9 + 1),
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
      _InterlockedAdd64((volatile signed __int64 *)v9 + 14, 1uLL);
  }
LABEL_33:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_119:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        55,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
LABEL_36:
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 88) = *((_OWORD *)a4 + 3);
  if ( !(unsigned int)rimIsHidInputDevice(
                        v8,
                        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64) )
    goto LABEL_76;
  v17 = gpLeakTrackingAllocator;
  v54 = (_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v18 = *(unsigned __int16 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v43 = 1886417746;
  v50 = 68LL;
  v19 = 5 * v18;
  v20 = *(_DWORD *)gpLeakTrackingAllocator;
  v21 = 2 * v19;
  v51 = v21;
  if ( !v20 )
  {
    v22 = ExAllocatePool2(68LL, v21, 1886417746LL);
    if ( v22 )
      _InterlockedAdd64((volatile signed __int64 *)v17 + 14, 1uLL);
    goto LABEL_60;
  }
  if ( v20 != 1 )
  {
    if ( v20 == 2 )
    {
      v46 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v46) )
      {
        v52 = &v50;
        v53 = &v43;
        v22 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v17,
                (__int64)&v52,
                &v51);
        goto LABEL_60;
      }
      v42 = v24;
      if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
      {
        v21 += 16LL;
        v42 = 1;
        v51 = v21;
      }
      v22 = ExAllocatePool2(68LL, v21, v25);
      if ( v22 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v17 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v57);
        if ( v42 && (unsigned __int64)(v22 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v17,
                 (const void *)v22,
                 v46,
                 (struct NSInstrumentation::CBackTrace *)v57) )
          {
            v22 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v17,
                    v22,
                    v46,
                    (struct NSInstrumentation::CBackTrace *)v57) )
        {
          goto LABEL_60;
        }
        _InterlockedAdd64((volatile signed __int64 *)v17 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v22);
      }
    }
LABEL_59:
    v22 = 0LL;
    goto LABEL_60;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
    || v21 + 16 < v21 )
  {
    goto LABEL_59;
  }
  v23 = (_QWORD *)ExAllocatePool2(v50 & 0xFFFFFFFFFFFFFFFDuLL, v21 + 16, v43);
  v22 = (__int64)v23;
  if ( !v23
    || (_InterlockedAdd64((volatile signed __int64 *)v17 + 14, 1uLL),
        *v23 = 1886417746LL,
        v22 = (__int64)(v23 + 2),
        v23 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v17 + 1),
      0x70707352uLL);
  }
LABEL_60:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) = v22;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v15) = 0;
  }
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      (_DWORD)gRimLog,
      4,
      1,
      56,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v22);
  }
  if ( !*(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 24) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (_DWORD)gRimLog,
        3,
        1,
        57,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *v54);
    }
    RIMFreeHidDesc((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 0LL;
  }
LABEL_76:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v59;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_DWORD *)(a5 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v26 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104);
    v48 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112);
    v47 = v26;
    v27 = RIMCreatePointerDeviceInfo(a1, v8, v59, (_DWORD)a4, a6, a7, (__int64)&v47);
    v28 = *a4;
    if ( v27 >= 0 )
    {
      if ( (unsigned __int16)(v28 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(
          a1,
          v8,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v8 + 472) )
          {
            v43 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1274);
          }
          RIMApiSetSetUserPTPEnabledPreference(
            v8,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            a1);
          *(_DWORD *)(v8 + 200) ^= (*(_DWORD *)(v8 + 200) ^ ((unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(
                                                                             v59,
                                                                             0LL) << 10)) & 0x400;
        }
      }
    }
    else if ( v28 != 5 || v27 == -1073741808 )
    {
LABEL_82:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DD(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          v30,
          (_DWORD)gRimLog,
          4,
          1,
          59,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          a4[1],
          *a4);
      }
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
      *(_QWORD *)(v8 + 456) = 0LL;
      RIMFreeHidDesc((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v40) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v40) = 0;
      }
      if ( (_BYTE)v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v41) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v40,
          v41,
          (_DWORD)gRimLog,
          4,
          1,
          60,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          0);
      }
      return 0LL;
    }
    ApiSetEtwTracePointerDeviceArrivalStop();
    LOBYTE(v33) = 0;
  }
  else
  {
    v34 = *((_OWORD *)a4 + 1);
    v55[0] = *(_OWORD *)a4;
    v35 = *((_OWORD *)a4 + 2);
    v55[1] = v34;
    v36 = *((_OWORD *)a4 + 3);
    v55[2] = v35;
    v55[3] = v36;
    if ( (unsigned int)RIMIsInteractiveCtrl(v55) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
    }
    else
    {
      IsInkDevice = ApiSetInkProcessorIsInkDevice(v37, *a4, v32 + 6);
      LOBYTE(v33) = 0;
      if ( IsInkDevice )
      {
        *(_DWORD *)(v8 + 200) |= 0x200u;
      }
      else if ( ((unsigned int)RimDeviceTypeToRimInputType(v8, *(unsigned __int8 *)(v8 + 48)) & *(_DWORD *)(a1 + 84)) == 0
             || *(_DWORD *)(a1 + 88) != v33 && (*(_DWORD *)(v8 + 184) & 0x10000) == 0 )
      {
        goto LABEL_82;
      }
    }
  }
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
      58,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
  return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
}
