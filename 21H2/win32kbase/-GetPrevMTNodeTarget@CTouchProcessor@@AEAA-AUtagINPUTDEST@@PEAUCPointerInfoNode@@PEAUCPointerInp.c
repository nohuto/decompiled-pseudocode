/*
 * XREFs of ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C01CD4C0
 * Callers:
 *     ?CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ @ 0x1C01C04E0 (-CleanupManipulationThreadData@CTouchProcessor@@QEAAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C003AD68 (INPUTDEST_FROM_PWND.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC990 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ?FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1C01C59E8 (-FindValidNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x1C01D39D4 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_OWORD *__fastcall CTouchProcessor::GetPrevMTNodeTarget(
        CTouchProcessor *a1,
        _OWORD *a2,
        __int64 a3,
        const struct CPointerInputFrame *a4)
{
  const struct CPointerInputFrame *v8; // rax
  __int64 v9; // rbp
  struct CPointerInfoNode *ValidNodeInFrame; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct CPointerInfoNode *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _DWORD v24[28]; // [rsp+20h] [rbp-78h] BYREF

  memset(a2, 0, 0x70uLL);
  v8 = CTouchProcessor::ReferencePreviousFrameByDeviceInt(a1, a4);
  v9 = (__int64)v8;
  if ( v8 )
  {
    ValidNodeInFrame = CTouchProcessor::FindValidNodeInFrame((struct _KTHREAD **)a1, v8, *(_WORD *)(a3 + 172), 0LL);
    v13 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      v14 = *(unsigned __int16 *)(a3 + 172);
      if ( *((_WORD *)ValidNodeInFrame + 86) != (_WORD)v14 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v11, v12);
      v15 = HMValidateHandleNoSecure(*((_QWORD *)v13 + 24), 1);
      v16 = INPUTDEST_FROM_PWND(v24, v15);
      v17 = v16[1];
      *a2 = *v16;
      v18 = v16[2];
      a2[1] = v17;
      v19 = v16[3];
      a2[2] = v18;
      v20 = v16[4];
      a2[3] = v19;
      v21 = v16[5];
      a2[4] = v20;
      v22 = v16[6];
      a2[5] = v21;
      a2[6] = v22;
    }
    CTouchProcessor::UnreferenceFrameInt(a1, v9, v12);
  }
  return a2;
}
