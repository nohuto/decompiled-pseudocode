/*
 * XREFs of RIMAllocateHidDesc @ 0x1C017F574
 * Callers:
 *     RIMCreateHidDesc @ 0x1C007EF3C (RIMCreateHidDesc.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C007327C (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0080044 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     rimIsHidInputDevice @ 0x1C00E0FD2 (rimIsHidInputDevice.c)
 *     EtwTracePointerDeviceArrivalStart @ 0x1C013ACD0 (EtwTracePointerDeviceArrivalStart.c)
 *     EtwTracePointerDeviceArrivalStop @ 0x1C013AD00 (EtwTracePointerDeviceArrivalStop.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     RIMConfigurePointerDevice @ 0x1C0180590 (RIMConfigurePointerDevice.c)
 *     RIMFreeHidDesc @ 0x1C01810B4 (RIMFreeHidDesc.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C01811D4 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     RIMIsInteractiveCtrl @ 0x1C01824A8 (RIMIsInteractiveCtrl.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0187070 (RIMCreatePointerDeviceInfo.c)
 *     RIMApiSetSetUserPTPEnabledPreference @ 0x1C0192B68 (RIMApiSetSetUserPTPEnabledPreference.c)
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
  __int64 v8; // r15
  char v9; // dl
  NSInstrumentation::CLeakTrackingAllocator *v10; // rsi
  int v11; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  __int64 v14; // r10
  int v15; // edx
  int v16; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v17; // r14
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // eax
  unsigned __int64 v21; // rsi
  __int64 v22; // rsi
  _QWORD *v23; // rax
  char v24; // r10
  unsigned int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // xmm0_8
  int v28; // eax
  __int64 v29; // rcx
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // r8
  int v33; // r10d
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  int v41; // edx
  int v42; // r8d
  char v43; // dl
  __int64 v44; // [rsp+48h] [rbp-C0h]
  char v45; // [rsp+58h] [rbp-B0h]
  unsigned __int16 v46; // [rsp+58h] [rbp-B0h]
  unsigned int v47; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v49; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-90h] BYREF
  __int64 v51; // [rsp+88h] [rbp-80h] BYREF
  int v52; // [rsp+90h] [rbp-78h]
  __int64 v53; // [rsp+98h] [rbp-70h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v55; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v56; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v57; // [rsp+C0h] [rbp-48h]
  _WORD *v58; // [rsp+C8h] [rbp-40h]
  _OWORD v59[4]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID BackTrace[20]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v61[26]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v63; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int16 v64; // [rsp+2A8h] [rbp+1A0h]

  v63 = a3;
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
      || (v9 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v9 = 0;
    }
    if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v9,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x36u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        a4[1],
        *a4);
    return 0LL;
  }
  v10 = gpLeakTrackingAllocator;
  v51 = 120LL;
  LODWORD(v48) = 1147695954;
  v53 = 260LL;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v11 != 1 )
    {
      if ( v11 != 2 )
        goto LABEL_122;
      v49 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v49) )
      {
        v56 = &v53;
        v57 = (unsigned int *)&v48;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v10,
                                                                                           (__int64)&v56,
                                                                                           &v51);
        goto LABEL_33;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v14,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_122;
      _InterlockedAdd64((volatile signed __int64 *)v10 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v10,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v49,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_36;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v10,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v49,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_33;
      }
      _InterlockedAdd64((volatile signed __int64 *)v10 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_122;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      goto LABEL_122;
    Pool2 = (_QWORD *)ExAllocatePool2(v53 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, (unsigned int)v48);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL),
          *Pool2 = 1147695954LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v10 + 1),
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
      _InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL);
  }
LABEL_33:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_122:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v43 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v43 = 0;
    }
    if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v43,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x37u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(const wchar_t **)(v8 + 216));
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
  v58 = (_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v18 = *(unsigned __int16 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v47 = 1886417746;
  v54 = 68LL;
  v19 = 5 * v18;
  v20 = *(_DWORD *)gpLeakTrackingAllocator;
  v21 = 2 * v19;
  v55 = v21;
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
      v50 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v50) )
      {
        v56 = &v54;
        v57 = &v47;
        v22 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v17,
                (__int64)&v56,
                &v55);
        goto LABEL_60;
      }
      v45 = v24;
      if ( v21 < 0x1000 || (v21 & 0xFFF) != 0 )
      {
        v21 += 16LL;
        v45 = 1;
        v55 = v21;
      }
      v22 = ExAllocatePool2(68LL, v21, v25);
      if ( v22 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v17 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v61);
        if ( v45 && (unsigned __int64)(v22 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v17,
                 (const void *)v22,
                 v50,
                 (struct NSInstrumentation::CBackTrace *)v61) )
          {
            v22 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v17,
                    v22,
                    v50,
                    (struct NSInstrumentation::CBackTrace *)v61) )
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
  v23 = (_QWORD *)ExAllocatePool2(v54 & 0xFFFFFFFFFFFFFFFDuLL, v21 + 16, v47);
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
        *v58);
    }
    RIMFreeHidDesc((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 0LL;
  }
LABEL_76:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v63;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_DWORD *)(a5 + 8);
  v46 = a4[1];
  if ( v46 == 13
    && ((v26 = *a4, (unsigned __int16)(v26 - 1) <= 1u) || (LOWORD(v26) = v26 - 4, (unsigned __int16)v26 <= 1u)) )
  {
    EtwTracePointerDeviceArrivalStart(v26);
    v27 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104);
    v52 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112);
    v51 = v27;
    v28 = RIMCreatePointerDeviceInfo(a1, v8, v63, (_DWORD)a4, a6, a7, (__int64)&v51);
    v29 = *a4;
    if ( v28 >= 0 )
    {
      LOWORD(v29) = v29 - 4;
      if ( (unsigned __int16)v29 <= 1u )
      {
        RIMConfigurePointerDevice(
          a1,
          v8,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v8 + 472) )
          {
            v47 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1274);
          }
          RIMApiSetSetUserPTPEnabledPreference(
            v8,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
            a1);
          *(_DWORD *)(v8 + 200) ^= (*(_DWORD *)(v8 + 200) ^ ((unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(
                                                                             v63,
                                                                             0LL) << 10)) & 0x400;
        }
      }
    }
    else if ( (_WORD)v29 != 5 || v28 == -1073741808 )
    {
LABEL_82:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      v30 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v44) = a4[1];
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v30,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x3Bu,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          v44,
          *a4);
      }
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
      *(_QWORD *)(v8 + 456) = 0LL;
      RIMFreeHidDesc((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v41) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v41) = 0;
      }
      if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v41,
          v42,
          (_DWORD)gRimLog,
          4,
          1,
          60,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          0);
      }
      return 0LL;
    }
    EtwTracePointerDeviceArrivalStop(v29);
    LOBYTE(v33) = 0;
  }
  else
  {
    v34 = *((_OWORD *)a4 + 1);
    v59[0] = *(_OWORD *)a4;
    v35 = *((_OWORD *)a4 + 2);
    v59[1] = v34;
    v36 = *((_OWORD *)a4 + 3);
    v59[2] = v35;
    v59[3] = v36;
    if ( (unsigned int)RIMIsInteractiveCtrl(v59) )
    {
      *(_DWORD *)(v8 + 200) |= 0x100u;
    }
    else
    {
      v64 = *a4;
      if ( qword_1C0296328
        && (int)qword_1C0296328(v37, v31, v32, v38) >= 0
        && qword_1C0296330
        && (v39 = qword_1C0296330(v46, v64, a5 + 6, 0LL), LOBYTE(v33) = 0, v39) )
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
