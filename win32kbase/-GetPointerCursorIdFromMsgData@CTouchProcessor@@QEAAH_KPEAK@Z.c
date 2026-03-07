__int64 __fastcall CTouchProcessor::GetPointerCursorIdFromMsgData(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        unsigned int *a3)
{
  unsigned int v6; // edi
  CTouchProcessor *v7; // rcx
  unsigned __int16 MsgPointerId; // bx
  struct CInputPointerNode *NodeById; // rax
  CInpLockGuard *v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]

  v6 = 1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v11, (struct CInpLockGuard *)(this + 4), 1);
  MsgPointerId = CTouchProcessor::GetMsgPointerId(v7, a2);
  if ( !MsgPointerId )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5765);
  NodeById = CTouchProcessor::FindNodeById(this, MsgPointerId, 0, 0);
  if ( NodeById )
    *a3 = *((unsigned __int16 *)NodeById + 17);
  else
    v6 = 0;
  if ( !v12 )
    CInpLockGuard::UnLock(v11);
  return v6;
}
