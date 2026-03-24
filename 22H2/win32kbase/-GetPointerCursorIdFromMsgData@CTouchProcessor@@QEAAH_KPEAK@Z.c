/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01920E0
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C0192054 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCCC0 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C018E2A4 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(struct _KTHREAD **this, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  unsigned __int16 v7; // di
  struct CInputPointerNode *NodeById; // rax
  CInpLockGuard *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v10, (struct CInpLockGuard *)(this + 5), 1);
  v6 = 0;
  if ( a2 )
  {
    v7 = *(_WORD *)(a2 + 16);
    if ( v7 )
      goto LABEL_5;
  }
  else
  {
    v7 = 0;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5237);
LABEL_5:
  NodeById = CTouchProcessor::FindNodeById(this, v7, 0, 0);
  if ( NodeById )
  {
    v6 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v10);
  return v6;
}
