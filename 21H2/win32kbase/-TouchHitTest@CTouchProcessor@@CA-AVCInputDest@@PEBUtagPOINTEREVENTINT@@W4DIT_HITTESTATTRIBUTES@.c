/*
 * XREFs of ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D7DEC
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C01D9608 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1C00345DC (ApiSetEditionPostDwmSpeedHitTest.c)
 *     DCompHitTest @ 0x1C0034BE0 (DCompHitTest.c)
 *     CanHitTestInDwm @ 0x1C00358C0 (CanHitTestInDwm.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ApiSetEditionComputeInputSpaceId @ 0x1C0206648 (ApiSetEditionComputeInputSpaceId.c)
 *     ApiSetEditionNeedsTouchTargeting @ 0x1C0209AAC (ApiSetEditionNeedsTouchTargeting.c)
 *     ApiSetEditionNonDwmTouchHitTest @ 0x1C0209C28 (ApiSetEditionNonDwmTouchHitTest.c)
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
  int v7; // eax
  _BYTE *v10; // rdi
  __int128 *v11; // rax
  __int128 v12; // xmm0
  __int128 *v13; // rax
  _DWORD v15[5]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+44h] [rbp-BCh]
  int v17; // [rsp+4Ch] [rbp-B4h]
  __int64 v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  int v20; // [rsp+5Ch] [rbp-A4h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h]
  unsigned int v23; // [rsp+6Ch] [rbp-94h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  __int64 v27; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v28[7]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v29; // [rsp+100h] [rbp+0h] BYREF
  __int128 v30; // [rsp+110h] [rbp+10h]
  __int128 v31; // [rsp+120h] [rbp+20h]
  __int128 v32; // [rsp+130h] [rbp+30h]
  __int128 v33; // [rsp+140h] [rbp+40h]
  __int128 v34; // [rsp+150h] [rbp+50h]
  __int128 v35; // [rsp+160h] [rbp+60h]
  _BYTE v36[192]; // [rsp+170h] [rbp+70h] BYREF

  v7 = *(_DWORD *)(a2 + 8);
  v15[2] = 0;
  v17 = 0;
  v20 = 0;
  v26 = 0;
  v15[0] = v7;
  v15[1] = *(_DWORD *)(a2 + 20);
  v15[3] = *(_DWORD *)(a2 + 12);
  v16 = *(_QWORD *)(a2 + 40);
  v18 = *(_QWORD *)(a2 + 24);
  v21 = *(_QWORD *)(a2 + 88);
  v19 = *(_DWORD *)(a2 + 72);
  v15[4] = *(_DWORD *)(a2 + 180);
  v25 = a5;
  v22 = a3;
  v23 = a4;
  v24 = ApiSetEditionComputeInputSpaceId(a4);
  memset(v36, 0, sizeof(v36));
  v10 = 0LL;
  if ( (unsigned int)ApiSetEditionNeedsTouchTargeting(v15, a2 + 8, v36) )
  {
    v22 |= 0x10u;
    v10 = v36;
  }
  if ( CanHitTestInDwm() )
  {
    v11 = DCompHitTest(v28);
    v29 = *v11;
    v30 = v11[1];
    v31 = v11[2];
    v32 = v11[3];
    v33 = v11[4];
    v34 = v11[5];
    v12 = v11[6];
    v27 = *(_QWORD *)(a2 + 40);
    v35 = v12;
    ApiSetEditionPostDwmSpeedHitTest((__int64)&v29, (__int64)&v27, 0LL, (__int64)v10, a7, a6);
  }
  else
  {
    v13 = (__int128 *)ApiSetEditionNonDwmTouchHitTest(v28, v15, v10, a6);
    v29 = *v13;
    v30 = v13[1];
    v31 = v13[2];
    v32 = v13[3];
    v33 = v13[4];
    v34 = v13[5];
    v35 = v13[6];
  }
  CInputDest::CInputDest(a1, (const struct tagINPUTDEST *)&v29);
  return a1;
}
