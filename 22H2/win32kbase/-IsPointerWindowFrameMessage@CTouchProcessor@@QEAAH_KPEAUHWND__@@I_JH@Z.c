/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01CCF40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A4E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C01C8964 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01D1DD4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D8320 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA82C (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        struct _KTHREAD **this,
        void *a2,
        HWND a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned int v9; // ebx
  CTouchProcessor *v11; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  CTouchProcessor *v13; // rcx
  __int64 v14; // rdi
  struct CPointerMsgData *v15; // rbp
  struct _KTHREAD **v16; // rcx
  CPointerInfoNode *v17; // r14
  __int64 v18; // rdx
  int PointerEventTarget; // eax
  HWND v21; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v22[7]; // [rsp+28h] [rbp-60h] BYREF

  v9 = 0;
  v21 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v22,
    (struct CInpLockGuard *)(this + 4),
    a2);
  if ( (unsigned int)IsPointerInputMessageWithState(a4) && (!a6 || a4 - 585 > 1) )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, (__int64)a2);
    if ( NonConstMsgData )
    {
      v14 = CTouchProcessor::ReferenceFrame(this, *((unsigned int *)NonConstMsgData + 7));
      if ( v14 )
      {
        v15 = CTouchProcessor::GetNonConstMsgData(v13, a5);
        if ( !v15 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13657);
        if ( *((_DWORD *)v15 + 7) == *(_DWORD *)(v14 + 40) )
        {
          if ( *((_DWORD *)v15 + 8) >= *(_DWORD *)(v14 + 48) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13664);
          v17 = (CPointerInfoNode *)(*(_QWORD *)(v14 + 240) + 480LL * *((unsigned int *)v15 + 8));
          if ( !(unsigned int)CPointerInfoNode::IsValid(v17) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13666);
          v16 = this;
          if ( (*(_DWORD *)v17 & 0x100) != 0 )
          {
            PointerEventTarget = CTouchProcessor::GetPointerEventTarget(this, v17, &v21);
            v18 = v14;
            v16 = this;
            if ( PointerEventTarget )
            {
              CTouchProcessor::UnreferenceFrame(this, v14);
              LOBYTE(v9) = v21 == a3;
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v16 = this;
        }
        v18 = v14;
LABEL_16:
        CTouchProcessor::UnreferenceFrame(v16, v18);
      }
    }
  }
LABEL_19:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v22);
  return v9;
}
