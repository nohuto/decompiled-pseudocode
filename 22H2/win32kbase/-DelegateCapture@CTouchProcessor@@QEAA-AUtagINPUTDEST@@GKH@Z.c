/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C018CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0043D04 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C018CB84 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E2A4 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        __int64 a1,
        _OWORD *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5)
{
  struct CInputPointerNode *NodeById; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  char *v16; // rcx
  char *v17; // rax
  char *v18; // rdi
  _OWORD v20[7]; // [rsp+28h] [rbp-91h] BYREF
  char v21; // [rsp+98h] [rbp-21h]
  int v22; // [rsp+99h] [rbp-20h]
  __int16 v23; // [rsp+9Dh] [rbp-1Ch]
  char v24; // [rsp+9Fh] [rbp-1Ah]
  CInpLockGuard *v25[8]; // [rsp+A8h] [rbp-11h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v25,
    (struct CInpLockGuard *)(a1 + 40),
    0LL);
  NodeById = CTouchProcessor::FindNodeById((CTouchProcessor *)a1, a3, 0, 0);
  if ( !NodeById )
    goto LABEL_2;
  v16 = (char *)NodeById + 224;
  v17 = (char *)*((_QWORD *)NodeById + 28);
  if ( v17 == v16 )
    goto LABEL_2;
  do
  {
    v18 = v17;
    if ( *((_DWORD *)v17 + 6) == a4 )
      break;
    v17 = *(char **)v17;
  }
  while ( v17 != v16 );
  if ( v17 == v16 )
  {
LABEL_2:
    v22 = 0;
    v23 = 0;
    v24 = 0;
    memset(v20, 0, sizeof(v20));
    v10 = v20[1];
    *a2 = v20[0];
    v21 = 0;
    v11 = v20[2];
    a2[1] = v10;
    v12 = v20[3];
    a2[2] = v11;
    v13 = v20[4];
    a2[3] = v12;
    v14 = v20[5];
    a2[4] = v13;
    v15 = v20[6];
    a2[5] = v14;
    a2[6] = v15;
    CInputDest::SetEmpty((CInputDest *)v20);
  }
  else
  {
    if ( *((_WORD *)v18 + 10) != a3 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5592);
    if ( *((_DWORD *)v18 + 6) != a4 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5593);
    CTouchProcessor::DelegateCaptureInt(a1, a2, v18, a5, v20[0]);
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
  return a2;
}
