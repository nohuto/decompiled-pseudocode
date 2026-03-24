/*
 * XREFs of ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAUtagCHitTestState@@PEAGPEAIK@Z @ 0x1C01A0458
 * Callers:
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUtagCHitTestState@@PEAVCInputDest@@PEAKPEAGPEAIKG@Z @ 0x1C019FDA8 (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEAUtagPOINTEREVENTINT@@PEAUt.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0043EC0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0044A10 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     SendMessageTo @ 0x1C004CEC0 (SendMessageTo.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C009D0F8 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C009F1DC (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00A98E8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z @ 0x1C0191A80 (-GetInputProcessContext@CTouchProcessor@@AEAAPEAUtagPROCESSINFO@@PEAX@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C019EC90 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ApiSetEditionIsPointerInputRedirected @ 0x1C01CC2A4 (ApiSetEditionIsPointerInputRedirected.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01CCCEC (ApiSetEditionPointerSpeedHitTest.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01CEF84 (ApiSetGetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C01FC430 (IsGetPTPShellTargetSupported.c)
 */

int *__fastcall CTouchProcessor::UpdateInputCaptureAndGetTarget(
        struct _KTHREAD **a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        _WORD *a7,
        _DWORD *a8,
        unsigned int a9)
{
  int v13; // edx
  int v14; // ecx
  int v15; // r12d
  int IsPointerInputRedirected; // r15d
  int v17; // r15d
  int v18; // eax
  int v19; // r8d
  _OWORD *PTPShellTarget; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // esi
  _OWORD *v28; // rax
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  int *v35; // rsi
  __int64 v36; // r9
  __int64 v37; // rax
  int v38; // edx
  CSpatialProcessor *v39; // r9
  int v40; // edx
  __int16 v41; // r8
  int v42; // ecx
  int v43; // ecx
  _WORD *v44; // r9
  int v45; // edx
  __int16 v46; // cx
  bool v48; // [rsp+30h] [rbp-D0h]
  struct tagPROCESSINFO *InputProcessContext; // [rsp+38h] [rbp-C8h]
  int v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v51; // [rsp+44h] [rbp-BCh]
  int v52; // [rsp+48h] [rbp-B8h]
  int v53; // [rsp+4Ch] [rbp-B4h]
  _DWORD *v54; // [rsp+50h] [rbp-B0h]
  CSpatialProcessor *v55; // [rsp+58h] [rbp-A8h]
  _WORD *v56; // [rsp+60h] [rbp-A0h]
  _QWORD v57[2]; // [rsp+68h] [rbp-98h] BYREF
  int v58; // [rsp+78h] [rbp-88h]
  __int64 v59; // [rsp+7Ch] [rbp-84h]
  int v60; // [rsp+84h] [rbp-7Ch]
  _OWORD v61[7]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v62[7]; // [rsp+100h] [rbp+0h] BYREF
  PERESOURCE *v63[6]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v64[112]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v65; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v66[112]; // [rsp+280h] [rbp+180h] BYREF
  _QWORD v67[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _QWORD v68[16]; // [rsp+370h] [rbp+270h] BYREF
  _QWORD v69[16]; // [rsp+3F0h] [rbp+2F0h] BYREF
  int v70; // [rsp+4F0h] [rbp+3F0h]

  v56 = a7;
  v54 = a8;
  v55 = (CSpatialProcessor *)a1;
  v51 = a9;
  memset(a2, 0, 0x70uLL);
  v13 = 0;
  *((_BYTE *)a2 + 112) = 0;
  v53 = 0;
  v14 = a5 & 0x10000;
  v70 = a5 & 0x40000;
  v15 = 0;
  IsPointerInputRedirected = 0;
  v52 = v14;
  if ( a1[6] != KeGetCurrentThread() )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1840);
    v13 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      7,
      67,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  *v54 = 0;
  if ( CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 1152)
    || CInputDest::TestWindowFlag((CInputDest *)(a4 + 64), 896) )
  {
    CInputDest::SetEmpty((CInputDest *)(a4 + 64));
  }
  CInputDest::operator=((__int64)a2, a4 + 64);
  if ( *a2 )
  {
    v17 = *(_DWORD *)(a4 + 280);
    v53 = 1;
    v15 = -__CFSHR__(v17, 5);
    IsPointerInputRedirected = -__CFSHR__(v17, 6);
  }
  else
  {
    InputProcessContext = CTouchProcessor::GetInputProcessContext(0LL, *(_QWORD *)(a3 + 24));
    if ( InputProcessContext )
    {
      memset(v66, 0, sizeof(v66));
      IsPointerInputRedirected = ApiSetEditionIsPointerInputRedirected(
                                   InputProcessContext,
                                   *(unsigned int *)(a4 + 56),
                                   v66);
      CInputDest::CInputDest((CInputDest *)v67, (const struct tagINPUTDEST *)v66);
      CInputDest::operator=((__int64)a2, v67);
      CInputDest::SetEmpty((CInputDest *)v67);
      v18 = *a2;
      v15 = IsPointerInputRedirected;
      if ( IsPointerInputRedirected )
      {
        if ( v18 )
          goto LABEL_18;
        v19 = 1890;
      }
      else
      {
        if ( !v18 )
          goto LABEL_18;
        v19 = 1889;
      }
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, v19);
    }
  }
