/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C0184200
 * Callers:
 *     RIMVirtCreateDev @ 0x1C0171148 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C00365D0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C004F0F4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C0080044 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00919C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DC98 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C016DD4C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C016E29C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C016E668 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C016F5EC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C016FA8C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 *     fromIV_HIDP_CAPS @ 0x1C017EC5C (fromIV_HIDP_CAPS.c)
 *     RIMFreeHidDesc @ 0x1C01810B4 (RIMFreeHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0183828 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C0184D2C (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0191414 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0191A58 (RIMSearchHidTLCInfo.c)
 */

char *__fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  char *HidDesc; // r12
  int v8; // edx
  int v9; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v10; // rbx
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  _QWORD *Pool2; // rax
  char v15; // r10
  unsigned int v16; // r11d
  bool v17; // zf
  char v18; // al
  _OWORD *v19; // rax
  size_t v20; // r8
  const void *v21; // rdx
  char v22; // dl
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // si
  __int64 v30; // rax
  char v31; // dl
  PDEVICE_OBJECT v32; // rcx
  char v33; // al
  char v34; // r8
  unsigned __int16 v35; // r9
  int v36; // edx
  _UNKNOWN **v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // dl
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // rbx
  _UNKNOWN **v46; // r8
  int v47; // edx
  _UNKNOWN **v48; // r8
  char v49; // dl
  _UNKNOWN **v50; // r8
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+28h] [rbp-D8h]
  __int64 v54; // [rsp+40h] [rbp-C0h]
  __int64 v55; // [rsp+48h] [rbp-B8h]
  unsigned int v56; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v57; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v58; // [rsp+78h] [rbp-88h]
  unsigned __int64 v59; // [rsp+80h] [rbp-80h] BYREF
  __int64 v60; // [rsp+88h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v62[64]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v63[4]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v64; // [rsp+1B0h] [rbp+B0h] BYREF
  int v65; // [rsp+1B8h] [rbp+B8h]

  v3 = 0;
  HidDesc = 0LL;
  memset(v63, 0, sizeof(v63));
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
  {
    v56 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3313);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (_DWORD)gRimLog,
      4,
      1,
      89,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
  }
  v10 = gpLeakTrackingAllocator;
  v11 = *(unsigned int *)(a3 + 176);
  v56 = 1886417746;
  v60 = 68LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v59 = v11;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
        goto LABEL_141;
      v57 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v57) )
      {
        v57 = (unsigned __int64)&v60;
        v58 = &v56;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v10,
                                                                                           (__int64)&v57,
                                                                                           &v59);
        goto LABEL_30;
      }
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v11 += 16LL;
        v3 = v15;
        v59 = v11;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(68LL, v11, v16);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_141;
      _InterlockedAdd64((volatile signed __int64 *)v10 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v3
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v10,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v57,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_30;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v10,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v57,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_33;
      }
      _InterlockedAdd64((volatile signed __int64 *)v10 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_141;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
      || v11 + 16 < v11 )
    {
      goto LABEL_141;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(v60 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v56);
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL),
          *Pool2 = 1886417746LL,
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v10 + 1),
        0x70707352uLL);
    }
  }
  else
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       68LL,
                                                                                       (unsigned int)v11,
                                                                                       1886417746LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL);
  }
LABEL_30:
  if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
LABEL_141:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v8) = 0;
    }
    v50 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v50) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        (_DWORD)v50,
        (_DWORD)gRimLog,
        3,
        1,
        90,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    return HidDesc;
  }
LABEL_33:
  v17 = *(_DWORD *)(a3 + 180) == 0;
  LODWORD(v57) = *(_DWORD *)(a3 + 176);
  v18 = *(_BYTE *)(a3 + 184);
  BYTE4(v57) = !v17;
  BYTE5(v57) = v18;
  HIWORD(v57) = *(_WORD *)(a3 + 188);
  LOWORD(v58) = *(_WORD *)(a3 + 192);
  WORD1(v58) = *(_WORD *)(a3 + 196);
  v65 = (int)v58;
  v64 = v57;
  v19 = (_OWORD *)fromIV_HIDP_CAPS((__int64)v62, a3 + 80);
  v20 = *(unsigned int *)(a3 + 176);
  v21 = *(const void **)(a3 + 200);
  v63[0] = *v19;
  v63[1] = v19[1];
  v63[2] = v19[2];
  v63[3] = v19[3];
  memmove((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v21, v20);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v22 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v22 = 0;
  }
  if ( v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v22,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x5Bu,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      WORD1(v63[0]),
      LOWORD(v63[0]));
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v23 = 0;
  }
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v55) = WORD4(v63[0]);
    LODWORD(v54) = WORD2(v63[0]);
    WPP_RECORDER_AND_TRACE_SF_DD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v23,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x5Cu,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v54,
      v55);
  }
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", LOWORD(v63[0]), WORD1(v63[0]));
  v27 = *(unsigned int *)(a1 + 88);
  v28 = WORD1(v63[0]);
  v29 = v63[0];
  if ( (_DWORD)v27 )
  {
    v30 = 0LL;
    v25 = *(_QWORD *)(a1 + 96);
    v26 = 1LL;
    while ( *(_DWORD *)(v25 + 4 * v30) != LODWORD(v63[0]) )
    {
      v30 = (unsigned int)(v30 + 1);
      if ( (unsigned int)v30 >= (unsigned int)v27 )
        goto LABEL_52;
    }
    *(_DWORD *)(a2 + 184) |= 0x10000u;
  }
