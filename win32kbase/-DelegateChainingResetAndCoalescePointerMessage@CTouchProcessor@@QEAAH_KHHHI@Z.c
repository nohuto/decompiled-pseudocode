/*
 * XREFs of ?DelegateChainingResetAndCoalescePointerMessage@CTouchProcessor@@QEAAH_KHHHI@Z @ 0x1C01EFBF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     Feature_AbydosInfra__private_IsEnabledDeviceUsage @ 0x1C00DFE24 (Feature_AbydosInfra__private_IsEnabledDeviceUsage.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     EtwTracePointerNoCoalesce @ 0x1C0163E50 (EtwTracePointerNoCoalesce.c)
 *     ?DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KI@Z @ 0x1C01EFDC8 (-DelegateChainingResetSetPointerInfoNodeDelegateAction@CTouchProcessor@@AEAAXPEBUCPointerInputFr.c)
 *     ?DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z @ 0x1C01F0154 (-DelegateCoalesceQFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@K@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01F8C28 (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::DelegateChainingResetAndCoalescePointerMessage(
        CTouchProcessor *this,
        void *a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6)
{
  __int64 result; // rax
  CTouchProcessor *v11; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  CTouchProcessor *v17; // rcx
  const struct CPointerQFrame *PointerInfoNodeQFrame; // rax
  __int64 v19; // rdx
  CTouchProcessor *v20; // rcx
  CTouchProcessor *v21; // rcx
  unsigned int v22; // esi
  const struct CPointerQFrame *v23; // rax
  CInpLockGuard *v24[7]; // [rsp+28h] [rbp-50h] BYREF

  result = Feature_AbydosInfra__private_IsEnabledDeviceUsage();
  if ( (_DWORD)result )
  {
    CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
      (CInpLockGuardExclusiveIfNeeded *)v24,
      (CTouchProcessor *)((char *)this + 32),
      a2);
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, (unsigned __int64)a2);
    v13 = NonConstMsgData;
    if ( !NonConstMsgData )
      goto LABEL_20;
    v14 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
    v15 = v14;
    if ( !v14 )
      goto LABEL_20;
    if ( *((_DWORD *)v13 + 8) >= *(_DWORD *)(v14 + 48) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6083);
    v16 = *(_QWORD *)(v15 + 240) + 480LL * *((unsigned int *)v13 + 8);
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6085);
    if ( *(_WORD *)(v16 + 172) != *((_WORD *)v13 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 6086);
    if ( a5 )
    {
      if ( !a4 )
        goto LABEL_12;
    }
    else if ( a4 )
    {
      goto LABEL_12;
    }
    if ( !a3 )
    {
      v19 = v15;
      v20 = this;
LABEL_19:
      CTouchProcessor::UnreferenceFrame(v20, v19);
LABEL_20:
      v22 = 0;
LABEL_21:
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v24);
      return v22;
    }
LABEL_12:
    CTouchProcessor::DelegateChainingResetSetPointerInfoNodeDelegateAction(
      this,
      (const struct CPointerInputFrame *)v15,
      *((_DWORD *)v13 + 8),
      a6);
    PointerInfoNodeQFrame = CTouchProcessor::GetPointerInfoNodeQFrame(
                              v17,
                              (const struct CPointerInputFrame *)v15,
                              (const struct CPointerInfoNode *)v16);
    v19 = v15;
    v20 = this;
    if ( (*((_DWORD *)PointerInfoNodeQFrame + 35) & 4) == 0 )
    {
      v22 = CTouchProcessor::DelegateCoalesceQFrame(this, (const struct CPointerInputFrame *)v15, *(_DWORD *)(v16 + 8));
      if ( !v22 )
      {
        v23 = CTouchProcessor::GetPointerInfoNodeQFrame(
                v21,
                (const struct CPointerInputFrame *)v15,
                (const struct CPointerInfoNode *)v16);
        EtwTracePointerNoCoalesce(*(unsigned __int16 *)(v16 + 160), *(_WORD *)(v16 + 172), *((_DWORD *)v23 + 37), 1);
      }
      CTouchProcessor::UnreferenceFrame(this, v15);
      goto LABEL_21;
    }
    goto LABEL_19;
  }
  return result;
}
