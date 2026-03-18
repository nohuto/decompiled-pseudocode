/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C01C4010
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01C4158 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  _QWORD *v10; // rcx
  __int64 v11; // r8
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _QWORD *v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  PERESOURCE *v22[8]; // [rsp+20h] [rbp-A1h] BYREF
  _OWORD v23[7]; // [rsp+60h] [rbp-61h] BYREF
  char v24; // [rsp+D0h] [rbp+Fh]
  int v25; // [rsp+D1h] [rbp+10h]
  __int16 v26; // [rsp+D5h] [rbp+14h]
  char v27; // [rsp+D7h] [rbp+16h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v22,
    (struct CInpLockGuard *)(a1 + 32),
    0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById || (v18 = (_QWORD *)((char *)NodeById + 240), v19 = (_QWORD *)*v18, (_QWORD *)*v18 == v18) )
  {
LABEL_2:
    v25 = 0;
    v26 = 0;
    v27 = 0;
    memset(v23, 0, sizeof(v23));
    v12 = v23[1];
    *a2 = v23[0];
    v24 = 0;
    v13 = v23[2];
    a2[1] = v12;
    v14 = v23[3];
    a2[2] = v13;
    v15 = v23[4];
    a2[3] = v14;
    v16 = v23[5];
    a2[4] = v15;
    v17 = v23[6];
    a2[5] = v16;
    a2[6] = v17;
    CInputDest::SetEmpty((CInputDest *)v23);
  }
  else
  {
    while ( 1 )
    {
      v20 = v19;
      if ( *((_DWORD *)v19 + 6) == a4 )
        break;
      v19 = (_QWORD *)*v19;
      v10 = v19;
      if ( v19 == v18 )
        goto LABEL_2;
    }
    if ( *((_WORD *)v19 + 10) != a3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v19, v11);
    if ( *((_DWORD *)v19 + 6) != a4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v20, v11);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v19, a5);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22);
  return a2;
}
