/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01C1080
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     EtwTracePointerNoCoalesce @ 0x1C013AEF0 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01C1264 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01C9E18 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01D1DD4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C01D5CC4 (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D8320 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
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
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  CTouchProcessor *v16; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  __int64 v18; // rdx
  CTouchProcessor *v19; // rcx
  CTouchProcessor *v20; // rcx
  unsigned int v21; // ebp
  const struct CPointerQFrame *v22; // rax
  CInpLockGuard *v24[8]; // [rsp+30h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v24,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (unsigned __int64)a2);
  v12 = NonConstMsgData;
  if ( !NonConstMsgData )
    goto LABEL_19;
  v13 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
  v14 = v13;
  if ( !v13 )
    goto LABEL_19;
  if ( *((_DWORD *)v12 + 8) >= *(_DWORD *)(v13 + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5882);
  v15 = *(_QWORD *)(v14 + 240) + 480LL * *((unsigned int *)v12 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5884);
  if ( *(_WORD *)(v15 + 172) != *((_WORD *)v12 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5885);
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
    v18 = v14;
    v19 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(
    this,
    (const struct CPointerInputFrame *)v14,
    *((_DWORD *)v12 + 8),
    a6,
    a3,
    a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(
                            v16,
                            (const struct CPointerInputFrame *)v14,
                            (const struct CPointerInfoNode *)v15);
  v18 = v14;
  v19 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 35) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame(v19, v18);
LABEL_19:
    v21 = 0;
    goto LABEL_20;
  }
  v21 = CTouchProcessor::DelegateCoalesceQFrame(this, (const struct CPointerInputFrame *)v14, *(_DWORD *)(v15 + 8));
  if ( !v21 )
  {
    v22 = CTouchProcessor::GetPointerInfoNodeQFrame(
            v20,
            (const struct CPointerInputFrame *)v14,
            (const struct CPointerInfoNode *)v15);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v15 + 160), *(_WORD *)(v15 + 172), *((_DWORD *)v22 + 37), 1);
  }
  CTouchProcessor::UnreferenceFrame(this, v14);
LABEL_20:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v24);
  return v21;
}
