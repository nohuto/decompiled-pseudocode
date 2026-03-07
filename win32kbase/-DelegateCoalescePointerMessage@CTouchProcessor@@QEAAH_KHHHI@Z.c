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
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5965);
  v15 = *(_QWORD *)(v14 + 240) + 480LL * *((unsigned int *)v12 + 8);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5967);
  if ( *(_WORD *)(v15 + 172) != *((_WORD *)v12 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5968);
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
