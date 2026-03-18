/*
 * XREFs of RIMVirtAllocateHidDesc @ 0x1C0183828
 * Callers:
 *     RIMVirtCreateHidDesc @ 0x1C0184200 (RIMVirtCreateHidDesc.c)
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
 *     RIMFreeHidDesc @ 0x1C01810B4 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C01824A8 (RIMIsInteractiveCtrl.c)
 *     RIMVirtCreatePointerDeviceInfo @ 0x1C018CC18 (RIMVirtCreatePointerDeviceInfo.c)
 */

__int64 __fastcall RIMVirtAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r14
  char v8; // dl
  NSInstrumentation::CLeakTrackingAllocator *v9; // rsi
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
  __int64 v28; // rcx
  __int64 v29; // xmm0_8
  int PointerDeviceInfo; // eax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // r10d
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r9
  int v41; // eax
  char v43; // dl
  int v44; // edx
  int v45; // r8d
  char v46; // dl
  __int64 v47; // [rsp+48h] [rbp-C0h]
  char v48; // [rsp+58h] [rbp-B0h]
  unsigned __int16 v49; // [rsp+58h] [rbp-B0h]
  unsigned int v50; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h] BYREF
  int v55; // [rsp+90h] [rbp-78h]
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v59; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int *v60; // [rsp+C0h] [rbp-48h]
  _WORD *v61; // [rsp+C8h] [rbp-40h]
  _OWORD v62[4]; // [rsp+D8h] [rbp-30h] BYREF
  PVOID BackTrace[20]; // [rsp+118h] [rbp+10h] BYREF
  PVOID v64[26]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v66; // [rsp+2A0h] [rbp+198h]
  __int64 v67; // [rsp+2A8h] [rbp+1A0h]
  unsigned __int16 v68; // [rsp+2A8h] [rbp+1A0h]

  v67 = a3;
  v66 = a2;
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
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x52u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        a4[1],
        *a4);
    return 0LL;
  }
  v9 = gpLeakTrackingAllocator;
  v50 = 1147695954;
  v56 = 260LL;
  v54 = 120LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( *(_DWORD *)gpLeakTrackingAllocator )
  {
    if ( v10 != 1 )
    {
      if ( v10 != 2 )
        goto LABEL_118;
      v52 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1147695954, &v52) )
      {
        v59 = &v56;
        v60 = &v50;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v9,
                                                                                           (__int64)&v59,
                                                                                           &v54);
        goto LABEL_33;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v13,
                                                                                         136LL,
                                                                                         1147695954LL);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_118;
      _InterlockedAdd64((volatile signed __int64 *)v9 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 >= 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
               (__int64)v9,
               UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v52,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_36;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                  (__int64)v9,
                  (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v52,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
        goto LABEL_33;
      }
      _InterlockedAdd64((volatile signed __int64 *)v9 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_118;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x44687352u) )
      goto LABEL_118;
    Pool2 = (_QWORD *)ExAllocatePool2(v56 & 0xFFFFFFFFFFFFFFFDuLL, 136LL, v50);
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
LABEL_118:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v46 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v46 = 0;
    }
    if ( v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_S(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v46,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x53u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        *(const wchar_t **)(v7 + 216));
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
  v61 = (_WORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  v20 = *(unsigned __int16 *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 44);
  LODWORD(v51) = 1886417746;
  v57 = 68LL;
  v21 = 5 * v20;
  v22 = *(_DWORD *)gpLeakTrackingAllocator;
  v23 = 2 * v21;
  v58 = v23;
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
        v25 = (_QWORD *)ExAllocatePool2(v57 & 0xFFFFFFFFFFFFFFFDuLL, v23 + 16, (unsigned int)v51);
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
      v53 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v53) )
      {
        v59 = &v57;
        v60 = (unsigned int *)&v51;
        v24 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v19,
                (__int64)&v59,
                &v58);
        goto LABEL_60;
      }
      v48 = v26;
      if ( v23 < 0x1000 || (v23 & 0xFFF) != 0 )
      {
        v23 += 16LL;
        v48 = 1;
        v58 = v23;
      }
      v24 = ExAllocatePool2(68LL, v23, v27);
      if ( v24 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v19 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v64);
        if ( v48 && (unsigned __int64)(v24 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v19,
                 (const void *)v24,
                 v53,
                 (struct NSInstrumentation::CBackTrace *)v64) )
          {
            v24 += 16LL;
            goto LABEL_60;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v19,
                    v24,
                    v53,
                    (struct NSInstrumentation::CBackTrace *)v64) )
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
        *v61);
    }
    RIMFreeHidDesc((char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return 0LL;
  }
  v7 = v66;
LABEL_77:
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v67;
  *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104) = *(_QWORD *)a5;
  *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112) = *(_DWORD *)(a5 + 8);
  v49 = a4[1];
  if ( v49 == 13 )
  {
    v28 = *a4;
    if ( (unsigned __int16)(v28 - 1) <= 1u || (LOWORD(v28) = v28 - 4, (unsigned __int16)v28 <= 1u) )
    {
      EtwTracePointerDeviceArrivalStart(v28);
      v29 = *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 104);
      v55 = *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 112);
      v54 = v29;
      PointerDeviceInfo = RIMVirtCreatePointerDeviceInfo(a1, v7, v67, (_DWORD)a4, (unsigned int)&v54, a6);
      if ( PointerDeviceInfo >= 0 || *a4 == 5 && PointerDeviceInfo != -1073741808 )
      {
        EtwTracePointerDeviceArrivalStop(v31);
        LOBYTE(v34) = 0;
        goto LABEL_94;
      }
LABEL_102:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      v43 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v47) = a4[1];
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v43,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x57u,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          v47,
          *a4);
      }
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0LL;
      *(_QWORD *)(v7 + 456) = 0LL;
      RIMFreeHidDesc((char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v44) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v44) = 0;
      }
      if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v45) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v44,
          v45,
          (_DWORD)gRimLog,
          4,
          1,
          88,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          0);
      }
      return 0LL;
    }
  }
  v35 = *((_OWORD *)a4 + 1);
  v62[0] = *(_OWORD *)a4;
  v36 = *((_OWORD *)a4 + 2);
  v62[1] = v35;
  v37 = *((_OWORD *)a4 + 3);
  v62[2] = v36;
  v62[3] = v37;
  LOBYTE(v38) = RIMIsInteractiveCtrl(v62);
  if ( v38 )
  {
    *(_DWORD *)(v7 + 200) |= 0x100u;
  }
  else
  {
    v68 = *a4;
    if ( !qword_1C0296328
      || (int)qword_1C0296328(v39, v32, v33, v40) < 0
      || !qword_1C0296330
      || (v41 = qword_1C0296330(v49, v68, a5 + 6, 0LL), LOBYTE(v34) = 0, !v41) )
    {
      if ( ((unsigned int)RimDeviceTypeToRimInputType(v7, *(unsigned __int8 *)(v7 + 48)) & *(_DWORD *)(a1 + 84)) != 0
        && (*(_DWORD *)(a1 + 88) == v34 || (*(_DWORD *)(v7 + 184) & 0x10000) != 0) )
      {
        goto LABEL_94;
      }
      goto LABEL_102;
    }
    *(_DWORD *)(v7 + 200) |= 0x200u;
  }
LABEL_94:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v32) = v34;
  }
  if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v32,
      v33,
      (_DWORD)gRimLog,
      4,
      1,
      86,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
  }
  return UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
}
