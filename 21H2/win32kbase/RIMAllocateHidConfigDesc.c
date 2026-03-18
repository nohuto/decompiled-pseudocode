/*
 * XREFs of RIMAllocateHidConfigDesc @ 0x1C0189BB4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     RIMGetDeviceParent @ 0x1C00A13E0 (RIMGetDeviceParent.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 *     RIMDeliverConfigRequest @ 0x1C018AB6C (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C018B1B0 (RIMFindInputDeviceForConfig.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 */

__int64 RIMAllocateHidConfigDesc(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, ...)
{
  __int64 v3; // r12
  __int64 v4; // r13
  _WORD *v5; // r15
  PVOID v6; // rdi
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d
  __int64 Pool2; // r14
  PVOID v12; // rsi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rdi
  int v17; // r8d
  char v18; // r12
  __int64 v19; // rax
  __int128 v20; // xmm1
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  int v24; // r8d
  PDEVICE_OBJECT v25; // rcx
  bool v26; // al
  __int16 v27; // r9
  int v28; // eax
  int v29; // edx
  int v30; // r8d
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v34[26]; // [rsp+108h] [rbp+0h] BYREF
  struct _DEVICE_OBJECT *v36; // [rsp+1F8h] [rbp+F0h]
  __int64 v37; // [rsp+200h] [rbp+F8h] BYREF
  va_list va; // [rsp+200h] [rbp+F8h]
  _WORD *v39; // [rsp+208h] [rbp+100h]
  __int64 v40; // [rsp+210h] [rbp+108h]
  va_list va1; // [rsp+218h] [rbp+110h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v37 = va_arg(va1, _QWORD);
  v39 = va_arg(va1, _WORD *);
  v40 = va_arg(va1, _QWORD);
  v36 = a3;
  v3 = v37;
  v4 = a2;
  if ( !v37 )
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
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
    return 0LL;
  }
  v5 = v39;
  if ( !v39[4] )
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
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        46,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v39[1],
        *v39);
    }
    return 0LL;
  }
  v6 = gpLeakTrackingAllocator;
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x44687352) == 0x44687352
    && (v7 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
    while ( *((_DWORD *)gpLeakTrackingAllocator + v7) != 1147695954 )
    {
      if ( ++v7 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
        goto LABEL_21;
    }
    Pool2 = ExAllocatePool2(260LL, 136LL);
    if ( !Pool2 )
      goto LABEL_23;
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
             (__int64)v6,
             Pool2,
             (struct NSInstrumentation::CBackTrace *)BackTrace) )
      {
        goto LABEL_34;
      }
      goto LABEL_46;
    }
    if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
            (__int64)v6,
            (const void *)Pool2,
            (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
LABEL_46:
      ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_23:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_S(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (_DWORD)gRimLog,
          3,
          1,
          47,
          (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
          *(_QWORD *)(v4 + 216));
      }
      return 0LL;
    }
    Pool2 += 16LL;
  }
  else
  {
LABEL_21:
    Pool2 = ExAllocatePool2(260LL, 120LL);
  }
  if ( !Pool2 )
    goto LABEL_23;
LABEL_34:
  v12 = gpLeakTrackingAllocator;
  v13 = (unsigned __int16)v5[4];
  if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x70707352) != 0x70707352
    || (v14 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_38:
    v16 = ExAllocatePool2(68LL, v13);
    goto LABEL_39;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v14) != 1886417746 )
  {
    if ( ++v14 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_38;
  }
  v18 = 0;
  if ( v13 < 0x1000 || (v13 & 0xFFF) != 0 )
  {
    v18 = 1;
    v13 += 16LL;
  }
  v16 = ExAllocatePool2(68LL, v13);
  if ( v16 )
  {
    memset(v34, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, v34, 0LL);
    if ( v18 && (unsigned __int64)(v16 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v12,
             (const void *)v16,
             (struct NSInstrumentation::CBackTrace *)v34) )
      {
        v16 += 16LL;
        goto LABEL_52;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v12,
                v16,
                (struct NSInstrumentation::CBackTrace *)v34) )
    {
      goto LABEL_52;
    }
    ExFreePoolWithTag((PVOID)v16, 0);
  }
  v16 = 0LL;
LABEL_52:
  v3 = v37;
LABEL_39:
  *(_QWORD *)(Pool2 + 32) = v16;
  if ( !v16 )
  {
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v17,
        (_DWORD)gRimLog,
        3,
        1,
        48,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v5[4]);
    }
    goto LABEL_102;
  }
  v19 = v40;
  *(_OWORD *)(Pool2 + 40) = *(_OWORD *)v5;
  *(_OWORD *)(Pool2 + 56) = *((_OWORD *)v5 + 1);
  *(_OWORD *)(Pool2 + 72) = *((_OWORD *)v5 + 2);
  v20 = *((_OWORD *)v5 + 3);
  *(_QWORD *)(Pool2 + 16) = v3;
  *(_OWORD *)(Pool2 + 88) = v20;
  LODWORD(v37) = 0;
  *(_QWORD *)(Pool2 + 104) = *(_QWORD *)v19;
  *(_DWORD *)(Pool2 + 112) = *(_DWORD *)(v19 + 8);
  LODWORD(v31) = 0;
  v32 = 0LL;
  if ( !(unsigned int)RIMGetDeviceParent(v36, v4, v17) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v21) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v21) = 0;
    }
    if ( (_BYTE)v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v21,
        v22,
        (_DWORD)gRimLog,
        3,
        1,
        49,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
    }
  }
  if ( (unsigned int)RIMFindInputDeviceForConfig(Pool2, a1, v4, (unsigned int)va, (__int64)&v31, (__int64)&v32)
    && (_DWORD)v37 )
  {
    v24 = *(_DWORD *)(a1 + 84);
    if ( (_DWORD)v31 )
    {
      if ( (v24 & 0x10) != 0 )
      {
        *(_DWORD *)(v4 + 184) |= 0x800u;
        goto LABEL_85;
      }
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v23) = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v27 = 50;
    }
    else
    {
      if ( (v24 & 8) != 0 )
      {
        *(_DWORD *)(v4 + 184) |= 0x1000u;
LABEL_85:
        v28 = RIMDeliverConfigRequest((struct RIMDEV *)v4);
        if ( v28 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v29) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
          {
            LOBYTE(v29) = 0;
          }
          if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v29,
              v30,
              (_DWORD)gRimLog,
              3,
              1,
              52,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              v28);
          }
        }
        goto LABEL_93;
      }
      v25 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v23) = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v23 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_102;
      v27 = 51;
    }
    LOBYTE(v24) = v26;
    WPP_RECORDER_AND_TRACE_SF_D(
      v25->AttachedDevice,
      v23,
      v24,
      (_DWORD)gRimLog,
      3,
      1,
      v27,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      *(_DWORD *)(a1 + 84));
LABEL_102:
    RIMFreeHidDesc((void *)Pool2);
    return 0LL;
  }
LABEL_93:
  *(_BYTE *)(v4 + 48) = 3;
  return Pool2;
}
