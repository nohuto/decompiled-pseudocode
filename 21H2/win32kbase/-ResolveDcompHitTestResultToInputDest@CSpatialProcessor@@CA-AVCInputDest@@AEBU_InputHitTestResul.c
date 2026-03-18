/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0035090
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C0034E2C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0001CF8 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0004F0C (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CInputDest *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v4; // r13
  unsigned int v5; // ebx
  CInputDest *v7; // r15
  int v8; // edx
  __int64 v9; // r8
  char v10; // bl
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // r10d
  void *v16; // rdx
  bool v18; // al
  __int64 v19; // rdx
  PDEVICE_OBJECT v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rax
  char v23; // [rsp+40h] [rbp-C0h]
  _QWORD v25[15]; // [rsp+68h] [rbp-98h] BYREF
  _OWORD v26[7]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(void **)(a2 + 8);
  v5 = a3;
  v25[0] = a4;
  v7 = a1;
  if ( (_DWORD)a3 == 6 || !(_DWORD)a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  memset(v26, 0, sizeof(v26));
  if ( !v4 )
  {
    if ( *(_QWORD *)a2 )
    {
      v10 = 1;
      v11 = HMValidateHandleNoSecure(*(_QWORD *)a2, 1);
      if ( v11 )
      {
        LODWORD(v26[0]) |= 4u;
        DWORD2(v26[5]) |= 1u;
        HIDWORD(v26[5]) = 2;
        *(_QWORD *)&v26[5] = v11;
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v9,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            5,
            12,
            (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
            *(_QWORD *)a2);
        }
      }
      if ( LODWORD(v26[0]) )
        goto LABEL_13;
      LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_19;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v12,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        5,
        13,
        (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
        *(_QWORD *)a2);
    }
    else
    {
      v10 = 1;
      LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          5,
          14,
          (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids);
      }
    }
LABEL_43:
    if ( !LODWORD(v26[0]) )
      goto LABEL_19;
    goto LABEL_13;
  }
  v18 = CSpatialProcessor::ResolveInputSinkToINPUTDEST(v4, v5, (struct tagINPUTDEST *)v26);
  v10 = 1;
  if ( v18 )
  {
    if ( (v26[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v9);
    v21 = 0LL;
    if ( qword_1C029CE98 && (unsigned int)qword_1C029CE98(*(_QWORD *)&v26[5]) )
    {
      if ( HIDWORD(v26[5]) != 2 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v9);
      v22 = HMValidateHandleNoSecure(*(_QWORD *)a2, 1);
      v21 = v22;
      if ( v22 && *(char *)(*(_QWORD *)(v22 + 40) + 19LL) >= 0 )
      {
        v20 = WPP_GLOBAL_Control;
        LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v19,
            v9,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            5,
            16,
            (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
            v26[5]);
      }
      else
      {
        memset(&v25[1], 0, 0x70uLL);
        v26[0] = *(_OWORD *)&v25[1];
        v26[2] = *(_OWORD *)&v25[5];
        v26[1] = *(_OWORD *)&v25[3];
        v26[4] = *(_OWORD *)&v25[9];
        v26[3] = *(_OWORD *)&v25[7];
        v26[6] = *(_OWORD *)&v25[13];
        v26[5] = *(_OWORD *)&v25[11];
        v20 = WPP_GLOBAL_Control;
        LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v19,
            v9,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            5,
            15,
            (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
            v21);
      }
    }
    if ( !LODWORD(v26[0]) )
      goto LABEL_80;
    if ( (v26[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v9);
    LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        5,
        17,
        (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
        (char)v4,
        v26[5]);
    }
    ApiSetEditionUpdateInputTransformFromHitTest((__int64)v26, v21, (__int64)v4, -(v26[1] & 1), a2 + 16, (__int64)v25);
    v7 = a1;
  }
  if ( !LODWORD(v26[0]) )
  {
LABEL_80:
    LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        v19,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        5,
        18,
        (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
        (char)v4);
    }
    v7 = a1;
    goto LABEL_43;
  }
LABEL_13:
  v13 = *(_QWORD *)(a2 + 88);
  v14 = *(_DWORD *)(a2 + 96);
  v15 = *(_DWORD *)(a2 + 100);
  *(_QWORD *)&v26[6] = v13;
  DWORD2(v26[6]) = v14;
  DWORD1(v26[0]) = v15;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v10 = 0;
  }
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v23 = v13;
    v16 = &WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids;
    LOBYTE(v16) = v10;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qDD(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v16,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      5,
      19,
      (__int64)&WPP_aa8d325859863bdf9fbc8a93402e51ff_Traceguids,
      v23,
      v14,
      v15);
  }
LABEL_19:
  CInputDest::CInputDest(v7, (const struct tagINPUTDEST *)v26);
  return v7;
}
