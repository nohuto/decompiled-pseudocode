/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C01FABF0
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C00C9900 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0079D90 (INPUTDEST_FROM_PWND.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01F1B40 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C0201654 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C0207468 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        CTouchProcessor *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  const struct CPointerInputFrame *v8; // rax
  const struct CPointerInputFrame *v9; // rbx
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  struct CPointerInfoNode *v11; // rbp
  __int64 v12; // rax
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _DWORD v21[28]; // [rsp+20h] [rbp-88h] BYREF

  memset(a2, 0, 0x70uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((struct _KTHREAD **)a1, v8, *(_WORD *)(a3 + 172), 0LL);
    v11 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      if ( *((_WORD *)ValidNodeInFrame + 86) != *(_WORD *)(a3 + 172) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 10820);
      v12 = HMValidateHandleNoSecure(*((_QWORD *)v11 + 24), 1);
      v13 = INPUTDEST_FROM_PWND(v21, v12);
      v14 = v13[1];
      *a2 = *v13;
      v15 = v13[2];
      a2[1] = v14;
      v16 = v13[3];
      a2[2] = v15;
      v17 = v13[4];
      a2[3] = v16;
      v18 = v13[5];
      a2[4] = v17;
      v19 = v13[6];
      a2[5] = v18;
      a2[6] = v19;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9);
  }
  return a2;
}
