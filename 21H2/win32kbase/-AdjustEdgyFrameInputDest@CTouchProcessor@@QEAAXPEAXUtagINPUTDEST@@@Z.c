/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C01BDF70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0038C0C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C003A380 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C00447F0 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C01C54CC (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C01C9240 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01D6E88 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C01D7110 (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        struct _LIST_ENTRY *a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  CInputDest *v9; // rax
  struct CPointerInfoNode *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rbp
  unsigned __int64 Queue; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  CInpLockGuard *v16[6]; // [rsp+50h] [rbp-158h] BYREF
  _BYTE v17[128]; // [rsp+80h] [rbp-128h] BYREF
  __int64 *v18[16]; // [rsp+100h] [rbp-A8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v16, (struct CInpLockGuard *)&a1[2], 0LL);
  CInputDest::CInputDest((CInputDest *)v18, a3);
  if ( !LODWORD(v18[0]) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = CInputDest::CInputDest((CInputDest *)v17, v18);
  CTouchProcessor::SetPointerInputCapture(a1, *(unsigned __int16 *)(*((_QWORD *)NextFrame + 30) + 172LL), v9);
  do
  {
    v10 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 30);
    if ( (unsigned int)CPointerInfoNode::IsValid(v10) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v18,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v12 = *((_QWORD *)NextFrame + 31);
      if ( *(_QWORD *)(v12 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((__int64)v18, 2, v11);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v12,
          v10,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, a1 + 3);
    }
  }
  while ( NextFrame );
  CInputDest::SetEmpty((CInputDest *)v18);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v16, v14, v15);
}
