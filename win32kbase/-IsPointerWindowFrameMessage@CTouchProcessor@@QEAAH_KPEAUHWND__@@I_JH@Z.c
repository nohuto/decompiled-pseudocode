/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01FBD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01F6280 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C01F7774 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C0200BB4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C02070EC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C02095DC (IsPointerInputMessageWithState.c)
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
  __int64 v18; // r9
  __int64 v19; // rdx
  int PointerEventTarget; // eax
  HWND v22; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v23[7]; // [rsp+28h] [rbp-60h] BYREF

  v9 = 0;
  v22 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v23,
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
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13748);
        if ( *((_DWORD *)v15 + 7) == *(_DWORD *)(v14 + 40) )
        {
          if ( *((_DWORD *)v15 + 8) >= *(_DWORD *)(v14 + 48) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13755);
          v17 = (CPointerInfoNode *)(*(_QWORD *)(v14 + 240) + 480LL * *((unsigned int *)v15 + 8));
          if ( !(unsigned int)CPointerInfoNode::IsValid(v17) )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13757);
          v16 = this;
          if ( (*(_DWORD *)v17 & 0x100) != 0 )
          {
            PointerEventTarget = CTouchProcessor::GetPointerEventTarget(this, v17, &v22, v18);
            v19 = v14;
            v16 = this;
            if ( PointerEventTarget )
            {
              CTouchProcessor::UnreferenceFrame(this, v14);
              LOBYTE(v9) = v22 == a3;
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v16 = this;
        }
        v19 = v14;
LABEL_16:
        CTouchProcessor::UnreferenceFrame(v16, v19);
      }
    }
  }
LABEL_19:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v23);
  return v9;
}
