const struct tagPOINTER_INFO *__fastcall CTouchProcessor::PrepareMakePointerMessage(
        struct _KTHREAD **this,
        void *a2,
        struct tagPOINT *a3,
        int *a4,
        int *a5,
        int *a6)
{
  CTouchProcessor *v10; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v12; // rsi
  _QWORD *FrameById; // rax
  _QWORD *v14; // rdi
  _DWORD *v15; // rbx
  _DWORD *v16; // rdi
  CInpLockGuard *v18[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v18,
    (struct CInpLockGuard *)(this + 4),
    a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v10, (__int64)a2);
  v12 = NonConstMsgData;
  if ( NonConstMsgData
    && (FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4), (v14 = FrameById) != 0LL) )
  {
    if ( *((_DWORD *)v12 + 8) >= *((_DWORD *)FrameById + 12) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13648);
    v15 = (_DWORD *)(v14[30] + 480LL * *((unsigned int *)v12 + 8));
    v16 = v15 + 42;
    if ( v15[43] != *((unsigned __int16 *)v12 + 8) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13653);
    *a3 = *(struct tagPOINT *)(v15 + 37);
    *a4 = v15[36];
    *a5 = -__CFSHR__(*v15, 18);
    *a6 = -__CFSHR__(*v15, 19);
  }
  else
  {
    v16 = 0LL;
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v18);
  return (const struct tagPOINTER_INFO *)v16;
}
