/*
 * XREFs of ?DelegateCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C018CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD2DC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     EtwTracePointerNoCoalesce @ 0x1C0123AE0 (EtwTracePointerNoCoalesce.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C018CF9C (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C019406C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ABD8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z @ 0x1C019D8EC (-SetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KIHH@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCoalescePointerMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  const struct CPointerInputFrame *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  CTouchProcessor *v13; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  __int64 v15; // rdx
  CTouchProcessor *v16; // rcx
  CTouchProcessor *v17; // rcx
  unsigned int v18; // ebp
  const struct CPointerQFrame *v19; // rax
  CInpLockGuard *v21[8]; // [rsp+30h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v21,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( !a2 )
    goto LABEL_19;
  v10 = CTouchProcessor::ReferenceFrame(this, a2[7]);
  if ( !v10 )
    goto LABEL_19;
  v11 = a2[8];
  if ( (unsigned int)v11 >= *((_DWORD *)v10 + 12) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5437);
    v11 = a2[8];
  }
  v12 = *((_QWORD *)v10 + 17) + 480 * v11;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5439);
  if ( *(_WORD *)(v12 + 172) != *((_WORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5440);
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
    v15 = (__int64)v10;
    v16 = this;
    goto LABEL_18;
  }
LABEL_11:
  CTouchProcessor::SetPointerInfoNodeDelegateAction(this, v10, a2[8], a6, a3, a4);
  PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(v13, v10, (const struct CPointerInfoNode *)v12);
  v15 = (__int64)v10;
  v16 = this;
  if ( (*((_DWORD *)PointerInfoNodeQFrame + 35) & 4) != 0 )
  {
LABEL_18:
    CTouchProcessor::UnreferenceFrame((__int64)v16, v15);
LABEL_19:
    v18 = 0;
    goto LABEL_20;
  }
  v18 = CTouchProcessor::DelegateCoalesceQFrame(this, v10, *(_DWORD *)(v12 + 8));
  if ( !v18 )
  {
    v19 = CTouchProcessor::GetPointerInfoNodeQFrame(v17, v10, (const struct CPointerInfoNode *)v12);
    EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v12 + 160), *(_WORD *)(v12 + 172), *((_DWORD *)v19 + 37), 1);
  }
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v10);
LABEL_20:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v21);
  return v18;
}
