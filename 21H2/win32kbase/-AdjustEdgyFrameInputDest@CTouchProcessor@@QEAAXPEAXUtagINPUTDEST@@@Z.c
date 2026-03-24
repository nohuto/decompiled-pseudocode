/*
 * XREFs of ?AdjustEdgyFrameInputDest@CTouchProcessor@@QEAAXPEAXUtagINPUTDEST@@@Z @ 0x1C0188090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00444AC (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0072210 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C018E174 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z @ 0x1C0191CB8 (-GetNextFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@PEAU_LIST_ENTRY@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C019E288 (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 *     ?SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z @ 0x1C019E54C (-SetPointerInputCapture@CTouchProcessor@@AEAAHGVCInputDest@@H@Z.c)
 */

void __fastcall CTouchProcessor::AdjustEdgyFrameInputDest(
        __int64 a1,
        const struct CPointerInputFrame *NextFrame,
        const struct tagINPUTDEST *a3)
{
  CInputDest *v6; // rax
  struct CPointerInfoNode *v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 Queue; // rax
  CInpLockGuard *v10[6]; // [rsp+58h] [rbp-160h] BYREF
  _BYTE v11[120]; // [rsp+88h] [rbp-130h] BYREF
  __int64 *v12[16]; // [rsp+100h] [rbp-B8h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v10, (struct CInpLockGuard *)(a1 + 40), 0LL);
  CInputDest::CInputDest((CInputDest *)v12, a3);
  if ( !LODWORD(v12[0]) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 12395);
  v6 = CInputDest::CInputDest((CInputDest *)v11, v12);
  CTouchProcessor::SetPointerInputCapture(a1, *(unsigned __int16 *)(*((_QWORD *)NextFrame + 17) + 172LL), v6);
  do
  {
    v7 = (struct CPointerInfoNode *)*((_QWORD *)NextFrame + 17);
    if ( (unsigned int)CPointerInfoNode::IsValid(v7) )
    {
      CTouchProcessor::SetPointerInfoNodeTarget(
        (CTouchProcessor *)a1,
        NextFrame,
        0,
        (const struct CInputDest *)v12,
        1,
        0LL,
        0,
        1,
        0,
        0);
      v8 = *((_QWORD *)NextFrame + 18);
      if ( *(_QWORD *)(v8 + 8) == -1LL )
      {
        Queue = CInputDest::GetQueue((CInputDest *)v12, 2);
        CTouchProcessor::EndQFrameNodeDeferment(
          (CTouchProcessor *)a1,
          (struct CPointerQFrame *)v8,
          v7,
          NextFrame,
          Queue);
      }
      NextFrame = CTouchProcessor::GetNextFrame((CTouchProcessor *)a1, NextFrame, (struct _LIST_ENTRY *)(a1 + 56));
    }
  }
  while ( NextFrame );
  CInputDest::SetEmpty((CInputDest *)v12);
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v10);
}