LABEL_52:
  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 && v28 == 1 )
  {
    v26 = v29;
    if ( v29 == 1 || v29 == 2 || v29 == 6 || (v27 = (unsigned int)v29 - 7, v29 == 7) || v29 == 128 )
    {
      v31 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v55) = v29;
        LODWORD(v54) = 1;
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v31,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          4u,
          1u,
          0x5Du,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          v54,
          v55);
      }
      goto LABEL_111;
    }
LABEL_78:
    if ( v28 == 1 )
    {
      v24 = 14LL;
      if ( v29 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
      {
        v32 = WPP_GLOBAL_Control;
        v33 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_111;
        LODWORD(v55) = 14;
        v35 = 97;
        LODWORD(v54) = 1;
LABEL_77:
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)v32->AttachedDevice,
          v33,
          v34,
          (__int64)gRimLog,
          3u,
          1u,
          v35,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          v54,
          v55);
LABEL_111:
        Win32FreePool((char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        return HidDesc;
      }
    }
    goto LABEL_89;
  }
  if ( v28 != 13 )
    goto LABEL_78;
  v24 = 14LL;
  if ( v29 == 14 )
  {
    v32 = WPP_GLOBAL_Control;
    v33 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v34 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v33 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_111;
    LODWORD(v55) = 14;
    v35 = 96;
    LODWORD(v54) = 13;
    goto LABEL_77;
  }
LABEL_89:
  if ( qword_1C0296328
    && (int)qword_1C0296328(v27, v24, v25, v26) >= 0
    && qword_1C0296330
    && (unsigned int)qword_1C0296330(v28, v29, (char *)&v64 + 6, 0LL)
    && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v37 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        (_DWORD)v37,
        (_DWORD)gRimLog,
        3,
        1,
        98,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    goto LABEL_111;
  }
  HidDesc = (char *)RIMVirtAllocateHidDesc(
                      a1,
                      a2,
                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                      (unsigned __int16 *)v63,
                      (__int64)&v64,
                      a3);
  if ( !HidDesc )
  {
    v42 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v55) = LOWORD(v63[0]);
      LODWORD(v54) = WORD1(v63[0]);
      WPP_RECORDER_AND_TRACE_SF_DD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v42,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x63u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v54,
        v55);
    }
    goto LABEL_111;
  }
  v43 = SGDGetUserSessionState(v39, v38, v40, v41);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v59, (struct _KTHREAD **)(v43 + 288));
  v45 = RIMSearchHidTLCInfo(WORD1(v63[0]), LOWORD(v63[0]));
  if ( v45 )
  {
    LOBYTE(v44) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v46 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v46) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DDq(
        WPP_GLOBAL_Control->AttachedDevice,
        v44,
        (_DWORD)v46,
        WORD1(v63[0]),
        v52,
        v53,
        100,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        SBYTE2(v63[0]),
        v63[0],
        v45);
    }
LABEL_139:
    ++*(_DWORD *)(v45 + 20);
    *(_QWORD *)(a2 + 464) = v45;
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v59);
    return HidDesc;
  }
  v45 = RIMAllocateAndLinkHidTLCInfo(WORD1(v63[0]), LOWORD(v63[0]));
  if ( v45 )
  {
    v49 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v55) = WORD1(v63[0]);
      WPP_RECORDER_AND_TRACE_SF_qDD(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v49,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x66u,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v45,
        v55,
        LOWORD(v63[0]));
    }
    goto LABEL_139;
  }
  LOBYTE(v47) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  v48 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v47 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v47,
      (_DWORD)v48,
      (_DWORD)gRimLog,
      3,
      1,
      101,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      a1);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v59);
  RIMFreeHidDesc(HidDesc);
  return 0LL;
}
