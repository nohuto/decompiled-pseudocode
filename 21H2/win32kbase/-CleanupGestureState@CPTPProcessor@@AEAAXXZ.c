/*
 * XREFs of ?CleanupGestureState@CPTPProcessor@@AEAAXXZ @ 0x1C01A5718
 * Callers:
 *     ??1CPTPProcessor@@AEAA@XZ @ 0x1C01A5238 (--1CPTPProcessor@@AEAA@XZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C01A62A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018EC58 (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 */

void __fastcall CPTPProcessor::CleanupGestureState(CPTPProcessor *this)
{
  struct CPointerInputFrame *v1; // rdx

  v1 = (struct CPointerInputFrame *)*((_QWORD *)this + 48);
  if ( v1 )
  {
    CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v1, 1);
    *((_QWORD *)this + 48) = 0LL;
  }
}
