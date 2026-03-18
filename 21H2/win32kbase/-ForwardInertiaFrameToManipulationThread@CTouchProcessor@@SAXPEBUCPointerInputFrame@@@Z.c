/*
 * XREFs of ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C5A90
 * Callers:
 *     ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x1C01E1778 (-RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTEROP_CALLBACK@@@Z @ 0x1C01C5AE0 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@W4MIT_INPUT_INTE.c)
 */

void __fastcall CTouchProcessor::ForwardInertiaFrameToManipulationThread(const struct CPointerInputFrame *a1)
{
  __int64 v1; // rbx
  PERESOURCE *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)a1;
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v3, (struct CInpLockGuard *)(*(_QWORD *)a1 + 32LL), 1);
  CTouchProcessor::ForwardInputToManipulationThread(v1, a1, 2LL);
  CInpLockGuardShared::~CInpLockGuardShared(v3);
}
