/*
 * XREFs of ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C0206804
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C02083AC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     CanHitTestInDwm @ 0x1C007CAF0 (CanHitTestInDwm.c)
 *     DCompHitTest @ 0x1C007DF20 (DCompHitTest.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1C007E8EC (ApiSetEditionPostDwmSpeedHitTest.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ApiSetEditionComputeInputSpaceId @ 0x1C023CCE8 (ApiSetEditionComputeInputSpaceId.c)
 *     ApiSetEditionNeedsTouchTargeting @ 0x1C0240AF4 (ApiSetEditionNeedsTouchTargeting.c)
 *     ApiSetEditionNonDwmTouchHitTest @ 0x1C0240C70 (ApiSetEditionNonDwmTouchHitTest.c)
 */

CInputDest *__fastcall CTouchProcessor::TouchHitTest(
        CInputDest *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  _BYTE *v11; // rdi
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  _OWORD *v14; // rax
  _DWORD v16[5]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+44h] [rbp-BCh]
  int v18; // [rsp+4Ch] [rbp-B4h]
  __int64 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  int v21; // [rsp+5Ch] [rbp-A4h]
  __int64 v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  unsigned int v24; // [rsp+6Ch] [rbp-94h]
  __int64 v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+78h] [rbp-88h]
  int v27; // [rsp+7Ch] [rbp-84h]
  __int64 v28; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v29[7]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v30[7]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v31[192]; // [rsp+170h] [rbp+70h] BYREF

  memset(v30, 0, sizeof(v30));
  v23 = a3;
  v16[2] = 0;
  v18 = 0;
  v21 = 0;
  v27 = 0;
  v16[0] = *(_DWORD *)(a2 + 8);
  v16[1] = *(_DWORD *)(a2 + 20);
  v16[3] = *(_DWORD *)(a2 + 12);
  v17 = *(_QWORD *)(a2 + 40);
  v19 = *(_QWORD *)(a2 + 24);
  v22 = *(_QWORD *)(a2 + 88);
  v20 = *(_DWORD *)(a2 + 72);
  v16[4] = *(_DWORD *)(a2 + 180);
  v26 = a5;
  v24 = a4;
  v25 = ApiSetEditionComputeInputSpaceId(a4);
  memset(v31, 0, sizeof(v31));
  v11 = 0LL;
  if ( (unsigned int)ApiSetEditionNeedsTouchTargeting(v16, a2 + 8, v31) )
  {
    v23 |= 0x10u;
    v11 = v31;
  }
  if ( CanHitTestInDwm() )
  {
    v12 = DCompHitTest(v29);
    v30[0] = *v12;
    v30[1] = v12[1];
    v30[2] = v12[2];
    v30[3] = v12[3];
    v30[4] = v12[4];
    v30[5] = v12[5];
    v13 = v12[6];
    v28 = *(_QWORD *)(a2 + 40);
    v30[6] = v13;
    ApiSetEditionPostDwmSpeedHitTest((__int64)v30, (__int64)&v28, 0LL, (__int64)v11, a7, a6);
  }
  else
  {
    v14 = (_OWORD *)ApiSetEditionNonDwmTouchHitTest(v29, v16, v11, a6);
    v30[0] = *v14;
    v30[1] = v14[1];
    v30[2] = v14[2];
    v30[3] = v14[3];
    v30[4] = v14[4];
    v30[5] = v14[5];
    v30[6] = v14[6];
  }
  CInputDest::CInputDest(a1, (const struct tagINPUTDEST *)v30);
  return a1;
}
