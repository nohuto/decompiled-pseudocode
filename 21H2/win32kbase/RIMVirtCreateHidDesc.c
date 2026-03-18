/*
 * XREFs of RIMVirtCreateHidDesc @ 0x1C018DB94
 * Callers:
 *     RIMVirtCreateDev @ 0x1C017C948 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00564C4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     fromIV_HIDP_CAPS @ 0x1C0189B18 (fromIV_HIDP_CAPS.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C018D358 (RIMVirtAllocateHidDesc.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C018E4F0 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0199C38 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C019A000 (RIMSearchHidTLCInfo.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C020DE34 (ApiSetInkProcessorIsInkDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_WORD *__fastcall RIMVirtCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *HidDesc; // r12
  __int64 v4; // r13
  __int64 v5; // r15
  PVOID v7; // rdi
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // edx
  __int64 Pool2; // rbx
  char v12; // si
  _UNKNOWN **v13; // r8
  _OWORD *v14; // rax
  size_t v15; // r8
  const void *v16; // rdx
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // r9
  unsigned __int16 v22; // r10
  __int64 v23; // rax
  _UNKNOWN **v24; // r8
  int v25; // edx
  PDEVICE_OBJECT v26; // rcx
  bool v27; // al
  _UNKNOWN **v28; // r8
  __int16 v29; // r9
  int v30; // edx
  _UNKNOWN **v31; // r8
  int v32; // edx
  _UNKNOWN **v33; // r8
  __int64 v34; // rax
  int v35; // edx
  __int64 v36; // rbx
  _UNKNOWN **v37; // r8
  __int64 v38; // rdx
  _UNKNOWN **v39; // r8
  _UNKNOWN **v40; // r8
  int v42; // [rsp+20h] [rbp-E0h]
  int v43; // [rsp+28h] [rbp-D8h]
  char v44; // [rsp+40h] [rbp-C0h]
  __int64 v45; // [rsp+60h] [rbp-A0h]
  int v46; // [rsp+68h] [rbp-98h]
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v48[64]; // [rsp+110h] [rbp+10h] BYREF
  _OWORD v49[4]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v50; // [rsp+190h] [rbp+90h] BYREF
  int v51; // [rsp+198h] [rbp+98h]

  HidDesc = 0LL;
  v4 = a3;
  v5 = a2;
  if ( (unsigned __int8)(*(_BYTE *)(a2 + 48) - 1) > 1u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      89,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
  }
  v7 = gpLeakTrackingAllocator;
  v8 = *(unsigned int *)(v4 + 176);
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) != 0x70707352
    || (v9 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_15:
    Pool2 = ExAllocatePool2(68LL, v8);
    goto LABEL_16;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1886417746 )
  {
    if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_15;
  }
  v12 = 0;
  if ( v8 < 0x1000 || (v8 & 0xFFF) != 0 )
  {
    v12 = 1;
    v8 += 16LL;
  }
  Pool2 = ExAllocatePool2(68LL, v8);
  if ( !Pool2 )
    goto LABEL_17;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !v12 || (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
           (__int64)v7,
           Pool2,
           (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      goto LABEL_35;
    }
LABEL_30:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_17:
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        (_DWORD)v13,
        (_DWORD)gRimLog,
        3,
        1,
        90,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
    return HidDesc;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)v7,
          (const void *)Pool2,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
    goto LABEL_30;
  Pool2 += 16LL;
LABEL_16:
  if ( !Pool2 )
    goto LABEL_17;
LABEL_35:
  LODWORD(v45) = *(_DWORD *)(v4 + 176);
  BYTE4(v45) = *(_DWORD *)(v4 + 180) != 0;
  BYTE5(v45) = *(_BYTE *)(v4 + 184);
  HIWORD(v45) = *(_WORD *)(v4 + 188);
  LOWORD(v46) = *(_WORD *)(v4 + 192);
  HIWORD(v46) = *(_WORD *)(v4 + 196);
  v51 = v46;
  v50 = v45;
  v14 = (_OWORD *)fromIV_HIDP_CAPS((__int64)v48, v4 + 80);
  v15 = *(unsigned int *)(v4 + 176);
  v16 = *(const void **)(v4 + 200);
  v49[0] = *v14;
  v49[1] = v14[1];
  v49[2] = v14[2];
  v49[3] = v14[3];
  memmove((void *)Pool2, v16, v15);
  LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      (_DWORD)gRimLog,
      4,
      1,
      91,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      SBYTE2(v49[0]),
      v49[0]);
  }
  LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      (_DWORD)gRimLog,
      4,
      1,
      92,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      SBYTE4(v49[0]),
      SBYTE8(v49[0]));
  }
  DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", LOWORD(v49[0]), WORD1(v49[0]));
  v20 = *(_DWORD *)(a1 + 88);
  v21 = WORD1(v49[0]);
  v22 = v49[0];
  if ( v20 )
  {
    v23 = 0LL;
    while ( *(_DWORD *)(*(_QWORD *)(a1 + 96) + 4 * v23) != LODWORD(v49[0]) )
    {
      v23 = (unsigned int)(v23 + 1);
      if ( (unsigned int)v23 >= v20 )
        goto LABEL_56;
    }
    *(_DWORD *)(v5 + 184) |= 0x10000u;
  }
LABEL_56:
  if ( (*(_DWORD *)(v5 + 184) & 0x10000) == 0 && (_WORD)v21 == 1 )
  {
    if ( v22 && (v22 <= 2u || v22 > 5u && (v22 <= 7u || v22 == 128)) )
    {
      LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v24 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          (_DWORD)v24,
          (_DWORD)gRimLog,
          4,
          1,
          93,
          (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
          1,
          v22);
      }
      goto LABEL_112;
    }
LABEL_83:
    v25 = 14;
    if ( v22 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
    {
      v26 = WPP_GLOBAL_Control;
      v27 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v28 = &WPP_RECORDER_INITIALIZED;
      LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_112;
      v29 = 97;
      v44 = 1;
LABEL_81:
      LOBYTE(v25) = v27;
      WPP_RECORDER_AND_TRACE_SF_dd(
        v26->AttachedDevice,
        v25,
        (_DWORD)v28,
        (_DWORD)gRimLog,
        3,
        1,
        v29,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v44,
        14);
LABEL_112:
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)Pool2);
      return HidDesc;
    }
    goto LABEL_93;
  }
  if ( (_WORD)v21 != 13 )
  {
    if ( (_WORD)v21 != 1 )
      goto LABEL_93;
    goto LABEL_83;
  }
  v25 = 14;
  if ( v22 == 14 )
  {
    v26 = WPP_GLOBAL_Control;
    v27 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v28 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v27 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_112;
    v29 = 96;
    v44 = 13;
    goto LABEL_81;
  }
LABEL_93:
  if ( (unsigned int)ApiSetInkProcessorIsInkDevice((unsigned __int16)v21, v22, (char *)&v50 + 6, v21)
    && (*(_DWORD *)(a1 + 84) & 4) == 0 )
  {
    LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v31 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v30,
        (_DWORD)v31,
        (_DWORD)gRimLog,
        3,
        1,
        98,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
    goto LABEL_112;
  }
  HidDesc = (_WORD *)RIMVirtAllocateHidDesc(a1, v5, Pool2, (unsigned __int16 *)v49, (__int64)&v50, v4);
  if ( !HidDesc )
  {
    LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    v33 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v32,
        (_DWORD)v33,
        (_DWORD)gRimLog,
        3,
        1,
        99,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        SBYTE2(v49[0]),
        v49[0]);
    }
    goto LABEL_112;
  }
  v34 = RIMSearchHidTLCInfo(WORD1(v49[0]), LOWORD(v49[0]));
  v36 = v34;
  if ( v34 )
  {
    LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v37 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DDq(
        WPP_GLOBAL_Control->AttachedDevice,
        v35,
        (_DWORD)v37,
        WORD1(v49[0]),
        v42,
        v43,
        100,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        SBYTE2(v49[0]),
        v49[0],
        v34);
    }
LABEL_140:
    ++*(_DWORD *)(v36 + 20);
    *(_QWORD *)(v5 + 464) = v36;
    return HidDesc;
  }
  v36 = RIMAllocateAndLinkHidTLCInfo(WORD1(v49[0]), LOWORD(v49[0]));
  if ( v36 )
  {
    LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v40 = &WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qDD(
        WPP_GLOBAL_Control->AttachedDevice,
        v38,
        (_DWORD)v40,
        (_DWORD)gRimLog,
        4,
        1,
        102,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v36,
        SBYTE2(v49[0]),
        v49[0]);
    }
    goto LABEL_140;
  }
  LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  v39 = &WPP_RECORDER_INITIALIZED;
  LOBYTE(v39) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v38,
      (_DWORD)v39,
      (_DWORD)gRimLog,
      3,
      1,
      101,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      a1);
  RIMFreeHidDesc(HidDesc, v38, (__int64)v39);
  return 0LL;
}
