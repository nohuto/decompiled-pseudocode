/*
 * XREFs of ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A5780
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A61D0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EtwTraceCopyPointerInputFrameStart @ 0x1C0121EA0 (EtwTraceCopyPointerInputFrameStart.c)
 *     EtwTraceCopyPointerInputFrameStop @ 0x1C0121ED0 (EtwTraceCopyPointerInputFrameStop.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C018BEFC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A567C (-CopyPointersIntoFrame@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@IPEBUPTPEnginePointerNode@@_N.c)
 */

void __fastcall CPTPProcessor::CreateGestureCache(
        CPTPProcessor *this,
        __int64 a2,
        const struct PTPEnginePointerNode *a3)
{
  struct CPointerInputFrame *v5; // rbx
  __int64 v6; // rcx
  CPTPProcessor *v7; // rcx
  __int64 v8; // r8

  EtwTraceCopyPointerInputFrameStart((__int64)this);
  v5 = (struct CPointerInputFrame *)CTouchProcessor::CopyPTPPointerInputFrame(
                                      (struct _KTHREAD **)this,
                                      *((struct CPointerInputFrame **)this + 51),
                                      *((_QWORD *)this + 50));
  EtwTraceCopyPointerInputFrameStop(v6);
  if ( v5 )
  {
    *((_QWORD *)this + 48) = v5;
    CPTPProcessor::CopyPointersIntoFrame(v7, v5, v8, a3, 1);
  }
}
