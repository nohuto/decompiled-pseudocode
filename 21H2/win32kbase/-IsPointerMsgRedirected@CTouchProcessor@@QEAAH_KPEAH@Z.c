/*
 * XREFs of ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C01CE450
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMsgRedirected(CTouchProcessor *this, __int64 a2, int *a3)
{
  unsigned int v6; // edi
  CTouchProcessor *v7; // rcx
  __int64 v8; // r8
  const struct CPointerMsgData *MsgData; // rax
  const struct CPointerMsgData *v10; // rsi
  _QWORD *FrameById; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  CPointerInfoNode *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  PERESOURCE *v21[3]; // [rsp+20h] [rbp-18h] BYREF

  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v21, (CTouchProcessor *)((char *)this + 32), 1);
  v6 = 0;
  *a3 = 0;
  MsgData = CTouchProcessor::GetMsgData(v7, a2, v8);
  v10 = MsgData;
  if ( MsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
    v14 = FrameById;
    if ( FrameById )
    {
      v15 = *((unsigned int *)v10 + 8);
      if ( (unsigned int)v15 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v12, v13);
        LODWORD(v15) = *((_DWORD *)v10 + 8);
      }
      v16 = (CPointerInfoNode *)(v14[30] + 480LL * (unsigned int)v15);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v16) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      if ( *((_DWORD *)v16 + 43) != *((unsigned __int16 *)v10 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      if ( (*((_DWORD *)v16 + 1) & 0x80u) != 0 )
        *a3 = 1;
      v6 = -__CFSHR__(*(_DWORD *)v16, 11);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v21);
  return v6;
}
