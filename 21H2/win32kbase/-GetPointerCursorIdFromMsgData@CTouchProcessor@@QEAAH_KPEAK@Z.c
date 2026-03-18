/*
 * XREFs of ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01C9470
 * Callers:
 *     ?GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z @ 0x1C01C93E4 (-GetPointerCursorId@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GPEAK@Z.c)
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z @ 0x1C00DC77C (-GetMsgPointerId@CTouchProcessor@@AEAAG_K@Z.c)
 *     ?FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z @ 0x1C00E7DA2 (-FindNodeById@CTouchProcessor@@AEAAPEAUCInputPointerNode@@GHH@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int *a3)
{
  CTouchProcessor *v6; // rcx
  unsigned __int16 MsgPointerId; // ax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // ebx
  unsigned __int16 v12; // bp
  struct CInputPointerNode *NodeById; // rax
  PERESOURCE *v15[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v15, (CTouchProcessor *)((char *)this + 32), 1);
  MsgPointerId = CTouchProcessor::GetMsgPointerId(v6, a2);
  v11 = 0;
  v12 = MsgPointerId;
  if ( !MsgPointerId )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  NodeById = CTouchProcessor::FindNodeById(this, v12, 0, 0);
  if ( NodeById )
  {
    v11 = 1;
    *a3 = *((unsigned __int16 *)NodeById + 17);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v15);
  return v11;
}
