_WORD *__fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  _WORD *HidDesc; // r12
  int v8; // edx
  int v9; // r8d
  NSInstrumentation::CLeakTrackingAllocator *v10; // rbx
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rdi
  char v14; // r10
  unsigned int v15; // r11d
  bool v16; // zf
  char v17; // al
  _OWORD *v18; // rax
  size_t v19; // r8
  const void *v20; // rdx
  int v21; // edx
  int v22; // r8d
  unsigned int v23; // edx
  unsigned int v24; // ecx
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r10
  unsigned int v27; // eax
  _UNKNOWN **v28; // r8
  int v29; // edx
  PDEVICE_OBJECT v30; // rcx
  char v31; // al
  _UNKNOWN **v32; // r8
  __int16 v33; // r9
  int v34; // edx
  _UNKNOWN **v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _UNKNOWN **v40; // r8
  __int64 v41; // rax
  int v42; // edx
  __int64 v43; // rbx
  _UNKNOWN **v44; // r8
  int v45; // edx
  _UNKNOWN **v46; // r8
  _UNKNOWN **v47; // r8
  _UNKNOWN **v48; // r8
  int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+28h] [rbp-D8h]
  char v52; // [rsp+40h] [rbp-C0h]
  unsigned int v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v55; // [rsp+78h] [rbp-88h]
  unsigned __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  PVOID BackTrace[20]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v59[64]; // [rsp+130h] [rbp+30h] BYREF
  _OWORD v60[4]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v61; // [rsp+1B0h] [rbp+B0h] BYREF
  int v62; // [rsp+1B8h] [rbp+B8h]

  v3 = 0;
  HidDesc = 0LL;
  memset(v60, 0, sizeof(v60));
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
  {
    v53 = 0x20000;
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
  v53 = 1886417746;
  v57 = 68LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v56 = v11;
  if ( v12 )
  {
    if ( v12 != 1 )
    {
      if ( v12 != 2 )
        goto LABEL_131;
      v54 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886417746, &v54) )
      {
        v54 = (unsigned __int64)&v57;
        v55 = &v53;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v10,
                                                                                           (__int64)&v54,
                                                                                           &v56);
        goto LABEL_30;
      }
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v11 += 16LL;
        v3 = v14;
        v56 = v11;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(68LL, v11, v15);
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_131;
      _InterlockedAdd64((volatile signed __int64 *)v10 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v3
        && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
         + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v10,
               (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
               v54,
               (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_30;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v10,
                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                  v54,
                  (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_33;
      }
      _InterlockedAdd64((volatile signed __int64 *)v10 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      goto LABEL_131;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707352u)
      || v11 + 16 < v11 )
    {
      goto LABEL_131;
    }
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       v57 & 0xFFFFFFFFFFFFFFFDuLL,
                                                                                       v11 + 16,
                                                                                       v53);
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
      || (_InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL),
          *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 1886417746LL,
          (UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL) == 0) )
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
LABEL_131:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v8) = 0;
    }
    v48 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        (_DWORD)v48,
        (_DWORD)gRimLog,
        3,
        1,
        90,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    return HidDesc;
  }
LABEL_33:
  v16 = *(_DWORD *)(a3 + 180) == 0;
  LODWORD(v54) = *(_DWORD *)(a3 + 176);
  v17 = *(_BYTE *)(a3 + 184);
  BYTE4(v54) = !v16;
  BYTE5(v54) = v17;
  HIWORD(v54) = *(_WORD *)(a3 + 188);
  LOWORD(v55) = *(_WORD *)(a3 + 192);
  WORD1(v55) = *(_WORD *)(a3 + 196);
  v62 = (int)v55;
  v61 = v54;
  v18 = (_OWORD *)fromIV_HIDP_CAPS((__int64)v59, a3 + 80);
  v19 = *(unsigned int *)(a3 + 176);
  v20 = *(const void **)(a3 + 200);
  v60[0] = *v18;
  v60[1] = v18[1];
  v60[2] = v18[2];
  v60[3] = v18[3];
  memmove((void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v20, v19);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v21) = 0;
  }
  if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v22,
      (_DWORD)gRimLog,
      4,
      1,
      91,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      SBYTE2(v60[0]),
      v60[0]);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v21) = 0;
  }
  if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v21,
      v22,
      (_DWORD)gRimLog,
      4,
      1,
      92,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      SBYTE4(v60[0]),
      SBYTE8(v60[0]));
  }
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", LOWORD(v60[0]), WORD1(v60[0]));
  v24 = *(_DWORD *)(a1 + 88);
  v25 = WORD1(v60[0]);
  v26 = v60[0];
  if ( v24 )
  {
    v27 = 0;
    while ( 1 )
    {
      v23 = v27;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4LL * v27) == LODWORD(v60[0]) )
        break;
      if ( ++v27 >= v24 )
        goto LABEL_53;
    }
    *(_DWORD *)(a2 + 184) |= 0x10000u;
  }
