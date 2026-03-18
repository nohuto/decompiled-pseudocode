/*
 * XREFs of RIMAllocateHidDesc @ 0x1C018A2D4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C0056014 (RIMCreateHidDesc.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1C0046ABC (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00564C4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     Win32AllocPoolNonPagedZInit @ 0x1C005F140 (Win32AllocPoolNonPagedZInit.c)
 *     Win32AllocPoolZInit @ 0x1C00869F0 (Win32AllocPoolZInit.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A2040 (RimDeviceTypeToRimInputType.c)
 *     RIMGetDeviceFeedbackGlobalIntensityCaps @ 0x1C00DC348 (RIMGetDeviceFeedbackGlobalIntensityCaps.c)
 *     rimIsHidInputDevice @ 0x1C00E6476 (rimIsHidInputDevice.c)
 *     RIMConfigurePointerDevice @ 0x1C018A990 (RIMConfigurePointerDevice.c)
 *     RIMFindSiblingMouseDevice @ 0x1C018B2A4 (RIMFindSiblingMouseDevice.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 *     RIMIsInteractiveCtrl @ 0x1C018C204 (RIMIsInteractiveCtrl.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C018C290 (RIMMarkSiblingMouseDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C0190190 (RIMCreatePointerDeviceInfo.c)
 *     ApiSetEtwTracePointerDeviceArrivalStart @ 0x1C020C7BC (ApiSetEtwTracePointerDeviceArrivalStart.c)
 *     ApiSetEtwTracePointerDeviceArrivalStop @ 0x1C020C8E4 (ApiSetEtwTracePointerDeviceArrivalStop.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C020DE34 (ApiSetInkProcessorIsInkDevice.c)
 *     ApiSetSetUserPTPEnabledPreference @ 0x1C020F954 (ApiSetSetUserPTPEnabledPreference.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAllocateHidDesc(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned __int16 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // r8
  __int64 v17; // xmm0_8
  int v18; // eax
  unsigned __int16 v19; // cx
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  PVOID v25; // rsi
  char *v26; // rcx
  int v27; // edx
  __int64 v28; // r8
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // r9
  int v34; // edx
  int v35; // r8d
  int v36; // [rsp+58h] [rbp-51h]
  __int64 v37; // [rsp+68h] [rbp-41h] BYREF
  int v38; // [rsp+70h] [rbp-39h]
  _OWORD v39[7]; // [rsp+78h] [rbp-31h] BYREF
  PVOID Object; // [rsp+108h] [rbp+5Fh] BYREF

  Object = a3;
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
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        53,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
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
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        54,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        a4[1],
        *a4);
    }
    return 0LL;
  }
  v9 = Win32AllocPoolZInit(0x78uLL, 1147695954);
  v12 = v9;
  if ( !v9 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_S(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (_DWORD)gRimLog,
        3,
        1,
        55,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        *(_QWORD *)(v8 + 216));
    }
    return 0LL;
  }
  *(_OWORD *)(v9 + 40) = *(_OWORD *)a4;
  *(_OWORD *)(v9 + 56) = *((_OWORD *)a4 + 1);
  *(_OWORD *)(v9 + 72) = *((_OWORD *)a4 + 2);
  *(_OWORD *)(v9 + 88) = *((_OWORD *)a4 + 3);
  if ( rimIsHidInputDevice(v8, v9, v11) )
  {
    v13 = Win32AllocPoolNonPagedZInit(10LL * *(unsigned __int16 *)(v12 + 44), 1886417746);
    *(_QWORD *)(v12 + 24) = v13;
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        (_DWORD)gRimLog,
        4,
        1,
        56,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v13);
    }
    if ( !*(_QWORD *)(v12 + 24) )
    {
      LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          (_DWORD)gRimLog,
          3,
          1,
          57,
          (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
          *(_WORD *)(v12 + 44));
      }
      RIMFreeHidDesc((void *)v12);
      return 0LL;
    }
  }
  v16 = a5;
  *(_QWORD *)(v12 + 16) = Object;
  *(_QWORD *)(v12 + 104) = *(_QWORD *)v16;
  *(_DWORD *)(v12 + 112) = *(_DWORD *)(v16 + 8);
  if ( a4[1] == 13 && ((unsigned __int16)(*a4 - 1) <= 1u || (unsigned __int16)(*a4 - 4) <= 1u) )
  {
    ApiSetEtwTracePointerDeviceArrivalStart();
    v17 = *(_QWORD *)(v12 + 104);
    v38 = *(_DWORD *)(v12 + 112);
    v37 = v17;
    v18 = RIMCreatePointerDeviceInfo(a1, v8, Object, a4, a6, a7, &v37);
    v19 = *a4;
    v36 = v18;
    if ( v18 >= 0 )
    {
      if ( (unsigned __int16)(v19 - 4) <= 1u )
      {
        RIMConfigurePointerDevice(a1, v8, v12);
        if ( *a4 == 5 )
        {
          if ( !*(_QWORD *)(v8 + 472) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22, v24);
          ApiSetSetUserPTPEnabledPreference(v8, v12, a1);
          *(_DWORD *)(v8 + 200) ^= (*(_DWORD *)(v8 + 200) ^ ((unsigned int)RIMGetDeviceFeedbackGlobalIntensityCaps(
                                                                             (__int64)Object,
                                                                             0LL) << 10)) & 0x400;
          Object = 0LL;
          goto LABEL_62;
        }
        v18 = v36;
      }
    }
    else if ( v19 != 5 || v18 == -1073741808 )
    {
LABEL_51:
      DbgPrintWarning("Ignore (Usage: %x, UsagePage: %x)\n", *a4, a4[1]);
      LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          (_DWORD)gRimLog,
          4,
          1,
          59,
          (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
          a4[1],
          *a4);
      }
      *(_QWORD *)(v12 + 16) = 0LL;
      *(_QWORD *)(v8 + 456) = 0LL;
      RIMFreeHidDesc((void *)v12);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v34) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v34) = 0;
      }
      if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v35) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v34,
          v35,
          (_DWORD)gRimLog,
          4,
          1,
          60,
          (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
          0);
      }
      return 0LL;
    }
    Object = 0LL;
    if ( v18 < 0 )
    {
LABEL_67:
      ApiSetEtwTracePointerDeviceArrivalStop();
      goto LABEL_75;
    }
LABEL_62:
    if ( (unsigned int)RIMFindSiblingMouseDevice(v12, v8, &Object) )
    {
      v25 = Object;
      if ( Object )
        v26 = (char *)Object + 88;
      else
        v26 = 0LL;
      RIMMarkSiblingMouseDevice(v26, *a4);
      ObfDereferenceObject(v25);
    }
    goto LABEL_67;
  }
  v29 = *((_OWORD *)a4 + 1);
  v39[0] = *(_OWORD *)a4;
  v30 = *((_OWORD *)a4 + 2);
  v39[1] = v29;
  v31 = *((_OWORD *)a4 + 3);
  v39[2] = v30;
  v39[3] = v31;
  if ( (unsigned int)RIMIsInteractiveCtrl(v39) )
  {
    *(_DWORD *)(v8 + 200) |= 0x100u;
  }
  else if ( (unsigned int)ApiSetInkProcessorIsInkDevice((unsigned __int16)v32, *a4, v28 + 6, v32) )
  {
    *(_DWORD *)(v8 + 200) |= 0x200u;
  }
  else if ( ((unsigned int)RimDeviceTypeToRimInputType(v8, *(unsigned __int8 *)(v8 + 48)) & *(_DWORD *)(a1 + 84)) == 0
         || *(_DWORD *)(a1 + 88) && (*(_DWORD *)(v8 + 184) & 0x10000) == 0 )
  {
    goto LABEL_51;
  }
LABEL_75:
  LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v27,
      v28,
      (_DWORD)gRimLog,
      4,
      1,
      58,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
      v12);
  }
  return v12;
}
