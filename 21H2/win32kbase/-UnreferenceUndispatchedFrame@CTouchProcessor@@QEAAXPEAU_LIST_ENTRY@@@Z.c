/*
 * XREFs of ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C019FD20
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00CD17C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z @ 0x1C018F590 (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKK@Z.c)
 *     ?GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C019413C (-GetPointerInfoNodeQFrame@CTouchProcessor@@AEAAPEBUCPointerQFrame@@PEBUCPointerInputFrame@@PEBUC.c)
 *     ?GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z @ 0x1C01958F8 (-GetPrevMsgId@CTouchProcessor@@AEAA_K_K@Z.c)
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1C0196890 (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C019FAA8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ApiSetEditionEdgyResetDataFrames @ 0x1C01CB478 (ApiSetEditionEdgyResetDataFrames.c)
 */

void __fastcall CTouchProcessor::UnreferenceUndispatchedFrame(struct _KTHREAD **this, struct _LIST_ENTRY *a2)
{
  __int64 v4; // rdx
  CTouchProcessor *v5; // rcx
  struct _LIST_ENTRY **p_Blink; // rdi
  unsigned int i; // esi
  __int64 v8; // rbx
  PVOID CurrentProcess; // rax
  int v10; // r14d
  __int64 *PrevMsgId; // rax
  CInpLockGuard *v12[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v12,
    (struct CInpLockGuard *)(this + 5),
    0LL);
  p_Blink = &a2[-2].Blink;
  for ( i = 0; i < *((_DWORD *)p_Blink + 12); ++i )
  {
    v8 = (__int64)&p_Blink[17][30 * i];
    CurrentProcess = (PVOID)PsGetCurrentProcess(v5, v4);
    if ( !CurrentProcess
      || CurrentProcess != g_pepDwm
      || !CPointerInfoNode::IsForManipulationThread((CPointerInfoNode *)v8) && (*(_DWORD *)(v8 + 4) & 0x200) == 0 )
    {
      if ( !*(_QWORD *)(v8 + 16)
        || (v5 = (CTouchProcessor *)*((unsigned int *)CTouchProcessor::GetPointerInfoNodeQFrame(
                                                        v5,
                                                        (const struct CPointerInputFrame *)p_Blink,
                                                        (const struct CPointerInfoNode *)v8)
                                    + 35),
            ((unsigned __int8)v5 & 4) != 0) )
      {
        if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v8) )
          CTouchProcessor::FreePointerInfoNode(this, v4, *((_DWORD *)p_Blink + 10), i);
      }
      else
      {
        v10 = *(_DWORD *)(v8 + 180) & 2;
        if ( (*(_DWORD *)(v8 + 180) & 1) == 0 )
        {
          PrevMsgId = CTouchProcessor::GetPrevMsgId(v5, *(__int64 **)(v8 + 16));
          if ( PrevMsgId )
          {
            v5 = (CTouchProcessor *)*((unsigned int *)PrevMsgId + 9);
            if ( ((unsigned __int8)v5 & 0x40) != 0 )
              CTouchProcessor::UnreferenceMsgData(this, (__int64)PrevMsgId, 1);
          }
        }
        if ( !v10 )
          CTouchProcessor::UnreferenceMsgData(this, *(_QWORD *)(v8 + 16), 1);
      }
    }
  }
  ApiSetEditionEdgyResetDataFrames(p_Blink);
  CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)p_Blink);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v12);
}