LABEL_53:
  if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 && v25 == 1 )
  {
    if ( v26 == 1 || v26 == 2 || v26 == 6 || v26 == 7 || v26 == 128 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v23) = 0;
      }
      v28 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_DD(
          WPP_GLOBAL_Control->AttachedDevice,
          v23,
          (_DWORD)v28,
          (_DWORD)gRimLog,
          4,
          1,
          93,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          1,
          v26);
      }
      goto LABEL_104;
    }
LABEL_77:
    if ( v25 == 1 )
    {
      v29 = 14;
      if ( v26 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
      {
        v30 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          v31 = 0;
        }
        v32 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_104;
        v33 = 97;
        v52 = 1;
        goto LABEL_76;
      }
    }
    goto LABEL_87;
  }
  if ( v25 != 13 )
    goto LABEL_77;
  v29 = 14;
  if ( v26 == 14 )
  {
    v30 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v31 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v31 = 0;
    }
    v32 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v31 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_104;
    v33 = 96;
    v52 = 13;
LABEL_76:
    LOBYTE(v29) = v31;
    WPP_RECORDER_AND_TRACE_SF_DD(
      v30->AttachedDevice,
      v29,
      (_DWORD)v32,
      (_DWORD)gRimLog,
      3,
      1,
      v33,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      v52,
      14);
LABEL_104:
    NSInstrumentation::CLeakTrackingAllocator::Free(
      gpLeakTrackingAllocator,
      (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    return HidDesc;
  }
LABEL_87:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice(v25, v26, (char *)&v61 + 6) && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v34) = 0;
    }
    v35 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v34,
        (_DWORD)v35,
        (_DWORD)gRimLog,
        3,
        1,
        98,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
    }
    goto LABEL_104;
  }
  HidDesc = (_WORD *)RIMVirtAllocateHidDesc(
                       a1,
                       a2,
                       UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                       (unsigned __int16 *)v60,
                       (__int64)&v61,
                       a3);
  if ( !HidDesc )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v36) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v36) = 0;
    }
    v40 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v36 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        v36,
        (_DWORD)v40,
        (_DWORD)gRimLog,
        3,
        1,
        99,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        SBYTE2(v60[0]),
        v60[0]);
    }
    goto LABEL_104;
  }
  v41 = SGDGetUserSessionState(v37, v36, v38, v39);
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v56, (struct _KTHREAD **)(v41 + 288));
  v43 = RIMSearchHidTLCInfo(WORD1(v60[0]), LOWORD(v60[0]));
  if ( v43 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v42) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v42) = 0;
    }
    v44 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v44) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DDq(
        WPP_GLOBAL_Control->AttachedDevice,
        v42,
        (_DWORD)v44,
        WORD1(v60[0]),
        v50,
        v51,
        100,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        SBYTE2(v60[0]),
        v60[0],
        v43);
    }
LABEL_129:
    ++*(_DWORD *)(v43 + 20);
    *(_QWORD *)(a2 + 464) = v43;
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v56);
    return HidDesc;
  }
  v43 = RIMAllocateAndLinkHidTLCInfo(WORD1(v60[0]), LOWORD(v60[0]));
  if ( v43 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v45) = 0;
    }
    v47 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v47) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        WPP_GLOBAL_Control->AttachedDevice,
        v45,
        (_DWORD)v47,
        (_DWORD)gRimLog,
        4,
        1,
        102,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v43,
        SBYTE2(v60[0]),
        v60[0]);
    }
    goto LABEL_129;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
  {
    LOBYTE(v45) = 0;
  }
  v46 = &WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v46) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v45,
      (_DWORD)v46,
      (_DWORD)gRimLog,
      3,
      1,
      101,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
      a1);
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v56);
  RIMFreeHidDesc(HidDesc);
  return 0LL;
}
