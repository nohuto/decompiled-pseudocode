/*
 * XREFs of ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C007C734
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x1C007C470 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0079D90 (INPUTDEST_FROM_PWND.c)
 *     MouseButtonToPointerFlags @ 0x1C007C950 (MouseButtonToPointerFlags.c)
 *     CanHitTestInDwm @ 0x1C007CAF0 (CanHitTestInDwm.c)
 *     DCompHitTest @ 0x1C007DF20 (DCompHitTest.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C007E54C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1C007E8EC (ApiSetEditionPostDwmSpeedHitTest.c)
 *     ApiSetEditionNonDwmSpeedHitTest @ 0x1C00BEB04 (ApiSetEditionNonDwmSpeedHitTest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@KA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x1C0226204 (-GetExecutionEnvironment@CBaseProcessor@@KA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     ApiSetEditionMouseCaptureHitTest @ 0x1C0240984 (ApiSetEditionMouseCaptureHitTest.c)
 */

__int64 __fastcall CMouseProcessor::MouseSpeedHitTest(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _DWORD *a12,
        __int64 a13)
{
  unsigned __int16 v13; // bx
  int v17; // esi
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  __int128 v22; // xmm4
  __int128 v23; // xmm5
  __int128 v24; // xmm6
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int128 v31; // xmm5
  __int128 v32; // xmm6
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _OWORD *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int128 v47; // xmm4
  __int128 v48; // xmm5
  __int128 v49; // xmm6
  _QWORD v50[10]; // [rsp+38h] [rbp-C9h] BYREF
  _DWORD v51[32]; // [rsp+88h] [rbp-79h] BYREF

  v13 = a4;
  v17 = 0;
  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 15904) )
  {
    if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment() != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6026LL);
    v37 = SGDGetUserSessionState(v34, v33, v35, v36);
    ApiSetEditionMouseCaptureHitTest(*(_QWORD *)(v37 + 15904), a2, a3);
    *a12 = 1;
    v42 = SGDGetUserSessionState(v39, v38, v40, v41);
    INPUTDEST_FROM_PWND((_DWORD *)a1, *(_QWORD *)(v42 + 15904));
  }
  else
  {
    memset((void *)a1, 0, 0x70uLL);
    memset(v50, 0, sizeof(v50));
    *(_QWORD *)((char *)&v50[2] + 4) = *a2;
    v50[6] = a6;
    LODWORD(v50[5]) = a7;
    v50[4] = a8;
    LODWORD(v50[0]) = 4;
    HIDWORD(v50[1]) = 0;
    HIDWORD(v50[0]) = MouseButtonToPointerFlags(v13);
    LOWORD(v50[1]) = a5;
    if ( (unsigned __int8)CanHitTestInDwm() )
    {
      v50[7] = __PAIR64__(a10, a9);
      v50[8] = InputConfig::Mouse::GetInputSpaceId();
      LODWORD(v50[9]) = a11;
      v18 = (_OWORD *)DCompHitTest(v51, v50, a13);
      v19 = v18[1];
      v20 = v18[2];
      v21 = v18[3];
      v22 = v18[4];
      v23 = v18[5];
      v24 = v18[6];
      *(_OWORD *)a1 = *v18;
      *(_OWORD *)(a1 + 16) = v19;
      *(_OWORD *)(a1 + 32) = v20;
      *(_OWORD *)(a1 + 48) = v21;
      *(_OWORD *)(a1 + 64) = v22;
      *(_OWORD *)(a1 + 80) = v23;
      *(_OWORD *)(a1 + 96) = v24;
      LOBYTE(v17) = *(_DWORD *)a1 != 0;
      *a12 = v17;
      ApiSetEditionPostDwmSpeedHitTest(a1, (_DWORD)a2, a3, 0, a13, (__int64)a12);
    }
    else if ( a10 )
    {
      v43 = INPUTDEST_FROM_PWND(v51, *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 1) + 24LL));
      v44 = v43[1];
      v45 = v43[2];
      v46 = v43[3];
      v47 = v43[4];
      v48 = v43[5];
      v49 = v43[6];
      *(_OWORD *)a1 = *v43;
      *(_OWORD *)(a1 + 16) = v44;
      *(_OWORD *)(a1 + 32) = v45;
      *(_OWORD *)(a1 + 48) = v46;
      *(_OWORD *)(a1 + 64) = v47;
      *(_OWORD *)(a1 + 80) = v48;
      *(_OWORD *)(a1 + 96) = v49;
      *a12 = 0;
    }
    else
    {
      v26 = (_OWORD *)ApiSetEditionNonDwmSpeedHitTest(v51, a2, a3, a12);
      v27 = v26[1];
      v28 = v26[2];
      v29 = v26[3];
      v30 = v26[4];
      v31 = v26[5];
      v32 = v26[6];
      *(_OWORD *)a1 = *v26;
      *(_OWORD *)(a1 + 16) = v27;
      *(_OWORD *)(a1 + 32) = v28;
      *(_OWORD *)(a1 + 48) = v29;
      *(_OWORD *)(a1 + 64) = v30;
      *(_OWORD *)(a1 + 80) = v31;
      *(_OWORD *)(a1 + 96) = v32;
    }
  }
  return a1;
}
