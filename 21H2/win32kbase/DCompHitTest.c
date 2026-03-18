/*
 * XREFs of DCompHitTest @ 0x1C0034BE0
 * Callers:
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C00356F8 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ?TouchHitTest@CTouchProcessor@@CA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x1C01D7DEC (-TouchHitTest@CTouchProcessor@@CA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@W4DIT_HITTESTATTRIBUTES@.c)
 * Callees:
 *     ?SpeedHitTest@CSpatialProcessor@@SA?AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x1C0034E2C (-SpeedHitTest@CSpatialProcessor@@SA-AVCInputDest@@PEAU_InputHitTestRequest@@PEAU_InputHitTestRes.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 */

_OWORD *__fastcall DCompHitTest(_OWORD *a1)
{
  _OWORD *v2; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _BYTE v10[128]; // [rsp+20h] [rbp-98h] BYREF

  v2 = (_OWORD *)CSpatialProcessor::SpeedHitTest(v10);
  v3 = v2[1];
  *a1 = *v2;
  v4 = v2[2];
  a1[1] = v3;
  v5 = v2[3];
  a1[2] = v4;
  v6 = v2[4];
  a1[3] = v5;
  v7 = v2[5];
  a1[4] = v6;
  v8 = v2[6];
  a1[5] = v7;
  a1[6] = v8;
  CInputDest::SetEmpty((CInputDest *)v10);
  return a1;
}
