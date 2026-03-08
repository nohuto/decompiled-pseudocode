/*
 * XREFs of ?GetHwndReference@CTouchProcessor@@QEAAPEAUHWND__@@_KPEAGPEAI@Z @ 0x1C01F5E60
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetHwndReference(
        CTouchProcessor *this,
        void *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  CTouchProcessor *v8; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  __int64 v10; // rbx
  struct CPointerMsgData *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbp
  CInpLockGuard *v16[8]; // [rsp+20h] [rbp-68h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v16,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v8, (unsigned __int64)a2);
  v10 = 0LL;
  v11 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v12 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
    v13 = v12;
    if ( v12 )
    {
      if ( *((_DWORD *)v11 + 8) >= *(_DWORD *)(v12 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13690);
      v14 = *(_QWORD *)(v13 + 240) + 480LL * *((unsigned int *)v11 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v14) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13692);
      if ( *(_DWORD *)(v14 + 172) != *((unsigned __int16 *)v11 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13695);
      *a3 = *((_WORD *)v11 + 8);
      *a4 = *(_DWORD *)(v13 + 48);
      v10 = *(_QWORD *)(v14 + 192);
      CTouchProcessor::UnreferenceFrame(this, v13);
    }
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v16);
  return v10;
}
