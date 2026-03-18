/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01C9070
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        void *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  CTouchProcessor *v8; // rcx
  const struct CPointerMsgData *MsgData; // rax
  __int64 v10; // rsi
  const struct CPointerMsgData *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct CPointerInputFrame *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  PERESOURCE *v23[8]; // [rsp+20h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v23,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  MsgData = CTouchProcessor::GetMsgData(v8, (unsigned __int64)a2);
  v10 = 0LL;
  v11 = MsgData;
  if ( MsgData )
  {
    v14 = CTouchProcessor::ReferenceFrame(this, *((_DWORD *)MsgData + 7));
    if ( v14 )
    {
      v16 = *((unsigned int *)v11 + 8);
      if ( (unsigned int)v16 >= *((_DWORD *)v14 + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v12, v15);
        v16 = *((unsigned int *)v11 + 8);
      }
      v17 = *((_QWORD *)v14 + 30) + 480 * v16;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v17) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
      v21 = *((unsigned __int16 *)v11 + 8);
      if ( *(_DWORD *)(v17 + 172) != v21 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
        LOWORD(v21) = *((_WORD *)v11 + 8);
      }
      *a3 = v21;
      *a4 = *((_DWORD *)v14 + 12);
      v10 = *(_QWORD *)(v17 + 192);
      CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v14, v20);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v23);
  return v10;
}
