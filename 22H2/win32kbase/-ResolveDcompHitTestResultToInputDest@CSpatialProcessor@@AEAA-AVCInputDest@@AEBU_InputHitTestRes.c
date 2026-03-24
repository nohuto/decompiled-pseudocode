/*
 * XREFs of ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0045614
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0044EF4 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 * Callees:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0002358 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEBUCONTAINER_ID@@PEAUtagINPUTDEST@@@.c)
 *     ApiSetEditionUpdateInputTransformFromHitTest @ 0x1C0002C4C (ApiSetEditionUpdateInputTransformFromHitTest.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

CInputDest *CSpatialProcessor::ResolveDcompHitTestResultToInputDest(
        __int64 a1,
        CInputDest *a2,
        __int64 a3,
        int a4,
        ...)
{
  void *v4; // rsi
  __int64 v8; // rdx
  CSpatialProcessor *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rax
  _OWORD v18[7]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v19[7]; // [rsp+B0h] [rbp-50h] BYREF
  va_list va; // [rsp+180h] [rbp+80h] BYREF

  va_start(va, a4);
  v4 = *(void **)(a3 + 16);
  if ( a4 == 6 || !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 156LL);
  memset(v19, 0, sizeof(v19));
  if ( !v4 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
    {
      LOBYTE(v8) = 1;
      v11 = HMValidateHandleNoSecure(v10, v8);
      v12 = v19[0];
      if ( v11 )
      {
        HIDWORD(v19[5]) = 2;
        v12 = LODWORD(v19[0]) | 4;
        DWORD2(v19[5]) |= 1u;
        LODWORD(v19[0]) |= 4u;
        *(_QWORD *)&v19[5] = v11;
        HIDWORD(v19[6]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 16) + 424LL) + 1088LL);
      }
      if ( v12 )
      {
LABEL_8:
        *(_QWORD *)&v19[6] = *(_QWORD *)(a3 + 96);
        DWORD2(v19[6]) = *(_DWORD *)(a3 + 104);
        DWORD1(v19[0]) = *(_DWORD *)(a3 + 108);
        goto LABEL_9;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_q(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v12,
        5,
        11,
        (__int64)&WPP_316427a6418039b01983fa5fffe52075_Traceguids,
        *(_QWORD *)(a3 + 8));
    }
LABEL_20:
    if ( !LODWORD(v19[0]) )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !CSpatialProcessor::ResolveInputSinkToINPUTDEST(
          v9,
          v4,
          a4,
          (const struct CONTAINER_ID *)(a3 + 112),
          (struct tagINPUTDEST *)v19) )
    goto LABEL_20;
  if ( (v19[0] & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 201LL);
  v15 = 0LL;
  if ( qword_1C02572B0 )
    v16 = qword_1C02572B0(*(_QWORD *)&v19[5]);
  else
    v16 = 0;
  if ( v16 )
  {
    if ( HIDWORD(v19[5]) != 2 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 212LL);
    LOBYTE(v14) = 1;
    v17 = HMValidateHandleNoSecure(*(_QWORD *)(a3 + 8), v14);
    v15 = v17;
    if ( !v17 || *(char *)(*(_QWORD *)(v17 + 40) + 19LL) < 0 )
    {
      memset(v18, 0, sizeof(v18));
      v19[0] = v18[0];
      v19[2] = v18[2];
      v19[1] = v18[1];
      v19[4] = v18[4];
      v19[3] = v18[3];
      v19[6] = v18[6];
      v19[5] = v18[5];
    }
  }
  if ( LODWORD(v19[0]) )
  {
    if ( (v19[0] & 4) == 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 226LL);
    ApiSetEditionUpdateInputTransformFromHitTest((__int64)v19, v15, (__int64)v4, -(v19[1] & 1), a3 + 24, (__int64)va);
    goto LABEL_20;
  }
LABEL_9:
  CInputDest::CInputDest(a2, (const struct tagINPUTDEST *)v19);
  return a2;
}