LABEL_18:
  if ( *(_DWORD *)(a4 + 56) != 5 && a6 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1898);
  if ( *a2 )
    goto LABEL_38;
  if ( *(_DWORD *)(a3 + 180) && (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v64);
    v21 = PTPShellTarget[1];
    v61[0] = *PTPShellTarget;
    v22 = PTPShellTarget[2];
    v61[1] = v21;
    v23 = PTPShellTarget[3];
    v61[2] = v22;
    v24 = PTPShellTarget[4];
    v61[3] = v23;
    v25 = PTPShellTarget[5];
    v61[4] = v24;
    v26 = PTPShellTarget[6];
    v61[5] = v25;
    v61[6] = v26;
    CInputDest::CInputDest((CInputDest *)v68, (const struct tagINPUTDEST *)v61);
    CInputDest::operator=((__int64)a2, v68);
    CInputDest::SetEmpty((CInputDest *)v68);
  }
  if ( *a2 )
    goto LABEL_38;
  if ( a6 )
  {
    CInputDest::operator=((__int64)a2, a6);
    if ( (*(_DWORD *)(a6 + 124) & 1) != 0 )
    {
      v15 = 1;
      *v54 = *(_DWORD *)(a6 + 120);
      *(_DWORD *)(a4 + 280) |= 0x40u;
    }
  }
  if ( *a2 )
  {
LABEL_38:
    v35 = (int *)(a3 + 8);
    v38 = *(_DWORD *)(a3 + 8);
    if ( (unsigned int)(v38 - 2) <= 1 )
      CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        v55,
        v38,
        *(struct tagPOINT *)(a3 + 40),
        *(_QWORD *)(a3 + 88),
        *(unsigned __int16 *)(a4 + 32),
        v51);
  }
  else
  {
    v27 = 0;
    if ( *(_DWORD *)(a4 + 56) == 3 && (*(_DWORD *)(a3 + 20) & 4) != 0 )
    {
      v27 = (*(_DWORD *)(a3 + 104) & 1) << 6;
      if ( (*(_DWORD *)(a3 + 104) & 4) != 0 )
        v27 |= 0x80u;
    }
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v63,
      (CSpatialProcessor *)((char *)v55 + 40),
      0LL);
    v50 = 0;
    v28 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v65, a3, v27, v51, (__int64)&v50, (__int64)v54);
    v29 = v28[1];
    v62[0] = *v28;
    v30 = v28[2];
    v62[1] = v29;
    v31 = v28[3];
    v62[2] = v30;
    v32 = v28[4];
    v62[3] = v31;
    v33 = v28[5];
    v62[4] = v32;
    v34 = v28[6];
    v62[5] = v33;
    v62[6] = v34;
    CInputDest::CInputDest((CInputDest *)v69, (const struct tagINPUTDEST *)v62);
    CInputDest::operator=((__int64)a2, v69);
    CInputDest::SetEmpty((CInputDest *)v69);
    v35 = (int *)(a3 + 8);
    LOBYTE(v36) = v50 != 0;
    InputTraceLogging::Pointer::SpeedHitTest(
      (const union POINTERINFOUNION *)(a3 + 8),
      (const struct CInputDest *)a2,
      (unsigned int)*v54,
      v36);
    v48 = (unsigned int)(a2[1] - 2) <= 1;
    if ( v52 )
    {
      v37 = *((_QWORD *)a2 + 12);
      v60 = 0;
      v57[0] = v37;
      v57[1] = *(_QWORD *)(a3 + 24);
      v58 = *v35;
      v59 = *(_QWORD *)(a3 + 40);
      SendMessageTo(6LL, (__int64)v57);
    }
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v63);
    if ( v48 )
    {
      *(_DWORD *)(a4 + 280) |= 0x40u;
      v15 = 1;
    }
  }
  if ( v52 && *a2 )
  {
    CInputDest::operator=(a4 + 64, (__int64)a2);
    v39 = v55;
    v40 = *(unsigned __int16 *)(a4 + 32);
    v41 = 32;
    v42 = *(_DWORD *)(a4 + 280) ^ (*(_DWORD *)(a4 + 280) ^ (16 * v15)) & 0x10;
    *(_DWORD *)(a4 + 280) = v42 ^ (v42 ^ (32 * IsPointerInputRedirected)) & 0x20;
    v43 = *v35;
    *((_QWORD *)v39 + 3) = *(_QWORD *)(a3 + 88);
    *((_DWORD *)v39 + 8) = v43;
    *((_DWORD *)v39 + 9) = v40;
  }
  else
  {
    if ( v70 && *(_DWORD *)(a4 + 64) )
    {
      CInputDest::SetEmpty((CInputDest *)(a4 + 64));
      *(_DWORD *)(a4 + 280) &= 0xFFFFFFCF;
    }
    v41 = 32;
  }
  v44 = v56;
  HIWORD(v45) = HIWORD(v53);
  LOWORD(v45) = *v56 | (16 * v53);
  *v56 = v45;
  if ( !v15 && (*(_DWORD *)(a4 + 280) & 0x40) == 0 )
    v41 = 0;
  v46 = v45 | v41 | (IsPointerInputRedirected != 0 ? 0x40 : 0);
  *v44 = v46;
  *v44 = v46 | (2 * (*(_DWORD *)(a4 + 280) & 0x40));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v45) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v45,
      7,
      68,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  return a2;
}
