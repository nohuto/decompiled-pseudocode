/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C4340
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     EtwTracePointerNoCoalesce @ 0x1C014E430 (EtwTracePointerNoCoalesce.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01C44C8 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01CB830 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01D6700 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        CTouchProcessor *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  CTouchProcessor *v10; // rcx
  const struct CPointerMsgData *MsgData; // rax
  const struct CPointerMsgData *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  const struct CPointerInputFrame *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  CTouchProcessor *v22; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  __int64 v24; // rdx
  CTouchProcessor *v25; // rcx
  CTouchProcessor *v26; // rcx
  unsigned int v27; // ebp
  __int64 v28; // r8
  const struct CPointerQFrame *v29; // rax
  PERESOURCE *v31[8]; // [rsp+30h] [rbp-58h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v31,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  MsgData = CTouchProcessor::GetMsgData(v10, (unsigned __int64)a2);
  v12 = MsgData;
  if ( !MsgData )
    goto LABEL_19;
  v15 = CTouchProcessor::ReferenceFrame(this, *((_DWORD *)MsgData + 7));
  if ( !v15 )
    goto LABEL_19;
  v17 = *((unsigned int *)v12 + 8);
  if ( (unsigned int)v17 >= *((_DWORD *)v15 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v16);
    v17 = *((unsigned int *)v12 + 8);
  }
  v18 = *((_QWORD *)v15 + 30) + 480 * v17;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v18) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  if ( *(_WORD *)(v18 + 172) != *((_WORD *)v12 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19, v21);
  if ( a5 )
  {
    if ( !a4 )
      goto LABEL_11;
  }
  else if ( a4 )
  {
    goto LABEL_11;
  }
  if ( !a3 )
  {
    v24 = (__int64)v15;
    v25 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(this, v15, *((_DWORD *)v12 + 8), a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v22, v15, (const struct CPointerInfoNode *)v18);
  v24 = (__int64)v15;
  v25 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 35) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame((__int64)v25, v24, v21);
LABEL_19:
    v27 = 0;
    goto LABEL_20;
  }
  v27 = CTouchProcessor::DelegateCoalesceQFrame(this, v15, *(_DWORD *)(v18 + 8));
  if ( !v27 )
  {
    v29 = CTouchProcessor::GetPointerInfoNodeQFrame(v26, v15, (const struct CPointerInfoNode *)v18);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v18 + 160), *(_WORD *)(v18 + 172), *((_DWORD *)v29 + 37), 1);
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v15, v28);
LABEL_20:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v31);
  return v27;
}
