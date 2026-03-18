/*
 * XREFs of ?PrepareMakePointerMessage@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_KPEAUtagPOINT@@PEAH22@Z @ 0x1C01D0570
 * Callers:
 *     <none>
 * Callees:
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        CTouchProcessor *this,
        void *a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  CTouchProcessor *v10; // rcx
  __int64 v11; // r8
  const struct CPointerMsgData *MsgData; // rax
  _DWORD *v13; // rsi
  const struct CPointerMsgData *v14; // rdi
  _QWORD *FrameById; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rbp
  __int64 v19; // rcx
  _DWORD *v20; // rbx
  PERESOURCE *v22[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v22,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  MsgData = CTouchProcessor::GetMsgData(v10, (__int64)a2, v11);
  v13 = 0LL;
  v14 = MsgData;
  if ( MsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
    v18 = FrameById;
    if ( FrameById )
    {
      v19 = *((unsigned int *)v14 + 8);
      if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v17);
        v19 = *((unsigned int *)v14 + 8);
      }
      v20 = (_DWORD *)(v18[30] + 480 * v19);
      v13 = v20 + 42;
      if ( v20[43] != *((unsigned __int16 *)v14 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v16, v17);
      *a3 = *(struct tagPOINT *)(v20 + 37);
      *a4 = v20[36];
      *a5 = -__CFSHR__(*v20, 18);
      *a6 = -__CFSHR__(*v20, 19);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22);
  return (const struct tagPOINTER_INFO *)v13;
}
