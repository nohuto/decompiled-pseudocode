/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@CA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C007E1A4
 * Callers:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C007DFAC (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 * Callees:
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0008F00 (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C000E224 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@KA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003A4AC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C007EA2C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

CInputDest *__fastcall CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        CInputDest *a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  void *v4; // r13
  CInputDest *v7; // r15
  int v8; // edx
  int v9; // r8d
  char v10; // bl
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // rdx
  int v14; // r9d
  int v15; // r10d
  void *v16; // rdx
  bool v18; // al
  int v19; // edx
  __int64 v20; // r15
  __int64 v21; // rax
  char v22; // [rsp+40h] [rbp-C0h]
  _OWORD v24[8]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v25[7]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *(void **)(a2 + 8);
  *(_QWORD *)&v24[0] = a4;
  v7 = a1;
  if ( a3 == 6 || !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 134LL);
  memset(v25, 0, sizeof(v25));
  if ( v4 )
  {
    v18 = CSpatialProcessor::ResolveInputSinkToINPUTDEST(v4, a3, (struct tagINPUTDEST *)v25);
    v10 = 1;
    if ( v18 )
    {
      if ( (v25[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 178LL);
      v20 = 0LL;
      if ( qword_1C02D7650 && (unsigned int)qword_1C02D7650(*(_QWORD *)&v25[5]) )
      {
        if ( HIDWORD(v25[5]) != 2 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 189LL);
        v21 = HMValidateHandleNoSecure(*(_QWORD *)a2, 1);
        v20 = v21;
        if ( v21 && *(char *)(*(_QWORD *)(v21 + 40) + 19LL) >= 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v19) = 0;
          }
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              4,
              5,
              16,
              (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
              v25[5]);
          }
        }
        else
        {
          memset(&v24[1], 0, 0x70uLL);
          v25[0] = v24[1];
          v25[2] = v24[3];
          v25[1] = v24[2];
          v25[4] = v24[5];
          v25[3] = v24[4];
          v25[6] = v24[7];
          v25[5] = v24[6];
          LOBYTE(v19) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              3,
              5,
              15,
              (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
              v20);
          }
        }
      }
      if ( !LODWORD(v25[0]) )
      {
LABEL_78:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v19) = 0;
        }
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
            (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
            (char)v4);
        }
        v7 = a1;
LABEL_43:
        if ( !LODWORD(v25[0]) )
          goto LABEL_19;
        goto LABEL_13;
      }
      if ( (v25[0] & 4) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v19) = 0;
      }
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
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          (char)v4,
          v25[5]);
      }
      ApiSetEditionUpdateInputTransformFromHitTest((__int64)v25, v20, (__int64)v4, -(v25[1] & 1), a2 + 16, (__int64)v24);
      v7 = a1;
    }
    if ( LODWORD(v25[0]) )
    {
LABEL_13:
      v13 = *(_QWORD *)(a2 + 88);
      v14 = *(_DWORD *)(a2 + 96);
      v15 = *(_DWORD *)(a2 + 100);
      *(_QWORD *)&v25[6] = v13;
      DWORD2(v25[6]) = v14;
      DWORD1(v25[0]) = v15;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v10 = 0;
      }
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = v13;
        v16 = &WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids;
        LOBYTE(v16) = v10;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qdd(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v16,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          19,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          v22,
          v14,
          v15);
      }
      goto LABEL_19;
    }
    goto LABEL_78;
  }
  if ( !*(_QWORD *)a2 )
  {
    v10 = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
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
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        5,
        14,
        (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids);
    }
    goto LABEL_43;
  }
  v10 = 1;
  v11 = HMValidateHandleNoSecure(*(_QWORD *)a2, 1);
  if ( v11 )
  {
    LODWORD(v25[0]) |= 4u;
    DWORD2(v25[5]) |= 1u;
    HIDWORD(v25[5]) = 2;
    *(_QWORD *)&v25[5] = v11;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v12) = 0;
    }
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
        (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
        *(_QWORD *)a2);
    }
  }
  if ( LODWORD(v25[0]) )
    goto LABEL_13;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v9,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      5,
      13,
      (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
      *(_QWORD *)a2);
    goto LABEL_43;
  }
LABEL_19:
  CInputDest::CInputDest(v7, (const struct tagINPUTDEST *)v25);
  return v7;
}
