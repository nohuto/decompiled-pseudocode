/*
 * XREFs of ?GetHitTestState@CPTPProcessor@@QEAAPEBUCHitTestState@@PEBUCPointerInputFrame@@@Z @ 0x1C020DD78
 * Callers:
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1C02083AC (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0079840 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?Set@CHitTestState@@QEAAXAEBVCInputDest@@IHH@Z @ 0x1C020F130 (-Set@CHitTestState@@QEAAXAEBVCInputDest@@IHH@Z.c)
 *     ApiSetGetPTPShellTarget @ 0x1C0244748 (ApiSetGetPTPShellTarget.c)
 *     IsGetPTPShellTargetSupported @ 0x1C0271F1C (IsGetPTPShellTargetSupported.c)
 */

const struct CHitTestState *__fastcall CPTPProcessor::GetHitTestState(
        CPTPProcessor *this,
        const struct CPointerInputFrame *a2)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  _OWORD v11[7]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v12[112]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v13[32]; // [rsp+110h] [rbp+10h] BYREF

  if ( (*((_DWORD *)this + 129) & 4) != 0 )
    return (CPTPProcessor *)((char *)this + 392);
  if ( (*((_DWORD *)a2 + 57) & 0x100) != 0 && (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v12);
    v5 = PTPShellTarget[1];
    v11[0] = *PTPShellTarget;
    v6 = PTPShellTarget[2];
    v11[1] = v5;
    v7 = PTPShellTarget[3];
    v11[2] = v6;
    v8 = PTPShellTarget[4];
    v11[3] = v7;
    v9 = PTPShellTarget[5];
    v11[4] = v8;
    v10 = PTPShellTarget[6];
    v11[5] = v9;
    v11[6] = v10;
    CInputDest::CInputDest((CInputDest *)v13, (const struct tagINPUTDEST *)v11);
    if ( v13[0] )
    {
      CHitTestState::Set((CPTPProcessor *)((char *)this + 392), (const struct CInputDest *)v13, 0, 0, 1);
      CInputDest::SetEmpty((CInputDest *)v13);
      return (CPTPProcessor *)((char *)this + 392);
    }
    CInputDest::SetEmpty((CInputDest *)v13);
  }
  return 0LL;
}
