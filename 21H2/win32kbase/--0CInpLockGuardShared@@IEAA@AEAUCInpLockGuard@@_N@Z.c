/*
 * XREFs of ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614
 * Callers:
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00DC65C (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x1C01C5A90 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z @ 0x1C01C9360 (-GetPointerBarrelVisualization@CTouchProcessor@@QEAAHG@Z.c)
 *     ?GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z @ 0x1C01C9470 (-GetPointerCursorIdFromMsgData@CTouchProcessor@@QEAAH_KPEAK@Z.c)
 *     ?GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z @ 0x1C01C9500 (-GetPointerData@CTouchProcessor@@QEAAH_KKIPEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01C97E0 (-GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z.c)
 *     ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01CA0D0 (-GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z.c)
 *     ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01CA750 (-GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z @ 0x1C01CB0E0 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@_K@Z.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01CC070 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 *     ?GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z @ 0x1C01CD420 (-GetPointerVisualization@CTouchProcessor@@QEAAHGPEAH@Z.c)
 *     ?IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z @ 0x1C01CE450 (-IsPointerMsgRedirected@CTouchProcessor@@QEAAH_KPEAH@Z.c)
 *     ?IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z @ 0x1C01CE530 (-IsPointerPrimary@CTouchProcessor@@QEAAH_K@Z.c)
 *     ?ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z @ 0x1C01D7D60 (-ThreadHasPrimaryCaptureExternal@CTouchProcessor@@QEAAHQEAUtagTHREADINFO@@G@Z.c)
 * Callees:
 *     ?LockShared@CInpLockGuard@@QEAAX_N@Z @ 0x1C00DCDC0 (-LockShared@CInpLockGuard@@QEAAX_N@Z.c)
 */

CInpLockGuardShared *__fastcall CInpLockGuardShared::CInpLockGuardShared(
        CInpLockGuardShared *this,
        struct CInpLockGuard *a2,
        bool a3)
{
  BOOL v4; // r9d

  *(_QWORD *)this = a2;
  v4 = *((_QWORD *)a2 + 1) == (_QWORD)KeGetCurrentThread();
  *((_DWORD *)this + 2) = v4;
  if ( !v4 )
    CInpLockGuard::LockShared(a2, a3);
  return this;
}
