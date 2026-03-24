/*
 * XREFs of ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C01A767C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A62A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ApiSetGetPTPShellTarget @ 0x1C01CF054 (ApiSetGetPTPShellTarget.c)
 */

bool __fastcall CPTPProcessor::ShellEndpointExists(CPTPProcessor *this)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  bool v8; // bl
  _OWORD v10[7]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[112]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v12[32]; // [rsp+100h] [rbp+0h] BYREF

  PTPShellTarget = (_OWORD *)ApiSetGetPTPShellTarget(v11);
  v2 = PTPShellTarget[1];
  v10[0] = *PTPShellTarget;
  v3 = PTPShellTarget[2];
  v10[1] = v2;
  v4 = PTPShellTarget[3];
  v10[2] = v3;
  v5 = PTPShellTarget[4];
  v10[3] = v4;
  v6 = PTPShellTarget[5];
  v10[4] = v5;
  v7 = PTPShellTarget[6];
  v10[5] = v6;
  v10[6] = v7;
  CInputDest::CInputDest((CInputDest *)v12, (const struct tagINPUTDEST *)v10);
  v8 = v12[0] != 0;
  CInputDest::SetEmpty((CInputDest *)v12);
  return v8;
}
