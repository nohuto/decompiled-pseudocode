/*
 * XREFs of ?IsPointerWindowFrameMessage@CTouchProcessor@@QEAAH_KPEAUHWND__@@I_JH@Z @ 0x1C01CE580
 * Callers:
 *     <none>
 * Callees:
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C01BD200 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z @ 0x1C01CA564 (-GetPointerEventTarget@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@PEAPEAUHWND__@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C01DA6D4 (IsPointerInputMessageWithState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerWindowFrameMessage(
        CTouchProcessor *this,
        void *a2,
        HWND a3,
        unsigned int a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned int v9; // ebx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  const struct CPointerMsgData *MsgData; // rax
  CTouchProcessor *v14; // rcx
  const struct CPointerInputFrame *v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  const struct CPointerMsgData *v19; // rbp
  __int64 v20; // r8
  __int64 v21; // rcx
  CTouchProcessor *v22; // rcx
  __int64 v23; // rax
  CPointerInfoNode *v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  int PointerEventTarget; // eax
  PERESOURCE *v30[8]; // [rsp+20h] [rbp-58h] BYREF
  HWND v31; // [rsp+80h] [rbp+8h] BYREF

  v9 = 0;
  v31 = 0LL;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v30,
    (CTouchProcessor *)((char *)this + 32),
    a2);
  if ( (unsigned int)IsPointerInputMessageWithState(a4) && (!a6 || a4 - 585 > 1) )
  {
    MsgData = CTouchProcessor::GetMsgData(v11, (__int64)a2, v12);
    if ( MsgData )
    {
      v15 = CTouchProcessor::ReferenceFrame(this, *((_DWORD *)MsgData + 7));
      if ( v15 )
      {
        v19 = CTouchProcessor::GetMsgData(v14, a5, v16);
        if ( !v19 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v20);
        v21 = *((unsigned int *)v15 + 10);
        if ( *((_DWORD *)v19 + 7) == (_DWORD)v21 )
        {
          v23 = *((unsigned int *)v19 + 8);
          if ( (unsigned int)v23 >= *((_DWORD *)v15 + 12) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17, v20);
            v23 = *((unsigned int *)v19 + 8);
          }
          v24 = (CPointerInfoNode *)(*((_QWORD *)v15 + 30) + 480 * v23);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v24) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v20);
          v22 = this;
          if ( (*(_DWORD *)v24 & 0x100) != 0 )
          {
            PointerEventTarget = CTouchProcessor::GetPointerEventTarget((struct _KTHREAD **)this, v24, &v31);
            v27 = (__int64)v15;
            v22 = this;
            if ( PointerEventTarget )
            {
              CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v15, v20);
              LOBYTE(v9) = v31 == a3;
              goto LABEL_19;
            }
            goto LABEL_16;
          }
        }
        else
        {
          v22 = this;
        }
        v27 = (__int64)v15;
LABEL_16:
        CTouchProcessor::UnreferenceFrame((__int64)v22, v27, v20);
      }
    }
  }
LABEL_19:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v30);
  return v9;
}
