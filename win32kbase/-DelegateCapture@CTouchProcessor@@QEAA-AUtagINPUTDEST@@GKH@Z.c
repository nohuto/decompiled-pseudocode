/*
 * XREFs of ?DelegateCapture@CTouchProcessor@@QEAA?AUtagINPUTDEST@@GKH@Z @ 0x1C01EF840
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00F2348 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ?DelegateCaptureInt@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z @ 0x1C01EF9B0 (-DelegateCaptureInt@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerCaptureData@@H@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::DelegateCapture(
        struct _KTHREAD **a1,
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
  __int64 **v16; // rax
  __int64 *i; // rdi
  int v19; // [rsp+20h] [rbp-B1h]
  CInpLockGuard *v20[7]; // [rsp+28h] [rbp-A9h] BYREF
  _OWORD v21[7]; // [rsp+60h] [rbp-71h] BYREF
  char v22; // [rsp+D0h] [rbp-1h]
  int v23; // [rsp+D1h] [rbp+0h]
  __int16 v24; // [rsp+D5h] [rbp+4h]
  char v25; // [rsp+D7h] [rbp+6h]

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v20,
    (struct CInpLockGuard *)(a1 + 4),
    0LL);
  NodeById = CTouchProcessor::FindNodeById(a1, a3, 0, 0);
  if ( NodeById )
  {
    v16 = (__int64 **)((char *)NodeById + 240);
    for ( i = *v16; i != (__int64 *)v16; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 6) == a4 )
      {
        if ( *((_WORD *)i + 10) != a3 )
        {
          v19 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6235);
        }
        if ( *((_DWORD *)i + 6) != a4 )
        {
          v19 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6236);
        }
        CTouchProcessor::DelegateCaptureInt(a1, a2, i, a5, v19);
        goto LABEL_12;
      }
    }
  }
  v23 = 0;
  v24 = 0;
  v25 = 0;
  memset(v21, 0, sizeof(v21));
  v10 = v21[1];
  *a2 = v21[0];
  v22 = 0;
  v11 = v21[2];
  a2[1] = v10;
  v12 = v21[3];
  a2[2] = v11;
  v13 = v21[4];
  a2[3] = v12;
  v14 = v21[5];
  a2[4] = v13;
  v15 = v21[6];
  a2[5] = v14;
  a2[6] = v15;
  CInputDest::SetEmpty((CInputDest *)v21);
LABEL_12:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v20);
  return a2;
}
