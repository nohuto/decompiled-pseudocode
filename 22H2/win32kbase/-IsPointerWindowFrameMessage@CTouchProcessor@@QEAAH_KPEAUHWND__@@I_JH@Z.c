/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C0196DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCC60 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD2DC (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C0187408 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C0192F68 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C019ABD8 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01A1218 (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        unsigned int *a2,
        HWND a3,
        unsigned int a4,
        __int64 a5,
        int a6)
{
  unsigned int v9; // ebx
  const struct CPointerInputFrame *v11; // rdi
  CTouchProcessor *v12; // rcx
  __int64 v13; // rax
  CPointerInfoNode *v14; // r14
  __int64 v15; // rdx
  int PointerEventTarget; // eax
  HWND v18; // [rsp+20h] [rbp-68h] BYREF
  CInpLockGuard *v19[7]; // [rsp+28h] [rbp-60h] BYREF

  v9 = 0;
  v18 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v19,
    (CTouchProcessor *)((char *)this + 40),
    a2);
  if ( (unsigned int)IsPointerInputMessageWithState(a4) && (!a6 || a4 - 585 > 1) )
  {
    if ( a2 )
    {
      v11 = CTouchProcessor::ReferenceFrame(this, a2[7]);
      if ( v11 )
      {
        if ( !a5 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13050);
        if ( *(_DWORD *)(a5 + 28) == *((_DWORD *)v11 + 10) )
        {
          v13 = *(unsigned int *)(a5 + 32);
          if ( (unsigned int)v13 >= *((_DWORD *)v11 + 12) )
          {
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13058);
            v13 = *(unsigned int *)(a5 + 32);
          }
          v14 = (CPointerInfoNode *)(*((_QWORD *)v11 + 17) + 480 * v13);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v14) )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13060);
          v12 = this;
          if ( (*(_DWORD *)v14 & 0x100) != 0 )
          {
            PointerEventTarget = CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v14, &v18);
            v15 = (__int64)v11;
            v12 = this;
            if ( PointerEventTarget )
            {
              CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v11);
              LOBYTE(v9) = v18 == a3;
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v12 = this;
        }
        v15 = (__int64)v11;
LABEL_16:
        CTouchProcessor::UnreferenceFrame((__int64)v12, v15);
      }
    }
  }
LABEL_19:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v19);
  return v9;
}
